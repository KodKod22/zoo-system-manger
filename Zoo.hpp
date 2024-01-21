//kody agin-peters id:209500131
#ifndef _ZOO_HPP
#define _ZOO_HPP
#include "ListEnclosure.hpp"
class Zoo
{
private:
    ListEnclosure* Enclosures;
public:
    Zoo();
    ~Zoo();
    void AddAnimalToTheZOO();
    void RemoveAnimalFromTheZOO();
    void DisplayAllanimals();
    void assignedZookeeper();
    void free();
};

#endif