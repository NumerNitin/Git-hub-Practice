// #include <iostream>
// using namespace std;
    
// template <class T>
// class nitin{

// public:

// T a;

// nitin(T data){

// a = data;

// }

// void display();

// };

// template <class T>
// void nitin <T>:: display(){

// cout<<"This is the value of a: "<<a<<endl;
// };

// int main(){

// nitin<int>n1(17);
// n1.display();


//     return 0;
// }


#include <iostream>
using namespace std;
    
void func(int a){
 cout<<"The value of a is a integer: "<<a<<endl;
};

template <class T>
void func(T a){
 cout<<"The value of a: "<<a<<endl;
}; 

int main(){

 func(10);
 func(10.11);
    return 0;
}