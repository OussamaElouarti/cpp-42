/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 19:07:46 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/01/02 19:08:43 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    ft_checkmore(std::string last ,std::string nickname)
{   
    int len = 0;
    
    if (last.length() >= 10)
    {
        last.replace(9, 1, ".");
        last.resize(10);
        std::cout << last << "|";
    }
    if (nickname.length() >= 10)
    {
        nickname.replace(9, 1, ".");
        nickname.resize(10);
        std::cout << nickname << "|" << std::endl;
    }
    else if ((len = nickname.length()) < 10)
        std::cout <<  std::setw(10) << nickname << "|" << std::endl;
}

void    ft_checkless(std::string first, std::string last)
{
    int len = 0;

    if ((len = first.length()) < 10)
        std::cout  << std::setw(10) << first << "|";
    else if (first.length() >= 10)
    {
        first.replace(9, 1, ".");
        first.resize(10);
        std::cout << first << "|";
    }
    if ((len = last.length()) < 10)
        std::cout  << std::setw(10) << last << "|";
}