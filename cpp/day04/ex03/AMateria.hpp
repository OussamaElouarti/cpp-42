

#ifndef AMATERIA_HPP
# define AMATERIA_HPP


# include <iostream>
# include <string>

# include "ICharacter.hpp"


class AMateria
{
    private:
        std::string     _type;
        unsigned int    _xp;

    public:
        AMateria(std::string const & type);
        AMateria(const AMateria&);
        virtual ~AMateria();
        AMateria &operator=(const AMateria& op);

        std::string const & getType() const;       
        unsigned int        getXP() const;          

        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif