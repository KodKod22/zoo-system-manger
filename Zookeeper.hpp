//kody agin-peters id:209500131
#ifndef _ZOOKEEPER_HPP
#define _ZOOKEEPER_HPP
#include "ListEnclosure.hpp"
class Enclosure;
class ListEnclosure;

class Zookeeper
{
private:
    string name;
    ListEnclosure* assignedEnclosure;
public:
    Zookeeper();
    ~Zookeeper();
    void setName(string name);
    string getName();
    void assignedtoEnclosure(Enclosure* new_Enclosure);
};



#endif