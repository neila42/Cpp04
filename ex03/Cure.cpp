#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void)
{
    this->_type = "cure";
}

Cure::Cure(const Cure &otherCure) : AMateria()
{
    (void) otherCure;
    this->_type = "cure";
}

Cure::~Cure()
{}

Cure &Cure::operator=(const Cure &otherCure)
{
    (void) otherCure;
    return (*this);
}

Cure *Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
