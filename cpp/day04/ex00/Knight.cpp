#include "Knight.hpp"

Knight::Knight(std::string name) : Victim(name)
{
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}

Knight::~Knight()
{
    std::cout << "Bleuark..." << std::endl;
}

void Knight::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a red pony!" << std::endl;
}

std::string  Knight::get_name()
{
    return( this->_name);
}