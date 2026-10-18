#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    // Constant Variables:-

    // const int a=10; // a is a constant variable and its value cannot be changed
    // cout<<"The value of a was "<<a<<endl;
    // a=20; // This line will cause a compile-time error because we cannot assign a new value to a constant variable
    // cout<<"The value of a is "<<a<<endl; // This line will also cause a compile-time error

    // Manipulators in C++ language:-

    // int a=5, b=17, c=517517;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;

    // cout<<"The value of a is "<<setw(6)<<a<<endl; // 
    // cout<<"The value of b is "<<setw(6)<<b<<endl; // 
    // cout<<"The value of c is "<<setw(6)<<c<<endl; // 

    // Operator precedence in c++ language:-
    
    int a=5, b=17, c=5;
    int d = (a + (b * c)); // operator precedence is followed here, so multiplication is performed before addition
    cout<<"The value of d is"<<d<<endl; // The value of d is 90 because multiplication is performed before addition
    // we can find the operator precedence of any operator on the internet or in a C++ reference book. The operator precedence determines the order in which operators are evaluated in an expression. In this case, the multiplication operator (*) has a higher precedence than the addition operator (+), so it is evaluated first.
    return 0;

}