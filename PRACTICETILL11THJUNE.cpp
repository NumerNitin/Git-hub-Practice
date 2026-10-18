#include<iostream>
// #include<nitin.h
#include<iomanip>
using namespace std;

// int glo=10;

// void sum(){
//   int a;
//   cout<<glo;
// }


// int main(){

//     int a=2;
//     a=5;
//     // double b=10.50;
//     // float c=17.777;
//     // long double d=5.5;
//     // bool is_true=true;
//     // char e = 'a'; 

//     cout<<"This is the value of int a: "<<a<<endl;
//     // cout<<"This is the value of double b: "<<b<<endl;
//     // cout<<"This is the value of float c: "<<c<<endl;
//     // cout<<"This is the value of long double d: "<<d<<endl;
//     // cout<<"This is the value of  bool is_true: "<<is_true<<endl;
//     // cout<<"This is the value of char e: "<<e<<endl; 

//     sum(); 

//     return 0;
// }

// int c=10;

// int main (){

// int a=100, b=50, c=250;
    // int a=5, b=17, c=b, d=c;
//     int a, b;


//     cout<<"This is the value of a: "<<endl;
//     cin>>a;
//     cout<<"This is the value of b: "<<endl;
//     cin>>b;
//     cout<<"This is the sum of a & b: "<<a+b<<endl;


//   arithmetic, logical, assignment & comparison

//    cout<<"The value of a + b:"<<a+b<<endl;
//    cout<<"The value of a - b:"<<a-b<<endl;
//    cout<<"The value of a / b:"<<a/b<<endl;
//    cout<<"The value of a++: "<<a++<<endl;

//    cout<<"The value of a: "<<a<<endl;
//    cout<<"The value of b: "<<b<<endl;
//    cout<<"The value of c: "<<c<<endl;
//    cout<<"The value of d: "<<d<<endl;

// cout<<"The value of(a>=b):"<<(a>=b)<<endl;
// cout<<"The value of(a<=b):"<<(a<=b)<<endl;
// cout<<"The value of a>b: "<<(a>b)<<endl;
// cout<<"The value of a<b: "<<(a<b)<<endl;
// cout<<"The value of a!b: "<<(a!=b)<<endl;

// cout<<"The value of(a==b)&&(a<=b):"<<((a>=b)&&(a<=b))<<endl;
// cout<<"The value of(a!=b)&&(a<=b):"<<((a!=b)&&(a<=b))<<endl;
// cout<<"The value of(a==b)&&(a<=b):"<<((a>=b)&&(a==b))<<endl;

// cout<<"The value of b: "<<b<<endl;
// cout<<"The value of a: "<<a<<endl;
// cout<<"The value of c: "<<::c<<endl;
// cout<<"The value of c: "<<c<<endl;


// floats, doubles, literals:-

// float a = 17.77;
// long double b = 54.54;

// cout<<"this is the value of 17.77. "<<sizeof(17.77)<<endl;
// cout<<"this is the value of 17.77f. "<<sizeof(17.77f)<<endl;
// cout<<"this is the value of 17.77F. "<<sizeof(17.77F)<<endl;
// cout<<"this is the value of 54.54l. "<<sizeof(54.54l)<<endl;
// cout<<"this is the value of 54.54.L "<<sizeof(54.54L)<<endl;

// int a = 100, b = a;
//  a=200;
//  a=300;
 
// cout<<"The value of a is: "<<a<<endl;
// cout<<"The value of b is: "<<b<<endl;

// int a = 100, &b = a;
//  a=200;
//  a=300;
 
// cout<<"The value of a is: "<<a<<endl;
// cout<<"The value of b is: "<<b<<endl;


// int a = 100.90; float b = 100.88;

// cout<<"the value of a: "<<(float)a<<endl; 
// cout<<"The value of b: "<<(int)b<<endl;


// const int a = 100;
// // a = 200;

// cout<<"the value of a: "<<a<<endl;

// int a = 10000, b=200000, c=3000000;

// cout<<"This is the value of a: "<<setw(7)<<a<<endl;
// cout<<"This is the value of b: "<<setw(7)<<b<<endl;
// cout<<"This is the value of c: "<<setw(7)<<c<<endl;


// int a = 75, b = 80, c=50, d=100;
// cout<<"The value of: "<<(((a+b)*c)-d)<<endl; 

// Structure ---- Sequence, selection & loop structure.

// int age;

// cout<<"Please insert your age: "<<endl;
// cin>>age;

// if(age<=0){
//     cout<<"You are not even born. "<<endl;
// }

// else if((age>=1) && (age<=18)){
//     cout<<"You are allowed under kids section: "<<endl;
// }

// else{
//     cout<<"You are above 18+, You are allowed to the party: "<<endl;
// }


// switch (age)

// {
//  case 18:
//  cout<<"You are allowed to the party."<<endl;
//  break;

//  case 20:
//  cout<<"You are allowed to the party. "<<endl;
//  break;

//  case 17:
//  cout<<"You are not allowed to the party. "<<endl;
//  break;

//  default:
//  cout<<"You are not allowed to the party. "<<endl;
//  break;

// }

//  cout<<"nothing matches. "<<endl;


// TYPES OF LOOP  ---- FOR LOOP:-


// int i;

//  for(i=0; i<=100; i++){

//   cout<<i<<endl; 
// }


// WHILE LOOP:-

// int i=0;

// while(i<=100){

//     cout<<i<<endl;
//     i++;
// }  

// do while

// int i = 0;

// do{

//     cout<<i<<endl;
//     i++;
// }while(i<=100);


// breaks & continue

//  int i;

//  for(i=0; i<=100; i++){
  
//     if(i==5){
//         break;
//     } cout<<i<<endl; 

//  }


// int i;

//  for(i=0; i<=100; i++){
  
//     if(i==5){
//         continue;
//     } cout<<i<<endl; 

//  }

// int a = 100;
// int *b = &a;

// cout<<"The value of a: "<<a<<endl;
// cout<<"The value of *b: "<<*b<<endl;
// cout<<"The value of b: "<<b<<endl;
// cout<<"The value of &a: "<<&a<<endl;

// Arrays & Pointer arithmetic


// int cars[]={10,20,30,40,50};
// cars[3]=100; 
// int *p=cars;
 
// cout<<"This is the value at 0th Position. "<<cars<<endl;
// cout<<"This is the value at 0th Position. "<<cars[1]<<endl;
// cout<<"This is the value at 0th Position. "<<cars<<endl; 
// cout<<"This is the value at 0th Position. "<<cars<<endl;
// cout<<"This is the value at 0th Position. "<<cars<<endl;

// cout<<"This is the value at *p "<<*p<<endl;
// cout<<"This is the value at *p(+1) "<<*(p+1)<<endl;
// cout<<"This is the value at *p(+2) "<<*(p+2)<<endl;
// cout<<"This is the value at *p(+3) "<<*(p+3)<<endl;
// cout<<"This is the value at *p(+4) "<<*(p+4)<<endl;

//    return 0;
// }

// struct Neon{

//   int size;
//   char grade;
//   float networth;

// };

// union Neon{

//     int money;
//     char car;
//     float property;
// };

// int badadandh(int a, int b);

// void badadandh(); 

// inline int sum(int a, int b){
// int c=a+b;
// return c;}

// void swap(int a, int b){
// int temp = a;
// a = b;
// b = temp;

// }

// void swap(int *a, int *b){
// int temp = *a;
// *a = *b;
// *b = temp;}

// void swap(int &a, int &b){
// int temp = a;
// a = b;
// b = temp;}

// int deposit(int currentmoney, float rate = 1.02){
//     return currentmoney*1.02;
// }

// int factorial(int n){
//   if(n<=1){return 1;}
//   return n*factorial(n-1);
// }

// int fibonacci(int n){
//  if(n<=1){return 1;}
//  return fibonacci(n-1) + fibonacci(n-2); 
// }

// int sum(int a, int b, int c){
// return a+b+c;}

// int sum(int a, int b){
// return a+b;}

// int substraction(int a, int b){
// return a-b;}

// int substraction(int a, int b, int c){
// return a-b-c;}


int main (){
  
//  Neon n1;
//  Neon n2;
//  Neon n3;

//  n1.size = 10;
//  n2.size = 20;
//  n3.size = 30;

//  n1.grade = 'a';
//  n2.grade = 'b';
//  n3.grade = 'c';

//  n1.networth = 70,
//  n2.networth = 80;
//  n3.networth = 90;

//  cout<<n1.size<<endl;
//  cout<<n2.size<<endl;
//  cout<<n3.size<<endl;

//  cout<<n1.grade<<endl;
//  cout<<n2.grade<<endl;
//  cout<<n3.grade<<endl;

//  cout<<n1.networth<<endl;
//  cout<<n2.networth<<endl;
 
//  Neon n1;

//  n1.money = 100000;
//  n1.car = 'A';
//  n1.property = 1000000.01;
 
//  cout<<"This is the value of Purchasing Neon from money: "<<n1.money<<endl;
//  cout<<"This is the value of Purchasing Neon from car: "<<n1.car<<endl;  
//  cout<<"This is the value of Purchasing Neon from property: "<<n1.property<<endl;

// enum cars{Mercedes, Lamborgini, Audi, BMW, Ferrari};

// cout<<"This is the Position of Mercedes: "<<Mercedes<<endl;
// cout<<"This is the Position of Lamborgini: "<<Lamborgini<<endl;
// cout<<"This is the Position of Audi: "<<Audi<<endl;
// cout<<"This is the Position of BMW: "<<BMW<<endl;
// cout<<"This is the Position of Ferrari: "<<Ferrari<<endl;
 

// int a, b;

// cout<<"Please insert the value of badadandh for a: "<<endl;
// cin>>a;
// cout<<"Please insert the value of badadandh for b: "<<endl;
// cin>>b;
// cout<<"This is the output of badadandh for c: "<<badadandh(a, b)<<endl; 
// badadandh(); 

// return 0;

// }

// int badadandh(int a, int b){
//     int c;
//     c=a+b;
//     return c;

// }

// void badadandh(){
//     cout<<"\nThis is the value of badadandh."; 
// }

// call by value & call by reference

// int a=20, b=50;
// cout<<"The sum of a and b is: "<<sum(a,b)<<endl;

// swap(a, b);
// cout<<"The value of a and b is: "<<endl<<a<<endl<<b<<endl;

// swap(&a, &b);
// cout<<"The value of a and b is: "<<endl<<a<<endl<<b<<endl;

// swap(a, b);
// cout<<"The value of a and b is: "<<endl<<a<<endl<<b<<endl;

// int a, b;

// cout<<"The value of a & b is: "<<endl;
// cin>>a>>b;
// cout<<"The sum of c is: "<<sum(a, b)<<endl;


// int currentmoney = 100000;

// cout<<"This is the currentmoney for, "<<currentmoney<<" This is the return for normal people with interest:- "<<deposit(currentmoney)<<endl;
// cout<<"This is the currentmoney for, "<<currentmoney<<" This is the return for VIP people with interest:- "<<deposit(currentmoney*1.10)<<endl;


// int n;

// cout<<"Insert the number for factorial: "<<endl;
// cin>>n;
// // cout<<"This is the factorial of n: "<<factorial(n)<<endl;
// cout<<"This is the fibonacci of n: "<<fibonacci(n)<<endl;

// int a, b, c;


// cout<<"The sum of a+b+c: "<<sum(101,201,301)<<endl;
// cout<<"The sum of a+b: "<<sum(101,201)<<endl;
// cout<<"The sum of a-b-c: "<<substraction(101,201,301)<<endl;
// cout<<"The sum of a-b: "<<substraction(101,201)<<endl; 

return 0;

}