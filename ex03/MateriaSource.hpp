#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : virtual public IMateriaSource {
public:
    MateriaSource(void);
    MateriaSource(const MateriaSource &otherMateriaSource);
    MateriaSource &operator=(const MateriaSource &otherMateriaSource);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const &type);
private:
    AMateria *_templates[4];
};

#endif
