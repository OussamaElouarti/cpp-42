/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:52:45 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 18:30:53 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
    std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon( void)
{
    std::cout << "Weapon deleted" << std::endl;
}

void        Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string& Weapon::getType( void )
{
    return ((*this)._type);
}