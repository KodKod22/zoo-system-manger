#include"Animal.hpp"
//kody agin-peters id:209500131
Animal::Animal(string _name,string _species,int _age)
{
    this->name = _name;
    this->species = _species;
    this->age = _age;
    this->Next = NULL;
}

string Animal:: getName(){
    return name;
}
string Animal:: getspecies(){
    return species;
}
int Animal:: getAge(){
    return age;
}
Animal* Animal:: getNextPtr(){
    return Next;
}
void Animal:: setName(string n_name){
    this->name = n_name;
}
void Animal:: setSpecies(string n_species){
    this->species = n_species;
}
void Animal:: setAge(int n_age){
    this->age = n_age;
}
void Animal:: setNextPtr(Animal* n_next){
    this->Next = n_next;
}
void Animal:: displayDetails(){
    cout << "Animal name: "<< this->getName() << endl;
    cout << "Species: "<< this->getspecies() << endl;
    cout << "Age: "<< this->getAge() << endl;
}