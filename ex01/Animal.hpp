#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal {
public:
	Animal(void);
	Animal(std::string type);
	Animal(Animal &otherAnimal);
	virtual ~Animal();
	Animal &operator=(const Animal &otherAnimal);
	void virtual makeSound(void) const;
	std::string	getType(void) const;
protected:
	std::string	_type;
};

#endif
