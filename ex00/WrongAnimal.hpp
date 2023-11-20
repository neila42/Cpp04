#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
# include <iostream>

class	WrongAnimal {
public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal &otherWrongAnimal);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &otherWrongAnimal);
	void makeSound(void) const;
	std::string	getType(void) const;
	
protected:
	std::string	_type;
};

#endif
