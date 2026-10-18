// #include <iostream>
// using namespace std;
//     int main(){

// //  int sum = 0;
// //  int i=0;

// //  while(i<=50){
    
// //     cout<<i<<endl;
// //     sum = sum + i;
// //     i++;
    
    
// // }
// // cout<<"sum of all numbers from 0 to 50: "<<sum<<endl;


// // int i = 1;

// // while(i<=5){

// //     cout<<i<<endl;
// //     i++;

// // }


// // int i = 5;

// // while(i>=1){

// //     cout<<i<<endl;
// //     i--;
// // }

// //  int password;

// //  cout<<"Enter the Password: "<<endl;
// //  cin>>password;

// //  while(password!=1234){
// //     cout<<"Wrong Password: "<<endl;
// //     cout<<"login unsuccessful, try again: "<<endl;
// //     cin>>password;
// //  }
// //  cout<<"Login successful: "<<endl;
// //     return 0;



// for(int i = 1; i<=10; i++){

//     cout<<"These are the numbers from 1 to 10: "<<i<<endl;
// }
//    cout<<endl;

// for(int i = 10; i>=1; i--){
//     cout<<"These are the numbers from 10 to 1: "<<i<<endl;
// }

//    cout<<endl;

 

//    for(int i = 2; i<=10; i++){
//     if(i%2==0){
//         cout<<"These are the even number from 2 to 10: "<<i<<endl;
//     }
//    }

//    cout<<endl;



//    for(int i = 1; i<=10; i++){

//     if(i%2!=0){
//         cout<<"These are the odd number from 1 to 10: "<<i<<endl;
        
//     }
//    }

//   cout<<endl;

//   string greet ="hello";

//   for(int i = 1; i<=5; i++){
    
//   cout<<"5 times greet: "<<greet<<endl;
//   }

//   cout<<endl;

//   int n;

//   cout<<"Please enter a value: "<<endl;
//   cin>>n;

//   for(int i = 1; i<=n; i++){

//     cout<<"These are the numbers till: "<<i<<endl;
//   }

//   cout<<endl;

//   int m;

//   cout<<"Please enter a value: "<<endl;
//   cin>>m;

//   for(int i = 1; i<=10; i++){

//     cout<<"Multiplication of: "<<i*m<<endl;
//   }
 
//   cout<<endl;

//   int sum = 0;

//   for(int i = 1; i<=10; i++){

//     sum = sum + i;
//   }

//   cout<<"The sum of numbers from 1 to 10: "<<sum<<endl;

//   cout<<endl;

//   int a, add = 0;

//   cout<<"Please enter the number: "<<endl;
//   cin>>a;

//   for(int i = 1; i<=a; i++){

//       add = add + i;
//   }

//   cout<<"The sum of numbers of a: "<<add<<endl;
//   return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//  int i = 1;
//  while(i<=10){

//     cout<<i<<endl;
//     i++;
//  }
//  cout<<endl;

//  int j = 10;

//  while(j>=1){

//     cout<<j<<endl;
//     j--;
//  }

//  cout<<endl;
 
//  int q = 2;

//  while(q<=10){

//    if(q%2==0){
//     cout<<q<<endl;
//    }
//    q++;
 
//  }

//  cout<<endl;

//  int w = 1;

//  while(w<=10){

//    if(w%2!=0){
//     cout<<w<<endl;
//    }
//    w++;
 
//  }

//  cout<<endl;

//  int r = 1;
//  string greet = "hello";

//  while(r<=5){

//    cout<<greet<<endl;
//    r++;
 
//  }

//  cout<<endl;

//  int t = 1;
//  int y;

//  cout<<"Please enter the value: "<<endl;
//  cin>>y;

//  while(t<=y){

//    cout<<"These are the numbers: "<<t<<endl;
//    t++;
//  }

//  cout<<endl;

//  int u = 1;
//  int o;

//  cout<<"Please enter the value: "<<endl;
//  cin>>o;

//  while(u<=o){

//    cout<<"These are the numbers: "<<u*o<<endl;
//    u++;
//  }

//  cout<<endl;


//  int sum = 0;
//  int p = 1;

//  while(p<=15){

//    sum = sum + p;
//    p++;
//  }
//  cout<<"The sum of 1 to 15 numbers: "<<sum<<endl;

//  cout<<endl;

//  int f = 0;
//  int c;

//  cout<<"Please enter a value: "<<endl;
//  cin>>c;

//  while(f<=c){

//    if(c!=0){
//      cout<<"enter the value "<<endl;
//      cin>>c;
//    }
//    f++;
//  }
//  cout<<"we found 0, hence we came out of the loop: "<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){

// int i = 1;

// do{

//    cout<<"Numbers from 1 to 5: "<<i<<endl;
//    i++;
// }while(i<=5);


// int i = 5;

// do{

//    cout<<"Numbers from 1 to 5: "<<i<<endl;
//    i--;
// }while(i>=1);

// string greet = "hello";
// int i = 1;

// do{

//    cout<<"Greet: "<<greet<<endl;
//    i++;
// }while(i<=5);

//  int i = 2;

//  do{

//    if(i%2==0){
//    cout<<"These are the numbers from 1 to 10: "<<i<<endl;}
//    i++;
//  }while(i<=10);

int i = 1;
int n;

cout<<"Please enter a value: "<<endl;
cin>>n;

do{

 if(n!=10){

   cout<<"Please enter the value: "<<endl;
   cin>>n;
 }
 i++;
 
}while(n!=10);

cout<<"We got 10, coming out of loop: "<<endl;

   return 0;
}