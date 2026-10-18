#include<iostream> // include the iostream library for input and output operations & this built in library in c++ is used to perform input and output operations in c++ programming language
//#include<WholePractice.h> // we can create our own header file and include it in our program to use the functions and variables declared in that header file & this is a user defined header file which we have created for our practice
#include<iomanip>
using namespace std; // using the standard namespace to avoid writing std:: before every standard library function or object

//   string global = "harshit";

// void sum()
// {
//     cout<<global;
// }
 
//int c = 45; this is a global variable which can be accessed from any function in the program.

int main() 
{

//  int a=10, b=20, c=30;
//  cout<<"Sum of a,b & c is:"<<endl<<a+b+c;
//  float Neon=10.5, Rawat=20.5, Harshit=30.5;
//  cout<<"This is the value of Neon, Rawat & Harshit is:-"<<endl<<Neon<<endl<<Rawat<<endl<<Harshit;
//  char d='D', e='E', f='F';
//  cout<<"This is the value of d,e & f:-"<<endl<<"d = "<<d<<endl<<"e = "<<e<<endl<<"f = "<<f;
// bool x=true, y=false;
// cout<<"This is the value of x & y:-"<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl;

// string local = "Rawat";

// sum();
// cout<<local;

// int num1, num2;
// cout<<"Enter the value of num1. "<<endl; //insertion
// cin>>num1; //extraction
// cout<<"Enter the value of num2. "<<endl;
// cin>>num2;
// cout<<"The sum of num1 and num2 is:" <<endl<<num1+num2;

// Types of Operators in C++

//int a = 10, b=20;

// 1.Arithmetic Operators:

// cout<<"The value of a + b is: "<<a+b<<endl;
// cout<<"The value of a - b is: "<<a-b<<endl;
// cout<<"The value of a * b is: "<<a*b<<endl;
// cout<<"The value of a / b is: "<<a/b<<endl;
// cout<<"The value of a++ is: "<<a++<<endl;
// cout<<"The value of a-- is: "<<a--<<endl;
// cout<<"The value of ++ a is: "<<++a<<endl;
// cout<<"The value of -- a is: "<<--a<<endl;

// 2.Assignemnt Operators:

//a = 'A', b=50, c='a', d='b'; 

// 3.Comparison Operators:

// int a=4, b=5;

// cout<<"The value of a == b is: "<<(a==b)<<endl;
// cout<<"The value of a != b is: "<<(a!=b)<<endl;
// cout<<"The value of a < b is: "<<(a<b)<<endl;
// cout<<"The value of a > b is: "<<(a>b)<<endl;
// cout<<"The value of a <= b is: "<<(a<=b)<<endl;
// cout<<"The value of a >= b is: "<<(a>=b)<<endl;

//4.logical Operators:

// int a=5, b=17;

// cout<<"The value of (a==b) && (a>b) is: "<<((a==b) && (a>b))<<endl;
// cout<<"The value of (a==b) && (a<b) is: "<<((a==b) && (a<b))<<endl;
// cout<<"The value of (a!=b) && (a>b) is: "<<((a!=b) && (a>b))<<endl;
// cout<<"The value of (a!=b) && (a<b) is: "<<((a!=b) && (a<b))<<endl;
// cout<<"The value of (a==b) || (a<b) is: "<<((a==b) || (a<b))<<endl;
// cout<<"The value of (a==b) || (a>b) is: "<<((a==b) || (a>b))<<endl;
// cout<<"The value of !(a==b) is: "<<(!(a==b))<<endl;

//5.Global scope resolution operator:

// int a=5, b=18, c=44;

// cout<<"The value of a is: "<<a<<endl;
// cout<<"The value of b is: "<<b<<endl;
// cout<<"The value of c is: "<<c<<endl;
// cout<<"The value of c as global variable is: "<<::c<<endl; // this is how we can access the global variable c using scope resolution operator

//6.Reference Variables:

// int x=11, &y=x; if we do not put "&" in front reference variable then if the parent variable value is changed it will always pick up the older value.
//     x=20;

// cout<<"The value of x is: "<<x<<endl;  
// cout<<"The value of y is: "<<y<<endl;

//7. Type Casting:

// int a=5; 
// float b=17.77;

// cout<<"The value of a is: "<<float(a)<<endl;
// cout<<"The value of b is: "<<(int)b<<endl;

//8. floats, double and long double literals in c++

// float d = 517.77;
// long double e = 517.517;

// cout<<"The value of 517.517 is "<<sizeof(517.77)<<endl; sizeof operator is used to find the size of a data type or variable in bytes
// cout<<"The value of 517.517f is "<<sizeof(517.77f)<<endl;
// cout<<"The value of 517.517F is "<<sizeof(517.77F)<<endl;
// cout<<"The value of 517.517l is "<<sizeof(517.517l)<<endl;
// cout<<"The value of 517.517L is "<<sizeof(517.517L)<<endl;

//9.Constants in c++ language

// int const a = 11, b=22; If we use constants it will throw an error if we changed any value.
//    a=12 , b=23;

//10.Manipulators in c++ language

// int a=77,b=99,c=108;

// cout<<"The value of a is: "<<setw(3)<<a<<endl;
// cout<<"The value of b is: "<<setw(3)<<b<<endl;
// cout<<"The value of c is: "<<setw(3)<<c<<endl;

//11.Operators Precedence in c++ language.

// int j=55005, n=175003, p=00000;
// int f=((j-p)+n);

// cout<<"The value of f is: "<<f<<endl;

return 0;

}