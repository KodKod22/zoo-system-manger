//kody agin-peters id:209500131
#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP
#include<iostream>
#include<string>
using namespace std;

class Animal
{
private:
    string name;

    string species;

    int age;

    Animal* Next;
public:
    Animal(string _name,string _species,int _age);

    
    string getName();

    string getspecies();

    int getAge();

    Animal* getNextPtr();

    void setName(string n_name);

    void setSpecies(string n_species);

    void setAge(int n_age);

    void setNextPtr(Animal* n_next);

    void displayDetails();
};

#endif