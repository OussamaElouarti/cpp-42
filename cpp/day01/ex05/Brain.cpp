/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:40:34 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 16:13:14 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    this->_Iq = 0;
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain( void)
{
    std::cout << "Brain deleted" << std::endl;
}

std::string      Brain::identify( void ) const
{
    std::stringstream strStream;
    strStream << std::hex << this;
    return (strStream.str());
}
