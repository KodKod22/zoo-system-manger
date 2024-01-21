#ifndef _ENCLOSURE_HPP
#define _ENCLOSURE_HPP
//kody agin-peters id:209500131 
#include "HeadListAnimel.hpp"
#include"Zookeeper.hpp"
class Zookeeper;
class Enclosure
{
private:
    string name;
    LinkListAnimal* animals;
    Zookeeper *assignedZookeeper;
    Enclosure* next;
public:
    Enclosure();
    ~Enclosure();
    void AddanimalToList(Animal* newAnimal);
    void RemoveanimalfromTheList(Animal *currAnimal);
    Enclosure* getNext();
    void setNext(Enclosure* en);
    LinkListAnimal *getAnimelList();
    string getName();
    void setName(string name);
    Zookeeper *getZookeeper();
    void SetZOOkeeper(Zookeeper* new_zookeeper);
    int Listleank();
    void printAnimalList();
};

#endif