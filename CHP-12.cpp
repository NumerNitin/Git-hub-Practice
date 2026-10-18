#include <iostream>
using namespace std;
    int main(){
  int a=517;
  int*b=&a;
  cout<<"The value of a is..."<<a<<endl; //This will print the value of a.
  
  // *b is dereferencing the pointer b which means it will give the value at the address stored in b which is the value of a.
  cout<<"The value of *b is..."<<*b<<endl; //This will print the value of a because *b is the value at the address stored in b which is the address of a.
  
  // & is the address of operator and * is the value at address operator.
  cout<<"The address of &a is..."<<&a<<endl; //This will print the address of a because &a is the address of at high level.
  cout<<"The address of b is..."<<b<<endl; //This will print the address stored in b which is the address of a.
    
  return 0;
}