// #include <iostream>
// using namespace std;

// int main(){

// // Q.1 - Write a C++ program that takes two int numbers from the user and prints their sum.

// //  int a = 17, b = 5;
// //  cout<<"The sum of a + b: "<<a + b<<endl;

// // Q.2 - Write a C++ program that takes the length and width of a rectangle as float values and calculates its area.

// //  int length;
// //  float width;
// //  cout<<"Please enter the value of length: "<<endl;
// //  cin>>length;
// //  cout<<"Please enter the value of width: "<<endl;
// //  cin>>width;

// //  cout<<"The area of rectangle is: "<<length * width<<endl;

// // Q.3 - Write a C++ program that takes three double numbers and calculates their average.

// // double a = 10.20, b = 21.33, c = 33.333;
// // cout<<"The average of 3 doubles is: "<<(a + b + c)/3<<endl;

// // Q.4 - Write a C++ program that takes temperature in Celsius as a float and converts it to Fahrenheit.

// // float celsius = 30.55;
// // cout<<"Fahrenheit = "<<(celsius *9/5) + 32<<endl;
// // cout<<"celsius = "<<celsius;

// // Q.5 - Write a C++ program that takes an int number and checks whether it is even or odd.

// // int a;

// // cout<<"Please enter a number: "<<endl;
// // cin>>a;

// // if(a%2==0)
// // {cout<<"This is a even number "<<endl;}

// // else if(a%2!=0){
// //     cout<<"This is a odd number "<<endl;
// // }



// // Q.6 - Write a C++ program that takes an int number and prints its last digit.

//     // int a;
//     // cout << "Enter a number: ";
//     // cin >> a;

//     // int lastDigit = a % 10;

//     // cout << "Last digit: " << lastDigit;

// // Q.7 - Write a C++ program that takes two int numbers and swaps their values.

// //  int a = 10, b = 20, c;

// //  cout<<"Value of a & b: "<<a<<" "<<b<<endl;

// //  c = a;
// //  a = b;
// //  b = c;
 
// //  cout<<"Value of a & b: "<<a<<" "<<b<<endl;


// return 0;
// }

#include <iostream>
using namespace std;

int main(){

//  int age;

//  cout<<"Please enter the age: "<<endl;
//  cin>>age;

//  if(age==0){

//     cout<<"You're not even born: "<<endl;}

//  else if(age<=17){
//     cout<<"You're a teenager: "<<endl;
//  }
 
//   else{
//     cout<<"You're adult: "<<endl;
//   }

//  int a, b;
//  cout<<"Enter the value of a & b: "<<endl;
//  cin>>a>>b;

//   cout<<"1st number is greater than 2nd number: "<<(a>b)<<endl;
//   cout<<"1st number is less than 2nd number: "<<(a<b)<<endl;
//   cout<<"1st number is equal to 2nd number: "<<(a=b)<<endl;

//  int a = 10, b = -5, c = 0;
//  cout<<"The value of a, b & c: "<<a<<","<<b<<","<<c<<endl;

//  int a, b;
//  cout<<"Please enter the value of a & b: "<<endl;
//  cin>>a>>b;

//  if(a>b){
//    cout<<"Larger number: "<<a<<endl;
//  }
 
//  else{
//   cout<<"smallest number: "<<b<<endl;
//  }

//  int a;
//  cout<<"Please enter the value of a: "<<endl;
//  cin>>a;

//   if(a%5==0){
//    cout<<"divisble by 5: "<<endl;
//  }
 
//  else{
//   cout<<"not divisible by 5: "<<endl;
//  }
 
int a,b,c;

cout<<"Please enter the value of a,b & c: "<<endl;
cin>>a>>b>>c;

if((a>c) && (b>c)){
  cout<<"C is the smallest number: "<<c<<endl;
}

else if((a>b) && (c>b)){
  cout<<"B is the smallest number: "<<b<<endl;
}

else {
  cout<<"A is the smallest number: "<<a<<endl;
}



    return 0;
}