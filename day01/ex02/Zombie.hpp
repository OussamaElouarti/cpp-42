/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:58:00 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/13 12:06:38 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;
        std::string _type;
    public:
    Zombie( void );
    ~Zombie( void );
    void            announce( void );
    std::string     getnameZombie(void) const;
    void            setnameZombie(std::string name);
    std::string     gettypeZombie(void) const;
    void            settypeZombie(std::string type);
};

#endif