#include <iostream>
using namespace std;

// class employee{

// int id;
// int salary;

// public:

// void setdata(void){
//   cout<<"enter the id: "<<endl;
//   cin>>id;
// }

// void getdata(){
// cout<<"This is the id of employee: "<<id<<endl;

// }

// };

// class jenn{

//   int a;
//   int b;

//   public:

//   void setdata(int v1,int v2){
//    a = v1;
//    b = v2;
//   }

//   void getdatasum(jenn n1, jenn n2){
//    a = n1.a + n2.a;
//    b = n1.b + n2.b;
//   }

//   void displaysum(){
//     cout<<"This is the value of a: "<<a<< " and This is the value of b: "<<b<<endl;
//   }
// };


class Jenn{

    int a;
    int b;
    friend Jenn setdatasum(Jenn n1, Jenn n2);

    public:

    int setdata(int j1, int j2){
     a = j1;
     b = j2;
    }

    int display(){
        cout<<"This is the value of a: "<<a<<" and This is the value of b: "<<b<<endl;
    }
};

Jenn setdatasum(Jenn n1, Jenn n2){

    Jenn n3;
    n3.setdata((n1.a + n2.a),(n1.b + n2.b));
    return n3;
}

int main(){

// employee id[5];

// for(int i=1; i<=5; i++){

//     id[i].setdata();
//     id[i].getdata();
// }

//  jenn n1, n2, n3;

//  n1.setdata(10, 20);
//  n1.displaysum();

//  n2.setdata(5, 17);
//  n2.displaysum();

//  n3.getdatasum(n1, n2);
//  n3.displaysum();

 Jenn n1,n2,sum;

 n1.setdata(100, 200);
 n1.display();

 n2.setdata(200, 300);
 n2.display();

 sum=setdatasum(n1, n2); 
 sum.display();

    return 0;
}