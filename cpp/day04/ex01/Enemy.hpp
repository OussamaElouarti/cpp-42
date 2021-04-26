#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
    protected:
        int _HP;
        std::string _type;
    public:
        Enemy(int hp, std::string const & type);
        ~Enemy();
        std::string  getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};
#endif