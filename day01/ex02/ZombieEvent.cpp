/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:39:58 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/13 12:34:21 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent( void )
{
    this->_type = "";
    std::cout << "zombieEvent created" << std::endl;
}

std::string ZombieEvent::names[] = {"lalo", "lali", "lolo", "lele", "lilo", "lole", "lile", "lali", "lola", "lelo"};

ZombieEvent::~ZombieEvent( void )
{
    std::cout << "zombieEvent deleted" << std::endl;
}

void            ZombieEvent::setZombieType(std::string type)
{
        this->_type = type;
}

std::string     ZombieEvent::getZombieType(void) const
{
    return this->_type;
}

Zombie*     ZombieEvent::newZombie(std::string name)
{
    Zombie* creep = new Zombie();
    creep->settypeZombie(this->getZombieType());
    creep->setnameZombie(name);
    
    return (creep);
}

std::string         ZombieEvent::randomName( void )
{
    std::string Name;
    srand (time(NULL));

    Name = this->names[rand() % 10];
    return Name;
}

void                ZombieEvent::randomChump( void )
{
    Zombie  creeper = Zombie();
    creeper.settypeZombie(this->getZombieType());
    creeper.setnameZombie(this->randomName());
    creeper.announce();
}

