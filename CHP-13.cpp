#include <iostream>
using namespace std;
    int main(){
int cars[] = {100, 200, 300, 400};
cars[3]=1000;

//  cout<<cars[0]<<endl;
//  cout<<cars[1]<<endl;
//  cout<<cars[2]<<endl;      
//  cout<<cars[3]<<endl;   

//Quiz completed given by harry sir in c++14 language standard version.
 
 //By using for loop we will the print of array.

//  for (int i=0; i<4; i++)
//  {cout<<"These are the values of 4 cars. "<<cars[i]<<endl;

//  }
 
  //by using while loop we will the print of array.

//   int i=0;
//   while(i<4)
//   {
//     cout<<"These are the values of car "<<i<<" is "<<cars[i]<<endl;
//     i++;
//   }

  //By using do while loop we will the print of array.
//   int i=0;
//   do{
//     cout<<"These are the values of car "<<i<<" is "<<cars[i]<<endl;
//     i++;
//   }while(i<4);


//Pointers & arrays
 int *p = cars;
//  cout<<"The value of *p is "<<*p<<endl;
// cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
// cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
// cout<<"The value of *(p+3) is "<<*(p+3)<<endl;



  return 0;


}