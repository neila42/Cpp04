#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called." << this->_type << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(Dog &otherDog) : AAnimal(otherDog._type)
{
	std::cout << "Dog copy constructor called." << std::endl;
	delete (this->_brain);
	this->_brain = new Brain(*(otherDog._brain));
}

Dog	&Dog::operator=(Dog const &otherDog)
{
	this->_type = otherDog._type;
	delete (this->_brain);
	this->_brain = new Brain(*(otherDog._brain));
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called." << std::endl;
	delete (this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
