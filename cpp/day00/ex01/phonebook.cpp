/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-ouar <oel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 14:23:22 by oel-ouar          #+#    #+#             */
/*   Updated: 2021/02/12 15:17:04 by oel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string Contact::get_first_name() {return this->first_name;}
std::string Contact::get_last_name() {return this->last_name;}
std::string Contact::get_nickname() {return this->nickname;}
std::string Contact::get_login() {return this->login;}
std::string Contact::get_postal_adress() {return this->postal_adress;}
std::string Contact::get_email_adress() {return this->email_adress;}
std::string Contact::get_phone_number() {return this->phone_number;}
std::string Contact::get_birthday_date() {return this->birthday_date;}
std::string Contact::get_favorite_meal() {return this->favorite_meal;}
std::string Contact::get_underwear_color() {return this->underwear_color;}
std::string Contact::get_darkest_secret() {return this->darkest_secret;}
void Contact::set_first_name(std::string const & str) {this->first_name = str;}
void Contact::set_last_name(std::string const & str) {this->last_name = str;}
void Contact::set_nickname(std::string const & str) {this->nickname = str;}
void Contact::set_login(std::string const & str) {this->login = str;}
void Contact::set_postal_adress(std::string const & str) {this->postal_adress = str;}
void Contact::set_email_adress(std::string const & str) {this->email_adress = str;}
void Contact::set_phone_number(std::string const & str) {this->phone_number = str;}
void Contact::set_birthday_date(std::string const & str) {this->birthday_date = str;}
void Contact::set_favorite_meal(std::string const & str) {this->favorite_meal = str;}
void Contact::set_underwear_color(std::string const & str) {this->underwear_color = str;}
void Contact::set_darkest_secret(std::string const & str) {this->darkest_secret = str;}
Contact *Phonebook::get_contacts(int ind) {return &(this->contacts[ind]);}


Phonebook::Phonebook( void )
{
    int i = 0;
    
    while (i <= 7)
    {
        this->get_contacts(i)->set_first_name("NON");
        this->get_contacts(i)->set_last_name("NON");
        this->get_contacts(i)->set_nickname("NON");
        this->get_contacts(i)->set_login("NON");
        this->get_contacts(i)->set_postal_adress("NON");
        this->get_contacts(i)->set_email_adress("NON");
        this->get_contacts(i)->set_phone_number("NON");
        this->get_contacts(i)->set_birthday_date("NON");
        this->get_contacts(i)->set_favorite_meal("NON");
        this->get_contacts(i)->set_underwear_color("NON");
        this->get_contacts(i)->set_darkest_secret("NON");
        i++;
    }
    return ;
}

void    ft_add(Phonebook *instance, int *i)
{
    std::string tmp;
    std::cout << "input first name : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_first_name(tmp);
    std::cout << "input last name : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_last_name(tmp);
    std::cout << "input nickname : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_nickname(tmp);
    std::cout << "input login : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_login(tmp);
    std::cout << "input postal adress : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_postal_adress(tmp);
    std::cout << "input email adress : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_email_adress(tmp);
    std::cout << "input phone number : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_phone_number(tmp);
    std::cout << "input birthday date : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_birthday_date(tmp);
    std::cout << "input favorite meal : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_favorite_meal(tmp);
    std::cout << "input underwear color : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_underwear_color(tmp);
    std::cout << "input darkest secret : ";
    getline(std::cin, tmp);
    instance->get_contacts(*i)->set_darkest_secret(tmp);
    (*i)++;
}

void    ft_display(Phonebook *instance, int j)
{
    std::cout << "first name : ";
    std::cout << instance->get_contacts(j)->get_first_name() << std::endl;;
    std::cout << "last name : ";
    std::cout << instance->get_contacts(j)->get_last_name() << std::endl;;
    std::cout << "nickname : ";
    std::cout << instance->get_contacts(j)->get_nickname() << std::endl;;
    std::cout << "login : ";
    std::cout << instance->get_contacts(j)->get_login() << std::endl;;
    std::cout << "postal adress : ";
    std::cout << instance->get_contacts(j)->get_postal_adress() << std::endl;;
    std::cout << "email adress : ";
    std::cout << instance->get_contacts(j)->get_email_adress() << std::endl;;
    std::cout << "phone number : ";
    std::cout << instance->get_contacts(j)->get_phone_number() << std::endl;;
    std::cout << "birthday date : ";
    std::cout << instance->get_contacts(j)->get_birthday_date() << std::endl;;
    std::cout << "favorite meal : ";
    std::cout << instance->get_contacts(j)->get_favorite_meal() << std::endl;;
    std::cout << "underwear color : ";
    std::cout << instance->get_contacts(j)->get_underwear_color() << std::endl;;
    std::cout << "darkest secret : ";
    std::cout << instance->get_contacts(j)->get_darkest_secret() << std::endl;;
}

void    ft_search(Phonebook *instance, int i)
{
    unsigned int j = 0;
    std::string first;
    std::string last;
    std::string nickname;
    std::string name;

    std::cout << "     index|" << "first name|" << " last name|" << "  nickname|" << std::endl;
    while ((int)j < i)
    {
        first = instance->get_contacts(j)->get_first_name();
        last = instance->get_contacts(j)->get_last_name();
        nickname = instance->get_contacts(j)->get_nickname();
        std::cout  << std::setw(10) << j << "|";
        ft_checkless(first, last);
        ft_checkmore(last, nickname);
        j++;
    }
    std::cout << "input contact's index to show : ";
    std::getline(std::cin, name);
    if (name.length() < 2 && name[0] >= '0' && name[0] <= '7' && std::stoi(name) < i)
    {
        j = std::stoi(name);
        if (j >= 8 || !(instance->get_contacts(j)->get_first_name().compare("NON")))
        {
            std::cout << "not a valid index"  << std::endl;
            return ;
        }
        ft_display(instance, j);
    }
    else
        std::cout << "not a valid index" << std::endl;
    return ;
}

int     main( void )
{
    Phonebook instance;
    int i = 0;
    std::string buff;
    while (1)
    {
        std::cout << "write ADD to add contact, SEARCH to search in phonbook or EXIT to exit the program" << std::endl;
        std::cout << "input> ";
        getline(std::cin, buff);
        if (!(buff.compare("EXIT")))
            break ;
        else if (!(buff.compare("ADD")))
        {
            if (i <= 7)
                ft_add(&instance, &i);
            else
                std::cout << "phonebook is FULL" << std::endl;
        }
        else if (!(buff.compare("SEARCH")))
            ft_search(&instance, i);
        else 
            std::cout << "Bad arg!" << std::endl; 
    }
    return (0);
}