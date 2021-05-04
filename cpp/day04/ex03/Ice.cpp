#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& copy) : AMateria(copy)
{

}

Ice::~Ice()
{

}

Ice & Ice::operator=(const Ice& op)
{
	if (this == &op)
		return (*this);
	AMateria::operator=(op);
	return (*this);
}

AMateria*		Ice::clone(void) const
{
	return (new Ice(*this));
}

void			Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}