#ifndef ICE_HPP
# define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(const Ice&);
        virtual ~Ice();
        Ice &operator=(const Ice& op);
        AMateria*   clone() const;
        void        use(ICharacter& target);
};
#endif