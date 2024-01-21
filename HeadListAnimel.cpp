//kody agin-peters id:209500131
#include"HeadListAnimel.hpp"
LinkListAnimal::LinkListAnimal()
{
    headPtr = NULL;
}
Animal * LinkListAnimal:: getHead(){
    return headPtr;
}
bool LinkListAnimal:: checkList(LinkListAnimal* Animals,string name){
    
    Animal *temp = Animals->headPtr;
    
    while (temp != NULL )
    {
        
        if (temp->getName() == name)
        {
            return true;
        }
        
        temp=temp->getNextPtr();
        
    }
    return false;
}
void LinkListAnimal:: Addanimal(Animal *New_animal)
{
  
    if (headPtr == NULL)
    {
        headPtr = New_animal;
        return;
    }

    Animal* temp = headPtr;

    while (temp->getNextPtr()!= NULL)
    {
        temp = temp->getNextPtr();
    }

    temp->setNextPtr(New_animal);
    New_animal->setNextPtr(NULL);
    
}
void LinkListAnimal:: RemoveAnimal(Animal *rem_animel){
    Animal *curr = headPtr;
    Animal *prev = NULL;
    if (headPtr == NULL)
    {
        cout << "List is empty" << endl;

        return;
    }
    
    if (headPtr->getName() == rem_animel->getName())
    {
        headPtr = headPtr->getNextPtr();

        delete curr;

        return;
    }else
    {
        while (curr !=NULL && curr->getName() != rem_animel->getName() )
        {
            prev = curr;
            curr = curr->getNextPtr();
        }
        if (curr != NULL)
        {
            prev->setNextPtr(curr->getNextPtr());

            delete curr;
        }
    }   
}
void LinkListAnimal:: PrintList()
{
    Animal *temp = headPtr;
    while (temp != NULL)
    {
        temp->displayDetails();

        temp = temp->getNextPtr();
    }
    
}