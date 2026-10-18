#include <iostream>
using namespace std;
   
class car{

int specs;

public:

string engine;

car(){};//default constructor is important for inheritance

car(string e){

    engine = e;
}

car display(){
    cout<<"This is a engine of car: "<<engine<<endl;
}
};


class BMW: public car{

public:


BMW(string e){

    engine = e;
}

BMW display(){
    cout<<"This is a engine of BMW car: "<<engine<<endl;

}
};

int main(){

car Mercedes("v8");
Mercedes.display();

BMW m8("V12");
m8.display();

    return 0;
}