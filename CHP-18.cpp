#include <iostream>
using namespace std;

  int factorial(int n){
  if(n<=1){return 1;}
  return n * factorial(n-1);
  }

  int fibonacci(int n){
    if(n<2){return 1;}
    return fibonacci(n-1) + fibonacci(n-2);
  }


    int main(){
   // factorial of a number
   // 6!=6*5*4*3*2*1 = 720
   // 0!=1 by definition
   // 1!=1 by definition
   // n!=n*(n-1)! 

   int n;
   cout<<"enter the number for factorial. "<<endl;
   cin>>n;
//    cout<<"This is the factorial of this number. "<<factorial(n)<<endl;
      cout<<"This is the value of fibonacci at this Position. "<<fibonacci(n)<<endl;
    return 0;
}