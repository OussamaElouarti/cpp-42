#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon 
{
    protected:
        std::string _name;
        int _damage;
        int _APcost;
    public :
        AWeapon(std::string const & name, int apcost, int damage);
        ~AWeapon();
        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;
};

#endif