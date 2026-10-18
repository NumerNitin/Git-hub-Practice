#include<iostream>

using namespace std;

int main()
{
//  cout<<"This is the chapter-9. ";
    int age;

//Types of c++ structures:-

// 1.Sequence Structure:- which we saw in the previous chapter.
// 2.Selection Structure:- which we will see in this chapter.

// We have 2 type of selection structure:-
// 1. "if" statement, "else" statement, "else if" statement. below is the example of "if" statement, "else" statement, "else if" statement.

   cout<<"Age Restrictions for Party. "<<endl;
   cin>>age;

// if(age<=0){
//     cout<<"Your are not born yet. "<<endl;
// }

// else if((age>=1) && (age<=17)){
//   cout<<"You are a kid. "<<endl;
// }    

// else if (age==18) {
//     cout<<"You will get a kid entry pass. "<<endl;
// }

// else {      
//     cout<<"You are allowed to the Party. "<<endl;
// }   

// 2. "switch" statement:- which we will see in this chapter. below is the example of "switch" statement.

   switch (age)
   {
    case 18:
    cout<<"You are 18 years old. "<<endl;
    break;

    case 22:
    cout<<"You are 22 years old. "<<endl;
    break;

    case 2:
    cout<<"You are 2 years old. "<<endl;
    break;

    default:
    cout<<"You are not in this list. "<<endl;
    break;
   }

   cout<<"This is the end of the chapter-9. "<<endl;
   
 return 0;


}
