#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat constructor called." << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat &otherCat) : Animal(otherCat._type)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator=(Cat const &otherCat)
{
	std::cout << "Cat assignment operator called." << std::endl;
	this->_type = otherCat._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

