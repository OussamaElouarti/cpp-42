/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:52:13 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/12 16:53:45 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void        memoryLeak()
{
    std::string* panther = new std::string("string panther");
    
    std::cout << *panther <<std::endl;
    delete panther;
}