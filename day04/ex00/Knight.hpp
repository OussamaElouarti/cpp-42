#ifndef KNIGHT_HPP
# define KNIGHT_HPP

# include "Victim.hpp"

class Knight : public Victim
{
    private:
        std::string _name;
        Knight();
    public:
        Knight(std::string name);
        Knight(const Knight & copy);
        virtual ~Knight();  
        void getPolymorphed() const;
        std::string get_name(void);
        Knight &		operator=( Knight const & rhs );
};


#endif