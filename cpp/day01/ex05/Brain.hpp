/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 14:27:31 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/21 16:12:06 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
    private :
    int _Iq;
    public :
    Brain( void );
    ~Brain( void );
    std::string identify( void) const;
};

#endif