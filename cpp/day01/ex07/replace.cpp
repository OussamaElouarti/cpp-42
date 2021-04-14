/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 12:04:03 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/25 16:12:44 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int     ft_error(std::string str)
{
    std::cout << str << std::endl;
    return (-1);
}

int     main(int argc, char **argv)
{
    std::string filename;
    size_t      pos;
    std::string dst;
    if (argc == 4)
    {
        if (argv[2][0] == '\0' || argv[3][0] == '\0')
            return (ft_error("empty strings!"));
        std::ifstream ifs(argv[1]);
        std::stringstream str;
        str << ifs.rdbuf();
        dst = str.str();
        while ((pos = dst.find(argv[2], 0)) != std::string::npos)
            dst.replace(pos , strlen(argv[2]), argv[3], strlen(argv[3]));
        ifs.close();
        filename.append(argv[1]).append(".replace");
        std::ofstream ofs(filename);
        ofs << dst;
        ofs.close();
    }
    else if (argc < 4)
        return (ft_error("not enough args "));
    else
        return (ft_error("too much args "));
    return (0);
}