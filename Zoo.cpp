//kody agin-peters id:209500131
#include "Zoo.hpp"
#include "Zookeeper.hpp"
Zoo::Zoo()
{
    this->Enclosures = new ListEnclosure();
    if (this->Enclosures == NULL)
    {
        cout<< "OUT OF MEMORY" << endl;
        return;
    }
}

Zoo::~Zoo()
{
    delete Enclosures;
}
void Zoo:: AddAnimalToTheZOO(){
    string name = "";
    string species = "";
    string EnclosureName="";
    int age = 0;
    Enclosure *temp=Enclosures->getEnclosure();
    
    Animal * newNode = new Animal("","",0);
    if (newNode == NULL)
    {
        
        cout<< "OUT OF MEMORY" << endl;
        return;
    }
    Enclosure * newEnclosure = new Enclosure();
    if (newEnclosure == NULL)
        {
            cout<< "OUT OF MEMORY" << endl;
            return;
        }
    cout << "ENTER THE ANIMAL NAME: " << endl;
    cin>>name;
    cout << "ENTER THE SPECIES: " << endl;
    cin>>species;
    cout << "ENTER AGE: " << endl;
    cin>>age;
    cout << "ENTER ENCLOSURE NAME: " << endl;
    cin>>EnclosureName;
    newEnclosure->setName(EnclosureName);
    newNode->setName(name);
    newNode->setSpecies(species);
    newNode->setAge(age);
    newNode->setNextPtr(NULL);
    
    if (Enclosures->getEnclosure() != NULL)
    {
        while (temp != NULL)
        {
            
            if (temp->getName() == EnclosureName)
            {
                temp->AddanimalToList(newNode);
                return;
            }
        
            temp = temp->getNext();
        }
    }
    Enclosures->AddEnclosure(newEnclosure);
    newEnclosure->AddanimalToList(newNode);
}
void Zoo:: RemoveAnimalFromTheZOO(){
 
    Animal *temp3;
    string EnclosureName;
    string AnimalNAME;
    cout << "ENTER THE NAME OF THE ENCLOSURE: " << endl;
    cin >> EnclosureName;

    if (Enclosures->checkListEnclosure(Enclosures,EnclosureName) != true)
    {
        cout << "NO Enclosure in the system" << endl;
        return;
    }
        cout << "ENTER THE NAME OF THE ANIMAL: " << endl;
        cin >> AnimalNAME;
    Enclosure *temp = Enclosures->getEnclosure();
    while (temp != NULL)
    {
        if (temp->getName() == EnclosureName)
        {
            temp3 = temp->getAnimelList()->getHead();
            
            while (temp3 != NULL)
            {
                if (temp3->getName() == AnimalNAME)
                {
                    temp->RemoveanimalfromTheList(temp3);
                    
                }
                temp3=temp3->getNextPtr();
            }
            
            
        }
        if(temp->Listleank() == 0)
        {
            Enclosures->RemoveEnclosure(temp);
        }
        
       temp = temp->getNext();
    }
    
    return;
}
void Zoo:: assignedZookeeper(){
    Enclosure *temp = Enclosures->getEnclosure();
    Zookeeper* NewZookeeper=new Zookeeper();
    if (NewZookeeper == NULL)
    {
        cout<< "OUT OF MEMORY" << endl;
        return;
    }
    
    string NameEnclosure;
    string NameZookeeper;
    cout<<"ENTER NAME OF THE ENCLOSURE:"<<endl;
    cin>>NameEnclosure;
    if (Enclosures->checkListEnclosure(Enclosures,NameEnclosure) == false)
    {
        cout<<"NO NAME IN THE SYSTEM"<<endl;
        return;
    }
    
    
    cout<<"ENTER NAME OF THE ZOOKEEPER:"<<endl;
    
    cin>>NameZookeeper;
    
    NewZookeeper->setName(NameZookeeper);
    
    while (temp != NULL)
    {
        
        if (temp->getName() == NameEnclosure)
        {
            
            temp->SetZOOkeeper(NewZookeeper);
            NewZookeeper->assignedtoEnclosure(temp);
            return;
        }
        temp = temp->getNext();
    }
    
}

void Zoo:: DisplayAllanimals(){
    
    if (this->Enclosures == NULL)
    {
        
        return;
    }
    Enclosure* temp=Enclosures->getEnclosure();
    while (temp != NULL)
    {
        cout<<"Enclosure Name: "<<temp->getName()<<endl;
        cout<<"Zookeeper Name: "<<temp->getZookeeper()->getName()<<endl;
        cout<<"Animals in the Enclosure"<<endl;
        temp->printAnimalList();
        cout<<"---------------"<<endl;
        temp=temp->getNext();
    }
    
}
void Zoo::free()
{
    Enclosure* temp1=Enclosures->getEnclosure();
    Enclosure *te;
    LinkListAnimal *temp=temp1->getAnimelList();
    Animal* temp2=temp->getHead();
    Animal* temp3;
    while (temp1!= NULL)
    {
        while (temp2 != NULL)
        {
            temp3=temp2;
            temp2=temp2->getNextPtr();
            delete temp3;
        }
        te=temp1;
        temp1=temp1->getNext();
        delete te;
    }
    
}