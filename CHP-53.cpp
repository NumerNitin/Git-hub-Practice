#include <iostream>
using namespace std;
    
class enemies{

    int health;
    string name;

    public:

    void setData(int health, string name){

        this->health = health;
        this->name = name;
    
    }

    void getData(){

        cout<<"Health: "<<health<<endl;
        cout<<"Name: "<<name<<" Mera naam hai mayank, Sahi baat hai"<<endl;
    }

};
   int main(){

   enemies e1;

   e1.setData(100, "Mayank");
   e1.getData();

    return 0;
}
