/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:25:04 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/12 18:22:27 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
    private:
    std::string _name;
    std::string _color;
    std::string _hairColor;
    public: 
    Pony();
    ~Pony();
    void   set_name(std::string const & str);
    void   set_color(std::string const & str);
    void   set_hairColor(std::string const & str);
    std::string get_name(void);
    std::string get_color(void);
    std::string get_hairColor(void);
   
    
};

void        ponyOnTheStack(std::string color, std::string name, std::string hairColor);
void        ponyOnTheHeap(std::string color, std::string name, std::string hairColor);

#endif