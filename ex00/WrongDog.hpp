#ifndef WRONG_DOG_HPP
# define WRONG_DOG_HPP
# include "WrongAnimal.hpp"
# include <iostream>

class WrongDog : virtual public WrongAnimal {
public:
	WrongDog(void);
	WrongDog(WrongDog &otherWrongDog);
	~WrongDog();
	WrongDog &operator=(const WrongDog &otherWrongDog);
	void makeSound(void) const;
};

#endif
