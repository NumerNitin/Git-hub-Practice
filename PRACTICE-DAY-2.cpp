// #include <iostream>
// using namespace std;
    
//  int main(){


// //  if(a==0){
// //     cout<<"zero: "<<endl;
// //  }

// //  else if(a<0){
// //     cout<<"negative: "<<endl;
// //  }

// //  else{
// //     cout<<"Positive: "<<endl;
// //  }

// //  if((a>=90) && (a<=100)){
// //     cout<<"A Grade: "<<endl;
// //  }

// //  else if((a>=80) && (a<=89)){
// //     cout<<"B Grade: "<<endl;
// //  }

// //  else if((a>=70) && (a<=79)){
// //     cout<<"C Grade: "<<endl;
// //  }

// //  else if((a>=60) && (a<=69)){
// //      cout<<"D Grade: "<<endl;
// //  }

// //  else {
// //      cout<<"F Grade: "<<endl;
// //  }

// //  int a,b;
// //  char op = ('+','-','*','/');
// //  cout<<"Please enter the value of a & b: "<<endl;
// //  cin>>a>>b;
// //  cout<<"Please enter operator: "<<endl;
// //  cin>>op;

// //  if(op == '+'){
// //     cout<<"addition: "<<a+b<<endl;
// //  }

// //  else if(op =='-'){
// //     cout<<"substraction: "<<a-b<<endl;
// //  }

// //  else if(op == '*'){
// //     cout<<"multiplication: "<<a*b<<endl;
// //  }

// //  else if(op == '/'){
// //     cout<<"division: "<<a/b<<endl;
// //  }

// //  else{
// //     cout<<"Invalid neon error: "<<endl;
// //  }

// // float Amount;
// // cout<<"Please tell us the total bill amount: "<<endl;
// // cin>>Amount;

// // if(Amount>=5000){
// //     cout<<" 20% Discount on total amount: "<<(Amount- (Amount*20/100))<<endl;
// // }

// // else if(Amount>=3000){
// //     cout<<" 10% Discount on total amount: "<<(Amount - (Amount*10/100))<<endl;
// // }

// // else if(Amount>=1000){
// //     cout<<" 5% Discount on total amount: "<<(Amount - (Amount*5/100))<<endl;
// // }

// // else{
// //     cout<<"No Discount on bill below 1000 "<<endl;
// // }



//     return 0;
// }

#include <iostream>
using namespace std;

int main(){

    // int Days;
    // cout<<"Please enter the day of a week: "<<endl;
    // cin>>Days;

//  switch(Days)
//  {
//   case 1:
//   cout<<"Monday: "<<endl;
//   break;
 
 
//   case 2:
//   cout<<"Tuesday: "<<endl;
//   break;
 
 
//   case 3:
//   cout<<"Wednesday: "<<endl;
//   break;
 
 
//   case 4:
//   cout<<"Thursday: "<<endl;
//   break;
 
 
//   case 5:
//   cout<<"Friday: "<<endl;
//   break;
 
 
//   case 6:
//   cout<<"Saturday: "<<endl;
//   break;
 
 
//   case 7:
//   cout<<"Sunday: "<<endl;
//   break;


//   default:
//   cout<<"Invalid days, Doesn't exist: "<<endl;
//   break;
//  }

int a, b;
cout<<"Please enter the value of a & b: "<<endl;
cin>>a>>b;
char Op =('+','-','*','/');
cout<<"Please enter the operator: "<<endl;
cin>>Op;

switch (Op)
{
    case '+':
    cout<<"Sum of the a & b: "<<a+b<<endl;
    break;

    case '-':
    cout<<"Subtraction of the a & b: "<<a-b<<endl;
    break;

    case '*':
    cout<<"Product of the a & b: "<<a*b<<endl;
    break;

    case '/':
    cout<<"Division of the a & b: "<<a/b<<endl;
    break;

    default:
    cout<<"This operator doesn't exist: "<<endl;
    break;

}

    return 0;
}