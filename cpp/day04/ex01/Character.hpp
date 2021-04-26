#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"
class Character 
{
    private:
        std::string _name;
        int _AP;
        AWeapon *aweapon;
    public:
        Character(std::string const & name);
        ~Character();
        void recoverAP();
        void equip(AWeapon* aweapon);
        void attack(Enemy* enemy);
        std::string  getName() const;
        int getAP() const;
        AWeapon *getAweapon() const;
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif