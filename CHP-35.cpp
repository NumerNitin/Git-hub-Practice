#include <iostream>
using namespace std;
  
class num{

public:

num(){

    cout<<"This is the creation of constructor: "<<endl;
}

~num(){

    cout<<"This is the creation of destructor: "<<endl;
}

};

 int main(){

 cout<<"entering the main function: "<<endl;   
 num num1;{
    
    cout<<"entering the block inside the main function: "<<endl;
    num num2;
    num num3;
    cout<<"exiting the block: "<<endl; 
}

cout<<"exiting the main function: "<<endl;  
    return 0;
}