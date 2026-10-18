#include <iostream>
using namespace std;

/* syntax for initialization list in constructor:

class class_name{

int a;
int b;

public:
   class_name(int x, int y) : a(x), b(y)
   {
    cout<<"constructor executed"<<endl;
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
   }

};
*/

class number{

int a;
int b;

public:
    // number(int x, int y) : a(x), b(y)
    // number(int x, int y) : a(x), b(y + x)
    // number(int x, int y) : a(x), b(y + 5)
    // number(int x, int y) : a(x + y), b(y)
       number(int y, int x) : b(y) , a(x)
  {
    cout<<"constructor executed"<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
  }
};

int main(){

 number n(10,20);
 return 0;

}