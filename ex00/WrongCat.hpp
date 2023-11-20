#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP
# include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : virtual public WrongAnimal {
public:
	WrongCat(void);
	WrongCat(WrongCat &otherWrongCat);
	~WrongCat();
	WrongCat &operator=(const WrongCat &otherWrongCat);
	void makeSound(void) const;
};

#endif
