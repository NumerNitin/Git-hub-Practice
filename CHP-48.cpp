#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
  // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
   // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
   // Order of execution of constructor -> C() then B() and A()
};

*/

class base1
{

    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }

    base1 displayvalue1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class base2
{

    int data2;

public:
    base2(int i)
    {

        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }

    base2 displayvalue2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2{

    int derived1;

    public:

    derived(int a, int b, int c) : base1(a), base2(b){

        derived1 = c;
        cout<<"Derived class constructor called" <<endl;
    }

    derived displayderived(){

     cout<<"The value of derived1 is "<<derived1<<endl;

    }

};

int main()
{
  derived valuecall(100,200,300);
  valuecall.displayvalue1();
  valuecall.displayvalue2();
  valuecall.displayderived();
  
    return 0;
}