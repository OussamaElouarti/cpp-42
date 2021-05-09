#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
{
    this->_HP = hp;
    this->_type = type;
}

Enemy::~Enemy()
{
    
}

std::string Enemy::getType() const
{
    return (this->_type);
}

int Enemy::getHP() const
{
    return (this->_HP);
}

void Enemy::takeDamage(int f)
{
	(void)f;
    return ;
}

