/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:49:17 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/13 19:00:11 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
int g_count = 0;
std::string     ZombieHorde::randomString()
{
    // construct a trivial random generator engine from a time-based seed:
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);


    std::uniform_real_distribution<double> distributionDouble(1.0, 10.0); // Set the numbers for double.
    std::uniform_int_distribution<int> distributionInteger(1, 10); // Set the numbers for int.
    std::string random = "";
    int i = 0;
    static std::string Randomchars = "ABDEtuxyz789";
    
    while (i < 5)
    {
        if (g_count == 1)
        {
            random += Randomchars[distributionInteger(generator)];
            g_count = 0;
        }
        else if (g_count == 0)
        {
            random += Randomchars[distributionDouble(generator)];
            g_count = 1;
        }
        i++;
    }
    return random;
}

ZombieHorde::~ZombieHorde(void)
{
    delete[] this->Zombies;
    std::cout << "ZombieHorde Deleted" <<std::endl;
}

ZombieHorde::ZombieHorde(int N)
{
    int i = 0;
    std::cout << "ZombieHorde created" << std::endl;
    this->zombieNumber = N;
    this->Zombies = new Zombie[N];
    while (i < this->zombieNumber)
    {
        this->Zombies[i].setnameZombie(randomString());
        i++;
    }
}

void        ZombieHorde::announceZombies()
{
    int i = 0;
    
    while (i < this->zombieNumber)
    {
        std::cout << "zombie name " << this->Zombies[i].getnameZombie() << std::endl;
        i++;
    }
}