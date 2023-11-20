#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Dog constructor called." << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog &otherDog) : Animal(otherDog._type)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog	&Dog::operator=(Dog const &otherDog)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_type = otherDog._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
