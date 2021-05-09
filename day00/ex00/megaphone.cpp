/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 10:35:42 by oel-ouar          #+#    #+#             */
/*   Updated: 2020/12/31 11:40:41 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(int argc, char **argv)
{
    int i = 0;
    int j = 1;
    if (argc > 1)
    {
        while (argv[j])
        {
            i = 0;
            while (argv[j][i])
            {
                argv[j][i] = std::toupper(argv[j][i]);
                i++;
            }
            std::cout << argv[j];
            j++;
        }
    } 
    else 
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}