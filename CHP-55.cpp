#include <iostream>
using namespace std;

class base_class
{

public:
    int a;

    void display()
    {
        cout << "This is the value of base class variable a: " << a << endl;
    }
};

class derived_class : public base_class
{

public:
    int b;

    void display()
    {
        cout << "This is the value of base class variable a: " << a << endl;
        cout << "This is the value of derived class variable b: " << b << endl;
    }
};

int main()
{

 base_class *base_pointer; // Pointer of base class type
 base_class baseobject; // Object of base class
 derived_class derivedobject; // Object of derived class

 base_pointer = &baseobject; // Assigning address of base object to base class pointer
 base_pointer = &derivedobject; // Assigning address of derived object to base class pointer (upcasting)

 base_pointer->a = 10; // Accessing base class member through base class pointer
 base_pointer->display(); // Accessing base class member through base class pointer
 //base_pointer->b = 20; // This line will cause a compilation error because base_pointer is of type base_class and does not have access to member b of derived_class.
    
 derived_class *derived_pointer; // Pointer of derived class type
 derived_pointer = &derivedobject; // Assigning address of derived object to derived class pointer
 derived_pointer->a = 100; // Accessing base class member through derived class pointer
 derived_pointer->b = 200; // Accessing derived class member through derived class pointer
 derived_pointer->display(); // Calling display function of derived class

return 0;
}