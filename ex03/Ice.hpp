#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : virtual public AMateria {
public:
	Ice(void);
	Ice(const Ice &otherIce);
	~Ice();
	Ice &operator=(const Ice &otherIce);
	Ice	*clone() const;
	void use(ICharacter &target);
};

#endif
