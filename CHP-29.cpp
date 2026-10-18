#include <iostream>
using namespace std;
 
class Future{

int a;
int b;

public:

Future();

void Display(){
cout<<"This is the value of a: "<<a<<" and The value of b: "<<b<<endl;
}


};

Future :: Future(){
    a=1000;
    b=2000;
}


int main(){

 Future a,b;
 a.Display();
 b.Display();

    return 0;
}