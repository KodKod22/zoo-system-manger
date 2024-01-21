//kody agin-peters id:209500131
#include"Zookeeper.hpp"
Zookeeper::Zookeeper()
{
    this->assignedEnclosure=new ListEnclosure();
    if (assignedEnclosure == NULL)
    {
        cout<< "OUT OF MEMORY" << endl;
        return;
    }
    
}

Zookeeper::~Zookeeper()
{
    delete assignedEnclosure;
}
void Zookeeper:: setName(string name){
    this->name=name;
}
string Zookeeper:: getName(){
    return name;
}
void Zookeeper:: assignedtoEnclosure(Enclosure* new_Enclosure){
    
    this->assignedEnclosure->AddEnclosure(new_Enclosure);
}