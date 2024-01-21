//kody agin-peters id:209500131
#ifndef _HEADLISTANIMEL_HPP
#define _HEADLISTANIMEL_HPP
#include "Animal.hpp"

class LinkListAnimal
{
private:
    Animal *headPtr;
public:
    LinkListAnimal();
    void Addanimal(Animal *New_animal);

    void RemoveAnimal(Animal *rem_animel);
    
    void PrintList();
    bool checkList(LinkListAnimal* Animals,string name);
    Animal *getHead();
};

#endif