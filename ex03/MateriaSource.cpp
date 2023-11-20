#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        this->_templates[slotIndex] = NULL;
        slotIndex++;
    }
}

MateriaSource::MateriaSource(const MateriaSource &otherMateriaSource) : IMateriaSource()
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (!otherMateriaSource._templates[slotIndex])
            this->_templates[slotIndex] = NULL;
        else
            this->_templates[slotIndex] = otherMateriaSource._templates[slotIndex]->clone();
        slotIndex++;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &otherMateriaSource)
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (this->_templates[slotIndex])
            delete this->_templates[slotIndex];
        if (!otherMateriaSource._templates[slotIndex])
            this->_templates[slotIndex] = NULL;
        else
            this->_templates[slotIndex] = otherMateriaSource._templates[slotIndex]->clone();
        slotIndex++;
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (this->_templates[slotIndex])
            delete this->_templates[slotIndex];
        slotIndex++;
    }
}

void MateriaSource::learnMateria(AMateria *materia)
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (!this->_templates[slotIndex])
        {
            this->_templates[slotIndex] = materia;
            break;
        }
        slotIndex++;
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int slotIndex = 0;
    while (slotIndex < 4)
    {
        if (this->_templates[slotIndex] && this->_templates[slotIndex]->getType() == type)
            return this->_templates[slotIndex]->clone();
        slotIndex++;
    }
    return (0);
}
