#include <iostream>
using namespace std;
    
// inline int add(int a, int b){ 
// return a+b;

// }


float money(int currentmoney, float rate = 1.08) //this is the default rate but down at the time of call i can change the default.
{return currentmoney * rate;
}

   int main(){

    // int a, b;
    // cout<<"The sum of a & b: "<<endl;
    // cin>>a>>b;
    // cout<<"The sum of both the variables is: "<<add(a, b)<<endl;

    int depositmoney = 100000; 
    cout<<"For normal People the."<<depositmoney<< "is fixed and the rate is also fixed. "<<money(depositmoney)<<" received after 1 year. "<<endl;
    cout<<"For VIP People the."<<depositmoney<< "is fixed and the rate is also fixed. "<<money(depositmoney, 1.10)<<" received after 1 year. "<<endl; //default is 1.08 & if we want we change, if nothing is taken the default take up in the rate.

    return 0;
}