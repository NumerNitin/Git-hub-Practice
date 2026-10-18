#include <iostream>
using namespace std;
    
 class sum{

 int a, b;

 public:

 sum(int x, int y){
   a = x;
   b = y;
 }

 void operator+(){
    a+ b+;
 }

 void display(){
    cout<<"The sum of a & b: "<<a + b<<endl;
 }
 };

 int main(){

 sum plus;
 plus.operator+(10,20);
 plus.display();

    return 0;
}