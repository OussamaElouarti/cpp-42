/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:45:33 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 18:30:54 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon
{
    private:
    std::string _type;
    public:
    Weapon(std::string type);
    ~Weapon( void );
    void        setType(std::string type);
    std::string& getType( void );
};

#endif