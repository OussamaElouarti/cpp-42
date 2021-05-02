#include "Character.hpp"

Character::Character(std::string const & name)
{
    this->_name = name;
    this->_AP = 40;
}

Character::~Character()
{
    
}
void    Character::recoverAP()
{
    if (this->_AP == 40)
        std::cout << "already full AP";
    else
        this->_AP += 10;
    if (this->_AP > 40)
        this->_AP = 40;
}

void    Character::attack(Enemy* enemy)
{
    std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->aweapon->getName() << std::endl;
    this->_AP -= this->aweapon->getAPCost();
    if (this->_AP <= 0)
        std::cout << "NO AP left! RECOVER!" << std::endl;
    else
        this->aweapon->attack();
    enemy->takeDamage(this->aweapon->getDamage());
}

void    Character::equip(AWeapon* aweapon)
{
    this->aweapon = aweapon;
}

int Character::getAP() const
{
    return (this->_AP);
}

std::string Character::getName() const
{
    return (this->_name);
}

AWeapon *Character::getAweapon() const
{
    return (this->aweapon);
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
    if (i.getAweapon()->getDamage() != 50 && i.getAweapon()->getDamage() != 21)
        o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;
    else
        o << i.getName() << " has " << i.getAP() << " AP and wields a " <<i.getAweapon()->getName() << std::endl;
    return o;
}