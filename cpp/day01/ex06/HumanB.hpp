/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 18:33:29 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 19:05:34 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "HumanA.hpp"

class HumanB
{
    private:
    std::string _name;
    Weapon *weapon;
    public:
    HumanB(std::string name);
    ~HumanB( void );
    void    attack( void );
    void    setWeapon(Weapon& weap);
};
#endif