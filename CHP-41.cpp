#include <iostream>
using namespace std;
   
class value1{

protected:
  int value_num;

public:
 void setvalue(int v1) {
    value_num = v1;
 }

};

class value2{

protected:
  int value_num2;

public:
  void setvalue2(int v2) {
    value_num2 = v2;
  } 

};

class sum: public value1, public value2{

public:

 void display(){
 
  cout<<"The Value1 is: "<<value_num<<endl;
  cout<<"The Value2 is: "<<value_num2<<endl;
  cout<<"Sum of value1 and value2 is: "<<value_num + value_num2<<endl;

}

};

int main(){

 sum s1;
 s1.setvalue(5);
 s1.setvalue2(17);
 s1.display();

    return 0;
}