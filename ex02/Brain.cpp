#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(Brain &otherBrain)
{
	std::cout << "Brain copy constructor called." << std::endl;
	int i = 0;
	while (i < 100)
	{
		(this->_ideas)[i] = (otherBrain._ideas)[i];
		i++;
	}
	return;
}

Brain &Brain::operator=(const Brain &otherBrain)
{
	int i = 0;
	while (i < 100)
	{
		(this->_ideas)[i] = (otherBrain._ideas)[i];
		i++;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}
