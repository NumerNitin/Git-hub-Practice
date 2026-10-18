#include <iostream>
using namespace std;
    
class Student{

int a, b;

public:

 Student(){
    a = 0;
    b = 0;
 }

 Student(int x){

    a = x;
    b = 0;
 }

 Student(int x, int y){

    a = x;
    b = y;
 }

 void display(){
 cout<<"This is the value of a: "<<a<<" and This is the value of b: "<<b<<endl;
}

};


int main(){

Student a;
a.display();

Student b(10);
b.display();

Student c(10,20);
c.display();

    return 0;
}