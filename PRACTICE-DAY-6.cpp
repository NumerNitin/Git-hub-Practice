#include<iostream>
using namespace std;

// int add(int a, int b){

// int c = a + b;
// return c;
// }

// void Attack(int damage){

// cout<<"Player attacked: "<<endl;
// cout<<"Damage deal: "<<damage<<endl;
// }

// void Attack(int damage = 10){

//     cout<<"damage value: "<<damage<<endl;
// }

// void Heal(int health){

// cout<<"Healed: "<<health<<endl;}

void PlayerStats(string name, int health = 100){

cout<<"Name of the Player: "<<name<<","<<"Player HP: "<<health<<endl;}

int main(){

 string name; int health;

//  Attack();
//  Attack(100);
//  Attack(200);

 cout<<"Please enter a value: "<<endl;
 cin>>name>>health;

 PlayerStats(name, health);

 return 0;
}