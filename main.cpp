//kody agin-peters id:209500131
#include"Zoo.hpp"
int main(){
    int slec=0;
    Zoo B;
    for (;;)
    {
        cout<<"1)Add Animal"<<endl;
        cout<<"2)Remove Animal"<<endl;
        cout<<"3)Show all animals"<<endl;
        cout<<"4)Assin zookeeper"<<endl;
        cout<<"5)exit"<<endl;
        cin>>slec;
        switch (slec)
        {
        case 1:
            B.AddAnimalToTheZOO();
            break;
        case 2:
            B.RemoveAnimalFromTheZOO();
            break;
        case 3:
            B.DisplayAllanimals();
            break;
        case 4:
            B.assignedZookeeper();
            break;
        default:
            return 0;
            break;
        }
    }
       
}