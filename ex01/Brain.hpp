#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain {
public:
	Brain(void);
	Brain(Brain &otherBrain);
	~Brain();
	Brain &operator=(const Brain &otherBrain);
protected:
	std::string	_ideas[100];
};

#endif
