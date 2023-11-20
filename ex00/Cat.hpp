#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <iostream>

class Cat : virtual public Animal {
public:
	Cat(void);
	Cat(Cat &otherCat);
	virtual ~Cat();
	Cat &operator=(const Cat &otherCat);
	void makeSound(void) const;
};

#endif
