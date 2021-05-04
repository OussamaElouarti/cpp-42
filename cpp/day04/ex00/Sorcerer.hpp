#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
#include "Victim.hpp"

class Sorcerer 
{
    private:
        Sorcerer();
        std::string _name;
        std::string _title;
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer & copy);
        ~Sorcerer();
        void set_name(std::string name);
        std::string get_name(void) const;
        void set_title(std::string title);
        std::string get_title(void) const;
        void polymorph(Victim const & a) const;
        Sorcerer &		operator=( Sorcerer const & rhs );
};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif