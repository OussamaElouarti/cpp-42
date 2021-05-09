#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
    protected:
        int _HP;
        std::string _type;
    public:
    	Enemy();
        Enemy(int hp, std::string const & type);
        Enemy(const Enemy&);
        virtual ~Enemy();
        Enemy &operator=(const Enemy& op);
        std::string  getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};
#endif