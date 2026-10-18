#include <iostream>
using namespace std;
    
class numbers{

int num1;
int num2;

public:

void setdata(int a, int b){

    num1 = a;
    num2 = b;
}

void getdata(){

    cout<<"This is the value of num1. "<<num1<<endl;
    cout<<"This is the value of num2. "<<num2<<endl;
    
}
};

int main(){

//  numbers n1;
//  numbers *ptr = &n1;

 numbers *ptr = new numbers;
 (*ptr).setdata(10,20);  //dot operator
 (*ptr).getdata();


 numbers *ptr1 = new numbers; 

 ptr1->setdata(11,21); //arrow operator
 ptr1->getdata();


    return 0;
}