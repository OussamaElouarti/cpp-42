/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 19:09:36 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/13 19:14:09 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main( void )
{
    std::string brain = "HI THIS IS BRAIN";
    
    std::string *brainPtr = &brain;
    std::string& brainRef = brain;

    std::cout << brain << " " << *brainPtr << " " << brainRef << std::endl;
    
    return (0);
}