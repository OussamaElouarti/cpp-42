#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
}

Character::Character(const Character& copy)
{
	this->_name = std::string(copy.getName());
	for (int i = 0; i < 4; i++)
		if (this->_inv[i])
			delete this->_inv[i];
	for (int i = 0; i < 4; i++)
		if (copy._inv[i])
			this->_inv[i] = copy._inv[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inv[i])
			delete this->_inv[i];
}

Character & Character::operator=(const Character& op)
{
	if (this == &op)
		return (*this);
	this->_name = op.getName();
	
	for (int i = 0; i < 4; i++)
		if (op._inv[i])
			this->_inv[i] = op._inv[i];
		else
			this->_inv[i] = NULL;
	
	return (*this);
}
std::string const &	Character::getName(void) const { return (this->_name); }


void				Character::equip(AMateria* m)
{
	int i = 0;

	for (i = 0; i < 4 && this->_inv[i] != NULL; i++);

	if (i < 4)
		this->_inv[i] = m;
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx] = NULL;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
		this->_inv[idx]->use(target);
}