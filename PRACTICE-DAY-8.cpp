#include<iostream>
using namespace std;

int playerHealth = 100; //global variable

void Attack(int damage){

 cout<<"Total Damage by enemy: "<<damage<<endl;//local variable.
}

int main(){

int playerHealth = 50;

cout<<"Playerhealth: "<<::playerHealth<<endl; //this will call global variable.
cout<<"Playerhealth: "<<playerHealth<<endl; //this will call local variable.
Attack(10); // this is also local variable as it is called inside a function.

int health = 100;
cout<<"health: "<<health<<endl;

if(health>0){

    int damage = 20;
    cout<<"Damage: "<<damage<<endl; //block scope variable if it is defined inside a "if" block it can't outside that block of code.
    cout<<"health: "<<health<<endl;
}
 cout<<"health: "<<health<<endl;
//  cout<<"Damage: "<<damage<<endl;

    return 0;
}