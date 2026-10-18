#include <iostream>
using namespace std;
    
// Base class (Parent)
class animal{

    public:
         void sound(){
            cout<<"Animal sound"<<endl;
         }
};

// Derived class (Child) inheriting from Animal
class dog: public animal{

  public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }

};

class cat: public animal{

    public:
        void sound(){
         cout<<"cat meows"<<endl;
        }
};


int main(){

    // Create an object of the derived class (Dog)
  dog d;
  // Call the Dog class's own function
  d.sound();

   // Create an object of the derived class (Dog)
  cat c;
  c.sound();

    return 0;
}