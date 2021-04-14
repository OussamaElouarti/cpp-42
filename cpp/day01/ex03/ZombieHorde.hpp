/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:47:24 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/13 18:30:05 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <chrono>
#include <random>
#include "Zombie.hpp"

class ZombieHorde
{
    public :
    int zombieNumber;
    ZombieHorde(int N);
    ~ZombieHorde( void );
    void            announceZombies();
    std::string     randomString();
    std::string     getnameZombie(void) const;
    void            setnameZombie(std::string name);
    std::string     gettypeZombie(void) const;
    void            settypeZombie(std::string type);
    Zombie          *Zombies;
};

#endif // !ZOMBIEHORDE_HPP