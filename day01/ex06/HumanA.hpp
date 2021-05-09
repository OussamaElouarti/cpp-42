/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:55:37 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/25 16:35:26 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
    std::string _name;
    Weapon& weapon;
    public:
    HumanA(std::string name, Weapon& Weapon): weapon(Weapon)
    {
        this->_name = name;
        std::cout << "HumanA created" << std::endl;
    }
    ~HumanA( void );
    void    attack( void );
};
#endif