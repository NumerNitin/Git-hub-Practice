#include<iostream>
using namespace std;

int main()
{
  //Normal "for loop" code in c++ to print 1 to 100-

  // syntax of for loop in c++ is-
  // for(initialization; condition; updation)
  // { code to be executed; }

  //for(int i=0;i<=100;i++)
  //{
    //cout<<i<<endl;
  //}
  
  //Infinite "for loop" code in c++ to print 1 to 100-

   // for(int i=0; 50<=100; i++)
   //{ //cout<<i<<endl;}
   
   // syntax of while loop in c++ is-
  // int i =  ;
  //while(condition)
  // { code to be executed; 
  //    i++;}

  //printing 1 to 100 using while loop in c++-

 //   int i=1;
 //   while(i<=100)
 //   {
 //     cout<<i<<endl;
 //     i++;
 //   } 

   //Infinite "while loop" code in c++ to print 1 to 100-

   // int=1; while(true)
   //{ //cout<<i<<endl;
   // i++;
   //}

   // syntax of do-while loop in c++ is-
  // int i =  ;
  // do 
  // { cout<<i<<endl; i++;}
  // while(i<=100);

  //printing 1 to 100 using do-while loop in c++-

  //  int i=1;
  //  do{
  //      cout<<i<<endl;
  //      i++;
  //   }while(i<=100); // for infinite do-while loop, we can write "while(true);"

  // 5 table by using do-while loop in c++.

    int i=1;
    do{
      cout<<5*i<<endl;
      i++;
    }while(i<=10);
      


   return 0;

}