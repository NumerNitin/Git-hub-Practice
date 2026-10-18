#include <iostream>
using namespace std;
    
class g1{

    public:

    void greet(){
   cout<<"Hello world"<<endl;
    }
};

class g2{

    public:

    void greet(){
        cout<<"kaise ho"<<endl;
    }
};


class derived: public g1, public g2{

  public:
    void greet(){
        g1::greet();  //ambiguity resolved by specifying the class name.
    }
 };




int main(){

    g1 greet1;
    g2 greet2;
    greet1.greet();
    greet2.greet();
    derived d;
    d.greet();
    return 0;
}