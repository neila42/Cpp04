#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : virtual public Animal {
public:
	Dog(void);
	Dog(Dog &otherDog);
	virtual ~Dog();
	Dog &operator=(const Dog &otherDog);
	void makeSound(void) const;
private:
	Brain *_brain;
};

#endif
