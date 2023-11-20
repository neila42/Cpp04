#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat constructor called." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &otherWrongCat) : WrongAnimal(otherWrongCat._type)
{
	std::cout << "WrongCat copy constructor called.";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound" << std::endl;
}
