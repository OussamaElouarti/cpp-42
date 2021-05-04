#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
    private:
        std::string _name;
        Peon();
    public:
        Peon(std::string name);
        Peon(Peon & copy);
        virtual ~Peon();
        void set_name(std::string name);
        void getPolymorphed() const;
        std::string get_name(void);
        Peon &		operator=( Peon const & rhs );
};


#endif