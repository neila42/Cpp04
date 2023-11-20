#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
}

Ice::Ice(const Ice &otherIce) : AMateria()
{
	(void) otherIce;
	this->_type = "ice";
}

Ice::~Ice()
{}

Ice	&Ice::operator=(const Ice &otherIce)
{
	(void) otherIce;
	return (*this);
}

Ice	*Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
