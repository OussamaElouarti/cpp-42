#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->_name = name;
    this->_damage = damage;
    this->_APcost = apcost;
}

AWeapon::~AWeapon()
{
    
}

std::string AWeapon::getName() const
{
    return (this->_name);
}

int AWeapon::getDamage() const
{
    return (this->_damage);
}

int AWeapon::getAPCost() const
{
    return (this->_APcost);
}
