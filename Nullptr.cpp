#include <iostream>
using namespace std;

 void func(int ptr)
 {
  cout<<"Value is Printed "<<ptr<<endl;
 }
 void func(int *ptr){

  cout<<"Value is null"<<endl;
 }
    
 int main(){

  // This is a normal Pointer in c++
  //   int a = 10;
  //   int *ptr = &a;
  //   cout<<*ptr<<endl;


  /* If a pointer is not initialized then it should be assigned with a NULL or null ptr,
    but there is a problem if you use NULL that it returns only int data type & during function overloading it will 
    return explicitly the int return type function which is totally wrong, it should call pointer overloading function. */

  // This is a "NULL" pointer in call c++
     
    func(NULL); //This will explicitly call int type func in function overloading but not the pointer type func.

  // This is a "nullptr" pointer in call c++

    // func(nullptr); //This will call only func pointer function even if it is of any data type whether bool,int,char,double,float,etc.



    return 0;
}