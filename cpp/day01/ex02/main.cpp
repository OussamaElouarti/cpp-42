/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:21:30 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/13 12:36:36 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main( void )
{
    ZombieEvent instance;
    instance.setZombieType("idiot");
    Zombie *a = instance.newZombie("hamid");
    a->announce();
    delete a;
    instance.randomChump();
    return (0);
}