#include<iostream>
using namespace std;

// void Attack(){

//     cout<<"Player attacks: "<<endl;
// };

// void Attack(int damage){

//   cout<<"Player deals damage: "<<damage<<endl;
// };

// void Attack(int damage, int critical){

//     cout<<"Player deals critical damage: "<<damage+critical<<endl;
// };

// void Heal(){

//     cout<<"Player healed: "<<endl;
// };

// void Heal(int amount){

//   cout<<"Player healed by: "<<amount<<endl;
// };

// void Heal(int amount, int bonus){

//     cout<<"Player healed by: "<<amount+bonus<<endl;
// };

// void SpawnEnemy(){

//     cout<<"Enemey has spawned: "<<endl;
// };

// void SpawnEnemy(string enemyName){

//   cout<<"This is then name of enemy approaching towards you: "<<enemyName<<endl;
// };

// void SpawnEnemy(string enemyName, int health){

//     cout<<"Currently This is the status of hp of the enemy: "<<enemyName<<" & "<<health<<endl;
// };

// void CalculateDamage(int damage){

//     cout<<"Enemey damage: "<<damage<<endl;
// };

// int CalculateDamage(int damage, int armor){

//    int final_damage = damage - armor;
//    return final_damage;
// };

// int CalculateDamage(int damage, int armor, int critical){
    
//     int final_damage = damage + critical - armor;
//     return final_damage;
// };




int main(){

int damage,armor,critical;

cout<<"Please enter the value of damage: "<<endl;
cin>>damage;
cout<<"Please enter the value of armor: "<<endl;
cin>>armor;
cout<<"Please enter the value of critical: "<<endl;
cin>>critical;

CalculateDamage(damage);
cout<<"This is the value of final damage deal after to the armor: "<<CalculateDamage(damage,armor)<<endl;
cout<<"This is the value of final damage deal after checking the criticality of the armor: "<<CalculateDamage(damage,armor,critical)<<endl;

    return 0;
}