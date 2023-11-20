#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal constructor called." << std::endl;
	this->_type = "Animal";
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called with type " << this->_type << std::endl;
}

Animal::Animal(Animal &otherAnimal) : _type(otherAnimal._type)
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal	&Animal::operator=(const Animal &otherAnimal)
{
	this->_type = otherAnimal._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Unknown sound" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
