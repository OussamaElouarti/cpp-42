#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
    private:
        std::string _name;
    public:
        Peon(std::string name);
        ~Peon();
        void set_name(std::string name);
        void getPolymorphed() const;
        std::string get_name(void);
};

// std::ostream &			operator<<( std::ostream & o, Peon const & i );

#endif