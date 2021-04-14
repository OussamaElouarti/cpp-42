/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:05:44 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 16:53:19 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
   
    public:
    Human( void );
    ~Human (void );
    const Brain&   getBrain( void );
    std::string   identify( void ) const;
    private:
    Brain const _myBrain;
    
};

#endif