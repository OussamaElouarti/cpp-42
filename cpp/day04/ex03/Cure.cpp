#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure& copy) : AMateria(copy)
{

}

Cure::~Cure()
{

}

Cure & Cure::operator=(const Cure& op)
{
	if (this == &op)
		return (*this);
	AMateria::operator=(op);
	return (*this);
}

AMateria*		Cure::clone(void) const 
{ 
	return (new Cure(*this)); 
}

void			Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}