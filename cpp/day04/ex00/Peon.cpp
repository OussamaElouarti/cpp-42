#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon & copy)
{
    this->_name = copy.get_name();
    std::cout << "Zog zog." << std::endl;
}

Peon &		operator=( Peon const & rhs )
{
    this->_name = rhs.get_name();
    return(*this);
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::string Peon::get_name()
{
    return(this->_name);
}