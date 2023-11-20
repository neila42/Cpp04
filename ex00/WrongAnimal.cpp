#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called." << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called with type " << this->_type << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &otherWrongAnimal) : _type(otherWrongAnimal._type)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &otherWrongAnimal)
{
	this->_type = otherWrongAnimal._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}
