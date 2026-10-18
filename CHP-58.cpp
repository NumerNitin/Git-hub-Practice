#include <iostream>
#include <string>
using namespace std;
    
class Tesla{

    string model;

    public:

    Tesla(string m){
        model = m;
    }

    virtual void display()=0; // do-nothing or pure virtual function or abstract class. It is used to make the class abstract class. We can not create the object of abstract class.

    friend class Tesla_Cybertruck; // for friend class we can access the private and protected members of the class in which it is declared as a friend.

};

class Tesla_Cybertruck : public Tesla{

  int price;

  public:

  Tesla_Cybertruck(string m, int p): Tesla(m){

  price = p;
 }

 void display(){

    cout<<"This is the model of Tesla Cybertruck:- "<<model<<endl;
    cout<<"This is the Price of Tesla Cybertruck:- "<<price<<endl;

 }

 };

int main(){

  Tesla_Cybertruck t1("M1", 1000000);
  t1.display();
//   Tesla *Ptr = &t1;
//   Ptr->display();


    return 0;
}