#include <iostream>
using namespace std;
   
class Student{

int N1, N2, N3;

public:

Student(int a, int b, int c=9){

    N1=a;
    N2=b;
    N3=c;
}

 void display(){
 cout<<"This is the value of N1: "<<N1<<"\nThis is the value of N2: "<<N2<<"\nThis is the value of N3: "<<N3<<endl;
}


};

int main(){

Student n(12,10);
n.display();


    return 0;
} 