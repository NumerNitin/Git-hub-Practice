#include <iostream>
#include <string>
using namespace std;
    
class teacher{

 // Properties or attributes.
 private:
 double salary;

//  public:   ----- This is constructor created by us in c++ programming.
//  teacher(){
//    cout<<"Hello Teachers."<<endl; 
//  }

//    initialization of constructor & a non-parameterized type of constructor as well in c++ programming.
 public :
 
 string name;
 string dept;
 string subject;
 
 teacher(string n, string d, string s, double sal){
   name = n;
   dept = d;
   subject = s;
   salary = sal;
 }

  teacher(){
   dept = "computer science";
 }

 //we can call this methods or member functions or class function.x
 void changedept(string newdept){
    dept = newdept;
 }

//  void setsalary (double s){
//  salary = s;
//  }

//  double getsalary (){
//    return salary;
//  }

 void getinfo(){

  cout<<"name: "<<name<<endl;
  cout<<"subject: "<<subject<<endl;

 }
};


int main(){ 

//  teacher T1; //constructor call
 teacher T1("nitin", "computer science", "c++", 1000000);
 T1.getinfo();
//  T1.name = "nitin";
//  T1.dept = "computer"; 
//  T1.subject = "c++";
//  T1.salary = 150000;
//  T1.setsalary(150000);
 
//  cout<<"My name is -"<<T1.name<<endl;
//  cout<<"My working dept is -"<<T1.dept<<endl; 
//  cout<<"This is the salary of mine -"<<T1.getsalary()<<endl;  
 
    return 0;
}