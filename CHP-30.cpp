#include <iostream>
using namespace std;
   
class Student {

int a;
int b;

public:

Student(int x, int y){
    a=x;
    b=y;
}

void display(){
cout<<"This is the student id: "<<a<<" and This is the Class of the student: "<<b<<endl;
}

};

// Student :: Student(int x, int y){ 

//     a = x; 
//     b = y;
// }

int main(){

 Student n(10, 20);
 n.display();
 


    return 0;
}