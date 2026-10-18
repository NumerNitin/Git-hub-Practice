#include <iostream>
using namespace std;
    
// syntax of function prototypes:-
// type function name(arguments);
int sum(int a, int b);// This is correct & acceptable.
// int sum(int a, b); This is not correct & acceptable.
// int sum(int, int); This is correct & acceptable.
void g();
void g(void); //both are correct.


int main(){
    int num1, num2; // actual parameter
    cout<<"value of a. "<<endl;
    cin>>num1;
    cout<<"value of b. "<<endl;
    cin>>num2;
    cout<<"both a & b value is. "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){ // formal parameter  
int c=a+b;
return c;                           
}

void g(){
cout<<"\nmy name is V.Nitin. "; //formal parameter
}