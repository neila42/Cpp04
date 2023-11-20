#include "Character.hpp"
#include <iostream>

Character::Character(void)
{
    this->_name = "Name";
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        this->_inventory[slotIndex] = NULL;
        slotIndex++;
    }
}

Character::Character(std::string name) : _name(name)
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        this->_inventory[slotIndex] = NULL;
        slotIndex++;
    }
}

Character::Character(const Character &otherCharacter)
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (!otherCharacter._inventory[slotIndex])
            this->_inventory[slotIndex] = NULL;
        else
            this->_inventory[slotIndex] = otherCharacter._inventory[slotIndex]->clone();
        slotIndex++;
    }
    this->_name = otherCharacter._name;
}

Character &Character::operator=(const Character &otherCharacter)
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (this->_inventory[slotIndex])
            delete this->_inventory[slotIndex];
        if (!otherCharacter._inventory[slotIndex])
            this->_inventory[slotIndex] = NULL;
        else
            this->_inventory[slotIndex] = otherCharacter._inventory[slotIndex]->clone();
        slotIndex++;
    }
    return (*this);
}

Character::~Character()
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (this->_inventory[slotIndex])
            delete this->_inventory[slotIndex];
        slotIndex++;
    }
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria *materia)
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (!this->_inventory[slotIndex])
        {
            this->_inventory[slotIndex] = materia;
            break;
        }
        slotIndex++;
    }
}

void Character::unequip(int slotIdx)
{
    if (this->_inventory[slotIdx])
        this->_inventory[slotIdx] = NULL;
}

void Character::use(int slotIdx, ICharacter &target)
{
    if (this->_inventory[slotIdx])
        this->_inventory[slotIdx]->use(target);
}
