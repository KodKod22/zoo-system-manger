//kody agin-peters id:209500131
#ifndef _LISTENCLOSURE_HPP
#define _LISTENCLOSURE_HPP
#include "Enclosure.hpp"
class Enclosure;
class ListEnclosure
{
private:
    Enclosure* headEnclosure;

public:
    ListEnclosure();
    ~ListEnclosure();
   void AddEnclosure(Enclosure* new_Enclosure);
   void RemoveEnclosure(Enclosure *rem_Enclosure);
   Enclosure* getEnclosure();
   bool checkListEnclosure(ListEnclosure* EnclosureList,string name);
   
};



#endif