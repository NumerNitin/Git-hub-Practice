#include<iostream>
using namespace std;

int c = 517;//global scope or variable
int main()
{
    // Build in DATA TYPES IN C++
    //   int a, b, c;//local scope or variable
    //   cout<<"enter the value of a:"<<endl;
    //   cin>>a;
    //   cout<<"enter the value of b:"<<endl;
    //   cin>>b;
    //   c=a+b;
    //   cout<<"The sum of a and b is c:"<<c<<endl;
    //   cout<<"The global value of c is:"<<::c<<endl;//to access global variable we use scope resolution operator(::)
    
    // floats, double and long double literals in c++

    //     float d = 517.517f;
    //     long double e = 517.517l;
     //   cout<<"The value of 517.517 is "<<sizeof(517.517)<<endl;
     //   cout<<"The value of 517.517f is "<<sizeof(517.517f)<<endl;
    //   cout<<"The value of 517.517F is "<<sizeof(517.517F)<<endl;
    //   cout<<"The value of 517.517l is "<<sizeof(517.517l)<<endl;
   //   cout<<"The value of 517.517L is "<<sizeof(517.517L)<<endl;

   // REFERENCE VARIABLES IN C++ & SYNTAX OF REFERENCE VARIABLES IN C++ IS "&"

   //int x = 517;
   //int &y=x;//y is reference variable to x
   //cout<<"The value of x."<<x<<endl; //x is normal variable
   //cout<<"The value of y."<<y<<endl; //y is reference variable to x so it will also print the value of x

   //TYPE CASTING IN C++

   int a = 517;
   float b = 517.517;
   cout<<"The value of a is "<<float(a)<<endl;
   cout<<"The value of b is "<<int(b)<<endl;
   cout<<"The sum of a and b is "<<a + b<<endl;
   cout<<"The difference of a and b is "<<a - int(b)<<endl;
   cout<<"The product of a and b is "<<a * (int)b<<endl;
   return 0;
  }
