#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim 
{
    private:
        std::string _name;
        Victim();
    public:
        Victim(std::string name);
        Victim(Victim & copy);
        virtual ~Victim();
        void set_name(std::string name);
        virtual void getPolymorphed() const; 
        std::string get_name(void) const;
        Victim &		operator=( Victim const & rhs );
};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif