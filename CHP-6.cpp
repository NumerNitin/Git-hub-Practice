//There are 2 types of header files in C++ programming language:

//1. System header files: It comes with the compiler. It is stored in a standard
//#include<iostream>

//2. User defined header files: It is written by the programmer. It is stored in the
//#include<Programm.h> This will produce an error because there is no header file 
//named Programm.h in the standard library. It should be #include<Programm.h>
//if it is a user defined header file.

//we can find c++ cpp reference header files in the following link:-https://en.cppreference.com/cpp/header 

#include<iostream>
using namespace std;

int main()
{
    //cout<<"Improving myself in C++ programming language is my goal.";
    cout<<"Following are the types of operators in c++ programming language:-"<<endl;
    cout<<endl;

    int a=4, b=5;
    cout<<"1.Arthimetic Operators"<<endl;
    cout<<endl;
    cout<<"The value of a+b is:-"<<(a+b)<<endl; //addition arithmetic operator
    cout<<"The value of a-b is:-"<<a-b<<endl; //subtraction arithmetic operator
    cout<<"The value of a*b is:-"<<a*b<<endl; //multiplication arithmetic operator
    cout<<"The value of a/b is:-"<<a/b<<endl; //division arithmetic operator
    cout<<"The value of a%b is:-"<<a%b<<endl; //modulo arithmetic operator
    cout<<"The value of a++ is:-"<<a++<<endl; //Post increment arithmetic operator
    cout<<"The value of a-- is:-"<<a--<<endl; //Post decrement arithmetic operator
    cout<<"The value of ++a is:-"<<++a<<endl; //Pre increment arithmetic operator
    cout<<"The value of --a is:-"<<--a<<endl; //Pre increment arithmetic operator
    cout<<endl;

    cout<<"2.Assignment Operators"<<endl;
    //int a=10, b=12, 
    //char c=7, d=c, c=b, b=a;
    cout<<endl;

    cout<<"3.Comparison Operators"<<endl;
    cout<<"The value of a==b is:-"<<(a==b)<<endl;
    cout<<"The value of a!=b is:-"<<(a!=b)<<endl;
    cout<<"The value of a>=b is:-"<<(a>=b)<<endl;
    cout<<"The value of a<=b is:-"<<(a<=b)<<endl;
    cout<<"The value of a>b is:-"<<(a>b)<<endl;
    cout<<"The value of a<b is:-"<<(a<b)<<endl;
    cout<<endl;

    cout<<"4.logical Operators"<<endl;
    cout<<"The value of logical and operator a==b && a>=b is:-"<<((a==b) && (a>=b))<<endl;
    cout<<"The value of logical and operator a==b && a<=b is:-"<<((a==b) && (a<=b))<<endl;
    cout<<"The value of logical or operator a==b || a>=b is:-"<<((a==b) || (a>=b))<<endl;
    cout<<"The value of logical or operator a==b || a<=b is:-"<<((a==b) || (a<=b))<<endl;
    cout<<"The value of logical not operator !a==b is:-"<<(!(a==b))<<endl;

    return 0;
}