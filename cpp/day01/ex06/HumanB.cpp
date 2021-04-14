/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:35:02 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 19:05:17 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB( void )
{
    std::cout << "HumanB deleted" << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
    std::cout << "HumanB created" << std::endl;
}

void    HumanB::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weap)
{
    this->weapon = &weap;
}