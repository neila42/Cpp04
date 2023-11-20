#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog(void)
{
	std::cout << "WrongDog constructor called." << std::endl;
	this->_type = "WrongDog";
}

WrongDog::WrongDog(WrongDog &otherWrongDog) : WrongAnimal(otherWrongDog._type)
{
	std::cout << "WrongDog copy constructor called.";
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog destructor called." << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "WrongDog sound" << std::endl;
}
