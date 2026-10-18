#include <iostream>
using namespace std;
    

class Teacher{

private:

double salary;
double tutionfees;

public:

string name; 
string dept;
string subject;
string designation;

void setsalaryfees(double s, double fee){
    salary = s;
    tutionfees = fee;
}

double getSalary(){ 
    return salary;
}

double getTutionFees(){  
    return tutionfees;
}

};

int main(){

  Teacher T1;
  Teacher T2;

  T1.name = "nitin";
  T2.name = "Priyanka";
  T1.dept = "C++";
  T2.dept = "CS"; 
  T1.subject = "Computer science";
  T2.subject ="Company Secretary";
  T1.setsalaryfees(100000, 10000);
  T2.setsalaryfees(200000, 20000);

  cout<<"My name is - "<<T1.name<<endl;
  cout<<"My name is - "<<T2.name<<endl;
  cout<<"My dept is - "<<T1.dept<<endl;
  cout<<"My dept is - "<<T2.dept<<endl;
  cout<<"My subject is - "<<T1.subject<<endl;
  cout<<"My subject is - "<<T2.subject<<endl;
  cout<<"My salary & fees - "<<T1.getSalary()<<" & "<<T1.getTutionFees()<<endl;
  cout<<"My salary & fees - "<<T2.getSalary()<<" & "<<T2.getTutionFees()<<endl; 



    return 0;
} 