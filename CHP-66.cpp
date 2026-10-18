#include <iostream>
using namespace std;
    
template <class T1=int, class T2=float>
class num{

 T1 a;
 T2 b;

 public:

 num(T1 x, T2 y){

    a = x;
    b = y;
 }

 void display(){
 
  cout<<"This is the value of a: "<<a<<endl;
  cout<<"This is the value of b: "<<b<<endl;
 }

};

 int main(){

 num<>n1(10, 10.11);
 n1.display();


    return 0;
}