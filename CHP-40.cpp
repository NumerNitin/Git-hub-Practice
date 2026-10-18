#include <iostream>
using namespace std;
    
class car{

protected:
   string name;

public:
   
   string setname(string n){
    name = n;
    return name;
}
   
   void getname(){
    cout<<"Car name is:"<<name<<endl;
   }

    void body(){
    cout<<"Metallic body"<<endl;   }

};

class color:public car{

public:
    void car_color(){
        cout<<"black color"<<endl;
    }
   
};

class engine:public car{

public:
  void car_engine(){
    cout<<"Diesel engine"<<endl;
  }

};

int main(){

class engine e1;

e1.setname("Mercedes");
e1.getname();

e1.body();
e1.car_engine();

    return 0;
}