#include <iostream>
using namespace std;
    
class enemies{

    string name;
    int health;

    public:

    void setdata(string n, int h){

        name = n;
        health = h;}


    void getdata(){

        cout<<"Name: "<<name<<endl;
        cout<<"Health: "<<health<<endl;
    }

    };

int main(){

    int villian = 3;

    enemies *ptr = new enemies[villian];
    enemies *temp = ptr;

    int h, i;
    string n;

    for(i=0; i<villian; i++){

        cout<<"enter name of villian: "<<i+1<<endl;        
        cin>>n;
        cout<<"enter health of villian: "<<i+1<<endl;
        cin>>h;
        ptr->setdata(n,h);
    }

    for(i=0; i<villian; i++){

        cout<<"villian: "<<i+1<<endl;
        ptr->getdata();
        temp++;
    }

    return 0;
}