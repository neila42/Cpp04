#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(void)
{}

AMateria::AMateria(const std::string &type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria &m)
{
	this->_type = m._type;
}

AMateria::~AMateria()
{}

AMateria	&AMateria::operator=(const AMateria &m)
{
	this->_type = m._type;
	return (*this);
}

const std::string	&AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* " << this->_type << " effect applied on " << target.getName() << std::endl;
}
