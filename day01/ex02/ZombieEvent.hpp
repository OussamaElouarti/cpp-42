/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:26:38 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/13 12:36:23 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"
#include <math.h>
class ZombieEvent
{
    public:
    ZombieEvent();
    ~ZombieEvent();
    void            setZombieType(std::string type);
    std::string     getZombieType(void) const;
    Zombie          *newZombie(std::string name);
    std::string     randomName( void );
    void            randomChump( void );
    private:
        std::string _type;
        static std::string     names[10];
};

#endif