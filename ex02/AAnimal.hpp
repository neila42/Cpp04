#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class	AAnimal {
public:
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(AAnimal &AAnimal);
	virtual ~AAnimal();
	AAnimal &operator=(const AAnimal &AAnimal);
	void virtual makeSound(void) const = 0;
	std::string	getType(void) const;
protected:
	std::string	_type;
};

#endif
