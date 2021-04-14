/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:11:22 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 16:53:00 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void )
{
    std::cout << "Human created" << std::endl;
}

Human::~Human( void )
{
    std::cout << "Human deleted" << std::endl;
}

const Brain&       Human::getBrain( void )
{
    return (this->_myBrain);
}

std::string       Human::identify( void ) const
{
    return (this->_myBrain.identify());
}