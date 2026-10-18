// #include<iostream>
// using namespace std;

// // int sum(int a, int b){

// //      int c;
// //      c = a + b;
// //      return c;
// // };

// // int substract(int a, int b){

// //      int c;
// //      c = a - b;
// //      return c;
// // };

// // int product(int a, int b){

// //      int c;
// //      c = a * b;
// //      return c;
// // };

// // bool iseven(int number){

// //     if(number%2==0){

// //         // cout<<"It is an even number: "<<endl;
// //         return true;
// //     }

// //     else{
// //         // cout<<"It is an odd number: "<<endl;
// //         return false;
// //     }
// // };

// bool isPrime(int number){

//  for(int i = 2; i<number; i++){

//    if(number % i==0){

//     return false;
//    }
//    else{
//     return true;
//    }
//  }
// }

// int main(){

// int a;

// cout<<"Please enter the value: "<<endl;
// cin>>a;
// // if(iseven(a)){

// //     cout<<"This is an even number: "<<iseven<<endl;
// // }

// // else{

// //     cout<<"This is an odd number: "<<iseven<<endl;
// // }

// // cout<<"The sum of a & b is: "<<sum(a,b)<<endl;
// // cout<<"The substract of a & b is: "<<substract(a,b)<<endl;
// // cout<<"The product of a & b is: "<<product(a,b)<<endl;

// if(isPrime(a)){

//     cout<<"This is a Prime number:"<<endl; 
// }

// else{

//     cout<<"This is a non-prime number: "<<endl;
// }

//  return 0 ;
// }


// #include<iostream>
// using namespace std;

// int calculatedamage(int attack, int defense){

// int damage = attack - defense;

// if(damage>0){

//     return damage;
// }

//     return 0;

// }

// int main(){

// int attack, defense;

// cout<<"Please enter the attack & defense value: "<<endl;
// cin>>attack>>defense;

// cout<<"The value of damage to the Player: "<<calculatedamage(attack, defense)<<endl;


//     return 0;
// }

#include<iostream>
using namespace std;

// int findMax(int a, int b){

//  if(a>b){

//   return a;
//  }

//   return b;

// }

// int DoubleNumber(int number){

//  int n = number * 2;
//  return n;
// 

class number{

    int a;

    public:

    void getdata(){

        cout<<"enter a value:"<<endl;
        cin>>a;
    }
};

int main(){

// int a, b;

// cout<<"Please enter the value of a & b: "<<endl;
// cin>>a>>b;

// cout<<"This is the largest number between both a & b: "<<findMax(a,b)<<endl;

// int number;

// cout<<"Please enter a value: "<<endl;
// cin>>number;

// cout<<"The number is: "<<number<<"."<<"After doubling it: "<<DoubleNumber(number)<<endl;

    return 0;
}