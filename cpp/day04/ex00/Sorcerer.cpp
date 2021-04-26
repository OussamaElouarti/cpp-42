#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name , std::string title)
{
    this->_name = name;
    this->_title = title;
    std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
     std::cout << this->_name << ", " << this->_title << ", is dead.  Consequences will never be the same!" << std::endl;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	o << "I am " << i.get_name() << ", " << i.get_title() << ", and I like ponies!" << std::endl;
	return o;
}

std::string Sorcerer::get_title(void) const
{
    return (this->_title);
}

std::string Sorcerer::get_name(void) const
{
    return (this->_name);
}

void Sorcerer::polymorph(Victim const & a) const
{
    a.getPolymorphed();
}
