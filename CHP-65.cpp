#include <iostream>
using namespace std;
   
template<class S1, class S2>
class Rawat{
S1 a;
S2 b;

public:

 Rawat(S1 x, S2 y){
 
    a = x;
    b = y;
}

void display(){

    cout<<"This is the value of a: "<<a<<endl;
    cout<<"This is the value of b: "<<b<<endl;
}
    
};

int main(){

 Rawat <int, float> R1(10, 10.1);
 R1.display();

    return 0;
}