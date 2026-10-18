#include <iostream>
using namespace std;
   
  int add(int a, int b, int c){
   return (a+b+c);
  }
  
  int add(int a, int b){
  return (a+b);
  } 

  int subtraction(int a, int b, int c){
  return (a-b-c);
  }

  int subtraction(int a, int c){
    return (a-c);
  }

  int multiplication(int a, int b){
    return (a*b);
  }

  int multiplication(int a, float b){
    return(a*b);
  }

    int main(){

    int a, b, c;

   cout<<"The sum of a, b & c. "<<add(10, 20, 30)<<endl;
   
    return 0;
}