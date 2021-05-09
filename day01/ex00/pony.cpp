/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:30:06 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/12 18:19:49 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void        ponyOnTheStack(std::string color, std::string name, std::string hairColor)
{
    Pony stack_pony = Pony();
    
    stack_pony.set_color( color);
    stack_pony.set_name(name);
    stack_pony.set_hairColor(hairColor);
    std::cout << "pony color " << stack_pony.get_color() << " pony name " << stack_pony.get_name() << " pony hair color " << stack_pony.get_hairColor()  << std::endl;
}

void        ponyOnTheHeap(std::string color, std::string name, std::string hairColor)
{
    Pony* heap_pony = new Pony();
    
    heap_pony->set_color(color);
    heap_pony->set_name(name);
    heap_pony->set_hairColor(hairColor);
    std::cout << "pony color " << heap_pony->get_color() << " pony name " << heap_pony->get_name() << " pony hair color " << heap_pony->get_hairColor()  << std::endl;
    delete heap_pony;
}

Pony::Pony()
{
    std::cout << "Pony created\n";
    this->_name = "";
    this->_color = "";
    this->_hairColor = "";
}

Pony::~Pony()
{
    std::cout << "Pony Deleted\n";
}

void   Pony::set_name(std::string const & str){this->_name = str;}
void   Pony::set_color(std::string const & str){this->_color = str;}
void   Pony::set_hairColor(std::string const & str){this->_hairColor = str;}
std::string Pony::get_name(void){return(this->_name);}
std::string Pony::get_color(void){return(this->_color);}
std::string Pony::get_hairColor(void){return(this->_hairColor);}