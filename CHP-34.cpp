#include <iostream>
using namespace std;
    
class student{

int roll;

public:

student(int r){

    roll = r;
}

student(const student &r1){

    roll = r1.roll;
}

student display(){

 cout<<"This is the value of roll no. of s1 and s2: "<<roll<<endl;
}

};

int main(){

student s1(101);
// s1.display();

student s2 = s1;
s2.display();

    return 0;
}