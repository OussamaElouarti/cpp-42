/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:00:48 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/13 12:31:28 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    std::cout << "zombie created" << std::endl;
    this->_name = "";
    this->_type = "";
}

Zombie::~Zombie( void )
{
    std::cout << "zombie deleted" << std::endl;
}

void        Zombie::announce( void )
{
    std::cout << "zombie name " << this->_name << ", zombie type " << this->_type << std::endl;
}

std::string     Zombie::getnameZombie(void) const
{
    return this->_name;
}

std::string     Zombie::gettypeZombie(void) const
{
    return this->_type;
}

void            Zombie::setnameZombie(std::string name)
{
        this->_name = name;
}

void            Zombie::settypeZombie(std::string type)
{
        this->_type = type;
}