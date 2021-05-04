#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria*       _templates[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource&);
        virtual ~MateriaSource();
        MateriaSource &operator=(const MateriaSource& op);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};
#endif