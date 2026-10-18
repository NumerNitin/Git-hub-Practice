#include <iostream>
using namespace std;
   
 template<class T1, class T2>

  void multiple(T1 a, T2 b){
  cout<<"This is the product of a & b: "<<a * b<<endl;
 };

 int main(){

   multiple(10, 20);


    return 0;
}