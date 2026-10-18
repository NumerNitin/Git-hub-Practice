#include<iostream>
using namespace std;

class base_class{

    public:

    int a;

     virtual void display(){
        cout<<"The value of a is :"<<a<<endl;
    }

    };

class derived_class:public base_class{

    public:

    int b;

    void display(){
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;   
    }    
};
int main(){

base_class baseobject;
derived_class derivedobject;
base_class *base_pointer;


base_pointer = &baseobject;
base_pointer->a=10;
base_pointer->display();

base_pointer = &derivedobject;
derivedobject.a=100;
derivedobject.b=200;

base_pointer->display();

    return 0;
}