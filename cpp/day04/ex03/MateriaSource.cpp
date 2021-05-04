#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		if (copy._templates[i])
			this->_templates[i] = copy._templates[i];
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_templates[i] != NULL)
			delete this->_templates[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < 4; i++)
		if (op._templates[i])
			this->_templates[i] = op._templates[i];
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	for (i = 0; i < 4 && this->_templates[i] != NULL; i++);

	if (i < 4)
		this->_templates[i] = m;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->_templates[i] != NULL
			&& this->_templates[i]->getType() == type)
				return (this->_templates[i]->clone());
	return (0);
}