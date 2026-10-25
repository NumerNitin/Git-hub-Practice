//50 questions Practice
// 1st question:-

// #include<iostream>
// using namespace std;

// class Player{ 

// public:

// int health = 100;
// int score = 0;

// void showdata(){
//     cout<<"Health: "<<health<<endl;
//     cout<<"score: "<<score<<endl;
// }
// };

// int main(){

//  Player P1;
//  P1.health;
//  P1.score;
//  P1.showdata();   
//     return 0;
// }

// 2nd question:

// #include<iostream>
// using namespace std;

// class Enemy{

// public:

// int damage = 15;

// void showdamage(){
//     cout<<"damage: "<<damage<<endl;
// }

// };
// int main(){

// Enemy E1;
// E1.damage;
// E1.showdamage();

//     return 0;
// }

// 3rd question:

// #include<iostream>
// using namespace std;

// class Car{ 

// public:

// int speed = 0;

// void increasespeed(int spd){

//     speed = speed + spd;
// }

// void showspeed(){

//     cout<<"speed: "<<speed<<endl;
// }

// };
// int main(){

// Car C1, C2;

// C1.increasespeed(50);
// C2.increasespeed(0);
// C1.showspeed();
// C2.showspeed();

//     return 0;
// }

// 5th question:

// #include <iostream>
// using namespace std;
    
// class Player{

//  int health = 100;

//  public:

//  void gethealth(){

//     cout<<"health: "<<health<<endl;
//  }


// };
// int main(){

// Player P1;
// P1.gethealth();

//     return 0;
// }

// 4th question:

// #include <iostream>
// using namespace std;
    
// class Player{

// int Points = 0;

// public:

// void addScore(int Point){

//     Points = Points + Point;
// }

// void displayscore(){

//     cout<<"Points status: "<<Points<<endl;
// }

// };

// int main(){

// Player P1;
// P1.addScore(10);
// P1.displayscore();
// P1.addScore(10);
// P1.displayscore();
// P1.addScore(10);
// P1.displayscore();
//     return 0;
// }

// 6th question

// #include <iostream>
// using namespace std;
    
// class Weapon{

// public:

// int damage = 50;

// void showdamage();

// };

// void Weapon :: showdamage(){

//     cout<<"damage: "<<damage<<endl;
// }

// int main(){

// Weapon W1;
// W1.showdamage();

//     return 0;
// }

// 7th question:

// #include <iostream>
// using namespace std;
   
// class Car{

// int current_speed = 0;
// int max_speed = 150;

// public:

// void accelerate(int amount){

// if(amount < 0){
//     cout<<"Speed can't be negative: "<<endl;
// }

// else if(current_speed + amount > max_speed){
//     current_speed = max_speed;
// }

// else{
//   current_speed = current_speed + amount;
// }}

// void brake(int amount){
    
//     if(amount < 0){
//         cout<<"brake can't take speed to negative: "<<endl;
//     }

//     else if(current_speed < amount){
//         current_speed = 0;

//     }

//     else{
//         current_speed = current_speed - amount;
//     }
// }

// void showspeed(){

//  cout<<"Current speed: "<<current_speed<<endl;
// }
// };
// int main(){

//     Car C1;
//     C1.accelerate(100);
//     C1.accelerate(80);
//     C1.brake(30);
//     C1.showspeed();

//     return 0;
// }

// 8th question:

// #include <iostream>
// using namespace std;
    
// class Player{

// int health = 100;

// public:

// void Takedamage(int damage){
//     health = health - damage;
// }

// void gethealth(){

//     cout<<"Current health: "<<health<<endl;
// }

// };

// int main(){

// Player P1;
// P1.Takedamage(37);
// P1.gethealth();


//     return 0;
// }

// 9th question:

// #include <iostream>
// using namespace std;
 
// class Score_validation{

// int score = 0;

// public:

// void setscore(int value){
    
//     if(value < 0){
//         cout<<"score can't be zero: "<<endl;
//     }
    
//     else{
//         score = score + value;
//         cout<<score<<endl;
//     }

// }

// };
// int main(){

// Score_validation SV;
// SV.setscore(50);
// SV.setscore(-10);
// SV.setscore(50);


//     return 0;
// }

// 10th question:

// #include <iostream>
// using namespace std;
   
// class Weapon{

// int ammo = 30;

// public:

// void useammo(int use){

//     if(use > ammo){
//          cout<<"No ammo: "<<endl;
//     }

//     else if(ammo >= 0){
//        ammo = ammo - use;
//        cout<<"Guns current bullet left: "<<ammo<<endl;
//     }

// }

// };

// int main(){

// Weapon W1;
// // W1.useammo(31);
// // W1.useammo(30);
// // W1.useammo(29);
// W1.useammo(20);
//     return 0;
// }

// 11th question:

// #include <iostream>
// using namespace std;

// class Player{

// int health = 100;

// public:

// string name = "nitin";

// };

// int main(){

// Player P1;
// P1.health;
// P1.name;
// cout<<"name:"<<P1.name<<endl;
//     return 0;
// }

// 12th question:

// #include <iostream>
// using namespace std;
   
// class character{

//     protected:

//     int health = 100;

// };

// class Player : public character{

//     public:
//     void gethealth(){
//         cout<<"current health: "<<health<<endl;
//     }
// };

// int main(){

// Player P1;
// P1.gethealth();

//     return 0;
// }

// 13th question:

// #include <iostream>
// using namespace std;
   
// class Player{

// public:

// int health;

// Player(){
// health = 100;
// cout<<"Player created: "<<health<<endl;
// }

// };

// int main(){

// Player P1;
//     return 0;
// }

// 14th question:

// #include <iostream>
// using namespace std;
 
// class Player{

//     public:

// Player(int health){
//     cout<<"Player created "<<health<<endl;
// }
// };

// int main(){

// Player P1(75);


//     return 0;
// }

// 15th question:

// #include <iostream>
// using namespace std;
   
// class Weapon{

// public:

// Weapon(int damage){
//     cout<<"damage: "<<damage<<endl;
// }

// Weapon(int damage, int ammo){
//     cout<<"damage & ammo: "<<damage<<" & "<<ammo<<endl;
// }

// };

// int main(){

// Weapon W1(50);
// Weapon W2(50, 30);

//     return 0;
// }

// 16th question:

// #include <iostream>
// using namespace std;
   
// class Player{

// int health;
// int score;

// public:

// Player(int h, int s){

//     health = h;
//     score = s;
// }

// void display(){

//     cout<<"This is the value of health: "<<health<<endl;
//     cout<<"This is the value of score: "<<score<<endl;
// }

// };

// int main(){
// Player P1(100, 150);
// P1.display();

//     return 0;
// }

// 17th question:

// #include <iostream>
// using namespace std;
   
// class Player{

// public:

// Player(string name){
//     cout<<"Welcome: "<<name<<endl;
// }

// };


// int main(){

// Player P1("nitin");
// Player P2("neon");
// Player P3("rawat");

//     return 0;
// }

// 18th question

// #include <iostream>
// using namespace std;
   
// class Player{

// public:

// Player(int health = 100){
//     cout<<"current health: "<<health<<endl;
// }
// };
// int main(){

// Player P1;
// Player P2(60);

//     return 0;
// }

// 19th question:

// #include <iostream>
// using namespace std;
   
// class Player{

// int health;
// int score;

// public:

// Player(int health = 100, int score = 0) : health(), score(){

//     cout<<"health: "<<health<<endl;
//     cout<<"score: "<<score<<endl;
// }

// };

// int main(){

// Player P1;

//     return 0;
// }

// 20th question:

// #include <iostream>
// using namespace std;
    
// class Weapon{

// int damage;
// int ammo;

// public:

// Weapon(int d, int a) : damage(d), ammo(a){

//     cout<<"damage: "<<damage<<endl;
//     cout<<"ammo: "<<ammo<<endl;
// }
// };
// int main(){

// Weapon W1(45, 31);    

//     return 0;
// }

// question 21st

// #include <iostream>
// using namespace std;

// class Player{

// int health = 100;

// public:

// Player(int new_health){

//     if(new_health <= 100){
//      cout<<"new_health: "<<new_health<<endl;
//     }

//     else if(new_health > health){
//         cout<<"old_health: "<<health<<endl;
//     }
// }
// };
// int main(){

// Player P1(98);


//     return 0;
// }

// question 22nd

// #include <iostream>
// using namespace std;
    
// class Player{

// public:

// Player(){
//     cout<<"Player Created: "<<endl;
// }

// ~Player(){
//     cout<<"Player Destroyed: "<<endl;
// }
// };

// int main(){

// Player P1;

//     return 0;
// }

// 23rd question:

// #include <iostream>
// using namespace std;
   
// class Enemy{

// public:

// Enemy(){
//     cout<<"object is created: "<<endl;
// }

// ~Enemy(){
//     cout<<"Object is destroyed: "<<endl;
// }
// };

// int main(){

// Enemy E1;{
// cout<<"enter a enemies body: "<<endl;
// Enemy E2;
// cout<<"going outside the enemies body: "<<endl;
// }
// cout<<"The end: "<<endl;

//     return 0;
// }

// 24th question

// #include <iostream>
// using namespace std;
    
// class Player{

// public:

// Player(){
//     cout<<"object: "<<endl;
// }

// ~Player(){
//     cout<<"Object is destroyed: "<<endl;
// }

// };

// int main(){

// cout<<"Entering inside the block: "<<endl;
// {
// Player P1;
// cout<<"Object is initialized: "<<endl;

// }

// cout<<"leaving the block: "<<endl;

//     return 0;
// }

// skipped 25th question

// 26th question:

// #include <iostream>
// using namespace std;

// class Character{

// public:

// int health = 100;

// void Takedamage(int damage);
// };

// class derived : public Character{

// public:

// void Takedamage(int damage)
// {
//     health = health - damage;
//     cout<<"health: "<<health<<endl;
// }

// };

// int main(){

// derived D1;
// D1.Takedamage(50);    

//     return 0;
// }

// 27th question:

// #include <iostream>
// using namespace std;
 
// class Enemy{

// public:

// int health = 100;
// int damage = 15;

// };

// class boss : public Enemy{

// public:

// int specialdamage = 50;

// };

// int main(){

// boss b1;
// cout<<"health: "<<b1.health<<endl;
// cout<<"damage: "<<b1.damage<<endl;
// cout<<"specialdamage: "<<b1.specialdamage<<endl;

//     return 0;
// }

// 28th question:

// #include <iostream>
// using namespace std;
   
// class Vehicle{

// public:

// int speed = 0;

// void Showspeed(int speed);

// };

// class Car : public Vehicle{

// public:

// void Showspeed(int speed){
//     cout<<"Current speed: "<<speed<<endl;
// }

// };
// int main(){

// Car C1;
// C1.Showspeed(199);
//     return 0;
// }

// 29th question:

// #include <iostream>
// using namespace std;
  
// class Character{

// protected:
// int health = 100;

// public:
// string name = "Goblin";

// };

// class Player : protected Character{

// public:
// void showstatus(){
// cout<<"health: "<<health<<endl;
// cout<<"name: "<<name<<endl; 
// }

// };

// int main(){

// Player P1;
// P1.showstatus();
// P1.name;
//     return 0;
// }

// 30th question:

// #include <iostream>
// using namespace std;
   
// class Weapon{

// public:

// void showdamage(){
// cout<<"Weapon damage: 50 "<<endl;
// }

// };

// class MagicWeapon : private Weapon{
// public:
// void useweapon(){
//     showdamage();
// }

// };

// int main(){

// MagicWeapon M1;
// // M1.showdamage();
// M1.useweapon();
//     return 0;
// }

// 31st question:

// #include <iostream>
// using namespace std;
    
// class Character{

// int health = 100;

// public:

// void displayhealth(){
//     cout<<"health: "<<health<<endl;
// }
// void Takedamage(int damage){
//     health = health - damage;
//     cout<<"damage: "<<damage<<endl;
// }

// void updatedhealth(){
// cout<<"Health after damage: "<<health<<endl;
// }

// };

// class Player : public Character{

// }; 

// int main(){

// Player P1;
// P1.health;
// P1.displayhealth();
// P1.Takedamage(25);
// P1.updatedhealth();

//     return 0;
// }

// 32st question:
// #include <iostream>
// using namespace std;
    
// class Character{

// protected:

// int health = 100;
// };

// class Player : protected Character{

// public:
// void Takedamage(int damage){

//     health = health - damage;
//     cout<<"health: "<<health<<endl;
// }
// };

// class Boss : protected Character{
// public:
// void Takedamage(int damage){

//     health = health - damage;
//     cout<<"health: "<<health<<endl;
// }
// };
// int main(){

// Player P1;
// P1.Takedamage(20);

// Boss B1;
// B1.Takedamage(40);

//     return 0;

// 33rd question:

// #include <iostream>
// using namespace std;

// class Character{
// public:

// void showcharacter(){
//     cout<<"I am a character: "<<endl;
// }
// };

// class Player : public Character{
// public:
// void showplayer(){
//     cout<<"I am a player: "<<endl;
// }
// };

// class Warrior : public Player{
// public:
// void showwarrior(){
//     cout<<"I am a Warrior: "<<endl;
// }
// };

// int main(){

// Warrior W1;
// W1.showcharacter();
// W1.showplayer();
// W1.showwarrior();
//     return 0;
// }

// 35th question:

// #include <iostream>
// using namespace std;

// class Character {
// private:
//     int health = 100;

//     public:
//     void ShowHealth() {
//         cout << health << endl;
//     }
// };

// class Player : public Character {

// };

// int main() {
//     Player p;
//     p.ShowHealth();
// }

// 36th question:

// #include <iostream>
// using namespace std;
   
// class Character{

// public:

// Character(){
//     cout<<"Character class constructor: "<<endl;
// }

// };

// class Player : public Character{

// public:
//     Player(){
//     cout<<"Player class constructor: "<<endl;
// }

// };

// int main(){

// Player P1;

//     return 0;
// }

// 37th question

// #include <iostream>
// using namespace std;
   
// class Character{

// public:

// Character(){
//     cout<<"Character class constructor: "<<endl;
// }

// ~Character(){
//     cout<<"Character class destructor: "<<endl;
// }

// };

// class Player : public Character{

// public:
//     Player(){
//     cout<<"Player class constructor: "<<endl;
// }

// ~Player(){
//     cout<<"Player class destructor: "<<endl;
// }

// };

// int main(){

// Player P1;

//     return 0;
// }

// 38th question: skipped as it already practiced in 36th question

// 39th question:

// #include <iostream>
// using namespace std;
   
// class Character{

// public:

// int health;

// Character(int h){
//     health = h;
//     cout<<"Health: "<<health<<endl;
// }};

// class Player : public Character{

// public:

// Player(int h) : Character(h){};
// };

// int main(){

// Player P1(100); 
// Player P2(200);

//     return 0;
// }

