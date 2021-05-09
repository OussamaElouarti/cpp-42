/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:58:20 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 18:28:08 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA( void )
{
    std::cout << "HumanA deleted" << std::endl;
}

void    HumanA::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->weapon.getType() << std::endl;
}