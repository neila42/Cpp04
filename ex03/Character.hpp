#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : virtual public ICharacter {
public:
    Character(void);
    Character(std::string name);
    Character(const Character &otherCharacter);
    Character &operator=(const Character &otherCharacter);
    ~Character();
    std::string const &getName(void) const;
    void equip(AMateria *materia);
    void unequip(int slotIndex);
    void use(int slotIndex, ICharacter &target);
private:
    std::string _name;
    AMateria *_inventory[4];
};

#endif
