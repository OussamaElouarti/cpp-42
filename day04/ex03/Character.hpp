#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string     _name;
        AMateria*       _inv[4];

    public:
        Character(std::string const & name);
        Character(const Character&);
        virtual ~Character();
        Character &operator=(const Character& op);
        std::string const & getName() const;
        void                equip(AMateria* m);
        void                unequip(int idx);
        void                use(int idx, ICharacter& target);
};
#endif