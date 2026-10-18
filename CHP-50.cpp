#include <iostream>
using namespace std;
    
 int main(){

//  int a = 17;
//  int* ptr = &a;

//  cout<<"This is the value of *ptr "<<*(ptr)<<endl;

 int *ptr = new int(10);
 
 delete ptr;

 cout<<"This is the value of *ptr "<<*(ptr)<<endl;
 
 float *p = new float(10.11);

 cout<<"This is the valur of *ptr "<<*(p)<<endl;

 int *arr = new int[3];
 
 arr[0] = 10;
 arr[1] = 11;
 arr[2] = 12;

 delete arr;

 cout<<"The value of ptr[0] "<<arr[0]<<endl;
 cout<<"The value of ptr[1] "<<arr[1]<<endl;
 cout<<"The value of ptr[1] "<<arr[2]<<endl;

    return 0;
}