#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void)
{
	std::cout << "Cat constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat &otherCat) : AAnimal(otherCat._type)
{
	std::cout << "Cat copy constructor called.";
	delete (this->_brain);
	this->_brain = new Brain(*(otherCat._brain));
}

Cat	&Cat::operator=(Cat const &otherCat)
{
	this->_type = otherCat._type;
	delete (this->_brain);
	this->_brain = new Brain(*(otherCat._brain));
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called." << std::endl;
	delete (this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}
