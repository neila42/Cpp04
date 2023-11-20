#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : virtual public AAnimal {
public:
	Cat(void);
	Cat(Cat &otherCat);	
	virtual ~Cat();
	Cat &operator=(const Cat &otherCat);
	void makeSound(void) const;
private:
	Brain *_brain;
};

#endif
