#include "Victim.hpp"

Victim::Victim(std::string name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I am " << i.get_name() << " and I like otters!" << std::endl;
	return o;
}

void Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
} 

std::string Victim::get_name(void) const
{
    return (this->_name);
}