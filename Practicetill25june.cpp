// #include <iostream>
// using namespace std;
    
// class Teacher{

// int salary;

// public:

// string dept;
// string subject;

// int setsalary(int s){
  
//   salary = s;}

// int getsalary(){

//     cout<<"This is the salary of t1: "<<salary<<endl;
//     return salary;}

// };

// int main(){

// Teacher t1,t2;

// t1.dept = "computer science";
// t1.subject = "c++";
// t1.setsalary(125000);
// t1.getsalary();

// cout<<"This is the dept of t1: "<<t1.dept<<endl;
// cout<<"This is the subject of t1: "<<t1.subject<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
  
// class employee{

// static int count;

// public:

// int id;

// void setdata(void){
// cout<<"Please enter the ID: "<<endl;
// cin>>id;
// count++;
// }

// void getdata(){

// cout<<"This is your employee id: "<<id<<" and this is the count of your employee id: "<<count<<endl;
// }

// void static getcount(){

// cout<<"This is the value of static method or static member function. "<<count<<endl;
// }

// };

// int employee :: count;

// int main(){

// employee phantom,nitin,nibin;

// phantom.setdata();
// phantom.getdata();
// employee::getcount();

// nitin.setdata();
// nitin.getdata();
// employee::getcount();

// nibin.setdata();
// nibin.getdata();
// employee::getcount();

//     return 0;
// }

// #include <iostream>
// using namespace std;
   
// class students{

// int id;
// int name;

// public:

// void setdata(void){

// cout<<"enter the id: "<<endl;
// cin>>id;}

// void getdata(void){

// cout<<"This is the id: "<<id<<endl;    
// }

// };

// int main(){

//   students s[6];
  
//   for (int i=0; i<6; i++){

//   s[i].setdata();
//   s[i].getdata();
  
//   }
//     return 0;
// }

// #include <iostream>
// using namespace std;
   
// class jenn{

// int a;
// int b;

// public:

//  int setdata(int j1, int j2){

//  a = j1;
//  b = j2;}

//  int setdatasum(jenn o1, jenn o2){

//     a = o1.a + o2.a;
//     b = o1.b + o2.b;
//  }

//  int display(){

//     cout<<"This is the value of a: "<<a<<", This is the value of b: "<<b<<endl;
//  }

//  };



// int main(){

// jenn J1,J2,J3;

// J1.setdata(10,20);
// J1.display();

// J2.setdata(30,40);
// J2.display();

// J3.setdatasum(J1,J2);
// J3.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// class jenn{

// int a;
// int b;


// public:

// friend jenn getdatasum(jenn n1, jenn n2);

// int setdata(int j1, int j2){

//     a = j1;
//     b = j2;}

// void display(){
//     cout<<"This is the value of a: "<<a<<" and This is the value of b: "<<b<<endl;
// }    
// };


// jenn getdatasum(jenn n1, jenn n2){

//     jenn n3;
//     n3.setdata((n1.a + n2.a),(n1.b + n2.b));
//     return n3;
// }


//   int main(){

//   jenn n1,n2,sum;

//   n1.setdata(10,20);
//   n1.display();

//   n2.setdata(30,40);
//   n2.display();

//   sum = getdatasum(n1,n2);
//   sum.display();

//     return 0;
// }

// #include <iostream>
// using namespace std;
  
// class y;

// class x{

// int data;

// friend void sum(x, y);

// public:

// void setvalue(int value){

//     data = value;
// }
// };

// class y{

// int data2;

// public:

// friend void sum(x, y);

// void setvalue(int value){

//     data2 = value;

// }
// };

// void sum(x o1, y o2){
 
// cout<<"This is the sum of both x + y: "<<o1.data + o2.data2<<endl;

// }

// int main(){

// x a;
// y b;

// a.setvalue(10);
// b.setvalue(20);
// sum(a, b);
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class employee;

// class employee1{

//  public:
 
//  int sum(int s, int b){

//     return (s + b);
//  }

//  int summing(employee, employee);


// };

    
// class employee{

//     int salary;
//     int bonus;

//     friend int employee1 :: summing(employee, employee);
    
//     public:

//     int setsalbon(int s, int b){

//     salary = s;
//     bonus = b;
//     }

//     void dissalbon(){
//         cout<<"This is the salary: "<<salary<<"This is the bonus: "<<bonus<<endl;
//     }
// };

// int employee1 :: summing(employee o1, employee o2){

//     return(o1.salary + o2.salary);  

// }

// int main(){

// employee N1,N2;

// N1.setsalbon(10000,20000);
// N2.setsalbon(30000,40000);

// employee1 total;

// total.summing(N1,N2);
// cout<<"This is the total of N1 & N2: "<<total.summing(N1,N2)<<endl;


//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// class student{

// int roll;

// public:

// student(int r){

//     roll = r;
//     cout<<"This is the roll no. of student: "<<roll<<endl;
// }

// };


// int main(){

//  student s1(101);
//  student s2(102);
//  student s3(103);
 
//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// class student{

//  int roll;
//  int roll2;
//  int roll3; 

// public:

//  student(){

//     roll = 100;
    
//     cout<<"This is the roll no. of s1: "<<roll<<endl;

//  }

// };

// int main(){

//     student s1;    
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
   
// class sum{

// int a;
// int b;

// public :

// sum(int x, int y){

// a = x;
// b = y;
// int c = a + b;
// cout<<"The sum of  a + b: "<<c<<endl;

// }

// sum(int x){

//  a = x;
//  b = 10;

//  cout<<"This is the value of a and b: "<<a<<" + "<<b<<endl;

// }


// };


// int main(){

//  sum(10,20);

//  sum(5);


//     return 0;
// }

// #include <iostream>
// using namespace std;
    
// class number{

//  int num1;
//  int num2;

//  public:

//  number(int a = 100, int b = 200){

//   num1 = a;
//   num2 = b;

//  }

//  number display(){
 
//     cout<<"This is the value of a: "<<num1<< " and  This is the value of b: "<<num2<<endl;
//  }

// };

// int main(){

//  number n(10,20);
//  n.display();

//  number v;
//  v.display();

//     return 0;
// }

#include <iostream>
using namespace std;

class Number {

   int value;

   public:
    

    // Parameterized Constructor
    Number(int x) {
        value = x;
        cout << "Object initialized with value: " << value << endl;
    }
};

int main() {
    int x;

    // 1. Get value from user at runtime
    cout << "Enter a number to initialize your object: ";
    cin >> x;

    // 2. Dynamic Initialization happens right here
    Number n(x); 

    return 0;
}