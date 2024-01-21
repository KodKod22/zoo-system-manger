//kody agin-peters id:209500131
#include"ListEnclosure.hpp"
ListEnclosure::ListEnclosure()
{
    headEnclosure = NULL;
}

ListEnclosure::~ListEnclosure()
{
}
Enclosure* ListEnclosure:: getEnclosure(){
    return headEnclosure;
}

bool ListEnclosure:: checkListEnclosure(ListEnclosure* EnclosureList,string name){
    Enclosure *temp = EnclosureList->headEnclosure;
    
    while (temp != NULL )
    {
        
        if (temp->getName() == name)
        {
            return true;
        }
        
        temp=temp->getNext();
        
    }
    return false;
}
void ListEnclosure:: AddEnclosure(Enclosure* new_Enclosure){
    if (headEnclosure == NULL)
    {
        headEnclosure = new_Enclosure;
        return;
    }
    Enclosure* temp = headEnclosure;

    while (temp->getNext()!= NULL)
    {
        temp = temp->getNext();
    }

    temp->setNext(new_Enclosure);
    new_Enclosure->setNext(NULL);

}
void ListEnclosure:: RemoveEnclosure(Enclosure* rem_Enclosure){
    Enclosure *curr = headEnclosure;
    Enclosure *prev = NULL;
    if (headEnclosure == NULL)
    {
        cout << "List is empty" << endl;

        return;
    }
    
    if (headEnclosure->getName() == rem_Enclosure->getName())
    {
        headEnclosure = headEnclosure->getNext();

        delete curr;

        return;
    }else
    {
        while (curr !=NULL && curr->getName() != rem_Enclosure->getName() )
        {
            prev = curr;
            curr = curr->getNext();
        }
        if (curr != NULL)
        {
            prev->setNext(curr->getNext());

            delete curr;
        }
    }   
}