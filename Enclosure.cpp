#include"Enclosure.hpp"
//kody agin-peters id:209500131
Enclosure::Enclosure()
{
    this->animals = new LinkListAnimal();
    if (this->animals == NULL)
    {
        cout<< "OUT OF MEMORY" << endl;
        return;
    }
    
    this->assignedZookeeper = new Zookeeper();
    if (assignedZookeeper == NULL)
    {
        cout<< "OUT OF MEMORY" << endl;
        return;
    }
    
    this->next = NULL;
}
Enclosure:: ~Enclosure(){
    delete animals;
}
Enclosure* Enclosure:: getNext(){
    return next;
}
void Enclosure:: setNext(Enclosure* en){
    this->next = en;
}
string Enclosure::getName(){
    return name;
}
void Enclosure:: setName(string name){
    this->name=name;
}
Zookeeper * Enclosure:: getZookeeper(){
    return assignedZookeeper;
}
void Enclosure:: SetZOOkeeper(Zookeeper* new_zookeeper){
    this->assignedZookeeper = new_zookeeper;
}
int Enclosure:: Listleank(){
    int count = 0;
    Animal *temp =this->animals->getHead();
    while (temp != NULL)
    {
        count++;
        temp = temp->getNextPtr();
    }
    return count;
}
void Enclosure:: AddanimalToList(Animal *newAnimal){
    
    
    if (this->animals->checkList(animals,newAnimal->getName()) == true)
    {
        cout << "THE ANIMAL IS ALL RADY IN THR LIST" << endl;
        
        return;
    }
    this->animals->Addanimal(newAnimal);
    return;
}
void Enclosure:: RemoveanimalfromTheList(Animal* currAnimal){
    if (animals->checkList(this->animals,currAnimal->getName()) == false)
    {
        cout << "THE ANIMAL IS NOT IN THR LIST" << endl;
    }
    
    animals->RemoveAnimal(currAnimal);
    return;
    
}
LinkListAnimal *Enclosure:: getAnimelList(){
    return animals;
}

void Enclosure:: printAnimalList(){
    Animal* temp=this->animals->getHead();
    while (temp!=NULL)
    {
        temp->displayDetails();
        temp=temp->getNextPtr();
    }
    return;
}