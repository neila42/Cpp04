#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <iostream>

class ICharacter;

class AMateria {
public:
	AMateria(void);
	AMateria(const std::string &type);
	AMateria(const AMateria &m);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &m);

	const std::string &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
protected:
	std::string _type;
};

#endif
