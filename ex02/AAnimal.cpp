#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void)
{
	std::cout << "Animal constructor called." << std::endl;
	this->_type = "Animal";
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called with type " << this->_type << std::endl;
}

AAnimal::AAnimal(AAnimal &AAnimal) : _type(AAnimal._type)
{
	std::cout << "Anmal copy constructor called." << std::endl;
}

AAnimal	&AAnimal::operator=(const AAnimal &AAnimal)
{
	this->_type = AAnimal._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
