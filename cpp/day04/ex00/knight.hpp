#ifndef KNIGHT_HPP
# define KNIGHT_HPP

# include <iostream>
# include "Victim.hpp"

class Knight : public Victim
{
    private:
        std::string _name;
        Knight();
    public:
        Knight(std::string name);
        knight(Knight & copy);
        virtual ~Knight();
        void set_name(std::string name){};
        void getPolymorphed() const;
        std::string get_name(void);
        Knight &		operator=( Knight const & rhs );
};


#endif