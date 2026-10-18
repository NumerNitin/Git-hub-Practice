#include <iostream>
using namespace std;
   
class Jenn{

int a;
int b;

public:
 // Function to set data
 int setdata(int J1, int J2){
   a = J1;
   b = J2;
}

 // Function taking two objects as arguments
 int setdatasum(Jenn o1, Jenn o2){
   a = o1.a + o2.a;
   b = o1.b + o2.b;}

 // Display values
  int display(){
    cout<<"This is the value of (a) "<<a<<" ,This is the value of (b) "<<b<<endl;  }

};

  int main(){

 Jenn J1,J2,J3;

  // Initialize first two Jenn objects
 J1.setdata(10, 20);
 J1.display();

 J2.setdata(30, 40);
 J2.display();

 // Pass objects J1 and J2 as arguments to addJenn
 J3.setdatasum(J1, J2);
 J3.display(); 

 return 0;

}