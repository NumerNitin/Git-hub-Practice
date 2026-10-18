#include <iostream>
using namespace std;

int sum(int a, int b){
int c=a+b;
return c;}

// void swap(int a, int b){ //This code won't swap the call by values.
//  int temp = a;
//   a = b;
//   b = temp;
// }


//  void swappointer(int* a, int* b){ //This code will swap the values & known as swap pointer(call by reference).
//  int temp = *a;
//      *a = *b; 
//      *b = temp;
//  }


 void swapreferenceVAR(int &a, int &b){ //This code will swap the values & known as swap by reference(call by reference).
 int temp = a;
     a = b; 
     b = temp;
 }


int main(){
   
int a=5, b=18;
// cout<<"The sum of a and b is. "<<sum(a, b)<<endl;


//    swap (a, b);
//    cout<<"The value of a:- "<<a<<"\nThe value of b:- "<<b<<endl; //This code won't swap the call by values.
   

//   swappointer (&a, &b);
//   cout<<"The value of a:- "<<a<<"\nThe value of b:- "<<b<<endl; //This code will swap the values & known as call by reference.


     swapreferenceVAR (a, b); 
     cout<<"The value of a:-"<<a<<"\nThe value of b:- "<<b<<endl; //This code will swap the values & known as call by reference.


return 0;
}