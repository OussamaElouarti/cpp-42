/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 15:07:31 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/12 15:25:27 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_adress;
        std::string email_adress;
        std::string phone_number;
        std::string birthday_date;
        std::string favorite_meal;
        std::string underwear_color;
        std::string darkest_secret;
    public:
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_login();
        std::string get_postal_adress();
        std::string get_email_adress();
        std::string get_phone_number();
        std::string get_birthday_date();
        std::string get_favorite_meal();
        std::string get_underwear_color();
        std::string get_darkest_secret();
        void set_first_name(std::string const & str);
        void set_last_name(std::string const & str);
        void set_nickname(std::string const & str);
        void set_login(std::string const & str);
        void set_postal_adress(std::string const & str);
        void set_email_adress(std::string const & str);
        void set_phone_number(std::string const & str);
        void set_birthday_date(std::string const & str);
        void set_favorite_meal(std::string const & str);
        void set_underwear_color(std::string const & str);
        void set_darkest_secret(std::string const & str);
};

class Phonebook {
    private:
    Contact contacts[8];
    public:
    Phonebook ( void );
    Contact *get_contacts(int ind);
};

void    ft_checkmore(std::string last ,std::string nickname);
void    ft_checkless(std::string first, std::string last);
#endif