#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : virtual public AMateria {
public:
	Cure(void);
	Cure(const Cure &otherCure);
	~Cure();
	Cure &operator=(const Cure &otherCure);
	Cure *clone() const;
	void use(ICharacter &target);
};

#endif
