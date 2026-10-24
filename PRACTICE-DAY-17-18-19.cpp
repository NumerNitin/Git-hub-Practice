// #include<iostream>
// using namespace std;

// class player{

// public:

// int health = 100;
// int score = 0;

// };

// int main(){

// player p1;
// p1.health;
// p1.score;

// cout<<"health: "<<p1.health<<endl;
// cout<<"score: "<<p1.score<<endl;



//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Player{

// public:

// int health = 100;
// int score = 0;
// int level = 0;

// int missionComplete(int points){

//     score = score + points;
//     level = score/100;
// }
// };

// int main(){

// Player P1;
// P1.missionComplete(80);
// cout<<P1.score<<endl;
// cout<<P1.level<<endl;

// P1.missionComplete(19);
// cout<<P1.score<<endl;
// cout<<P1.level<<endl;

// P1.missionComplete(1);
// cout<<P1.score<<endl;
// cout<<P1.level<<endl;

// P1.missionComplete(99);
// cout<<P1.score<<endl;
// cout<<P1.level<<endl;


//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Enemy{

// public:

// int health;
// int damage = 15;

// int attackPlayer(int playerhealth){

//     health = playerhealth - damage;
//     return health;
// }
// };

// int main(){

// Enemy E1;
// E1.attackPlayer(80);

// cout<<"Player Health After Attack: "<<E1.health<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Weapon{

// public:

// int damage = 20;
// int level = 1;

// int upgrade(int Weapondamage){

// damage = Weapondamage + damage;

// if(Weapondamage>=10){
//     level++;
// }}
// };

// int main(){
// Weapon W1;
// W1.upgrade(10);

// cout<<W1.damage<<endl;
// cout<<W1.level<<endl;

// W1.upgrade(10);

// cout<<W1.damage<<endl;
// cout<<W1.level<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Car{

// public:

// int speed = 0;
// int fuel = 100;

// void Accelerate(int increase){

//     speed = speed + increase;
//     fuel =  fuel - 10;
// }

// void showStatus(){

//     cout<<"Current speed: "<<speed<<endl;
//     cout<<"current fuel status: "<<fuel<<endl;
// }
// };

// int main(){

// Car C1;
// cout<<"Car shifted to 2th gear: "<<endl;
// C1.Accelerate(40);
// C1.showStatus();
// cout<<endl;
// cout<<"Car shifted to 4th gear: "<<endl;

// C1.Accelerate(80);
// C1.showStatus();
// cout<<endl;
// cout<<"Car shifted to 6th gear: "<<endl;

// C1.Accelerate(60);
// C1.showStatus();

// }

// #include<iostream>
// using namespace std;

// class Inventory{

// public:

// int item = 0;
// int capacity = 10;

// void Additems(int amount){

//  item = item + amount;

// if(item>capacity){
//     cout<<"out of space: can't pick: "<<endl;
// }}};

// int main(){

//  Inventory I1;
//  I1.Additems(3);
//  cout<<"items picked & capacity: "<<I1.item<<" & "<<I1.capacity<<endl;
//  cout<<endl;

//  I1.Additems(5);
//  cout<<"items picked & capacity: "<<I1.item<<" & "<<I1.capacity<<endl;
//  cout<<endl;
 
//  I1.Additems(4);
//  cout<<"items picked & capacity: "<<I1.item<<" & "<<I1.capacity<<endl;



//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Player{

// int health = 100;

// public:

// void Takedamage(int damage){
//     health = health - damage;

// }
// void Heal(int healamount){

//     health = health + healamount;
// }
// void Gethealth(){

//     cout<<"Currently health of player after damage & healing: "<<health<<endl;
// }
// };

// int main(){

// Player P1;
// P1.Takedamage(40);
// P1.Heal(20);
// P1.Gethealth();    

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Gamewallet{

// int coins = 100;

// public:

// void Addcoins(int amount){

// coins = coins + amount;
// }

// void Spendcoins(int amount){

//     coins = coins - amount;

//     if(coins<0){
//        cout<<"You can't spent, You don't enough creds: "<<endl;}

// }
// void Getcoins(){

//     cout<<"Currently I'm having this much of coins: "<<coins<<endl;
// }

// };

// int main(){

// Gamewallet G1;

// G1.Addcoins(50);
// G1.Spendcoins(80);
// G1.Getcoins();

// cout<<endl;

// G1.Addcoins(10);
// G1.Spendcoins(120);
// G1.Getcoins();


//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Weapon{

// int ammo = 30;
// int maxAmmo = 30;

// public:

// void fire(int fire){

// if(ammo>0){
// ammo = ammo - fire;
// }
// }

// void Reload(int rammo){
// ammo = ammo + rammo;
// }

// void GetAmmo(){
// cout<<"Current Ammo: "<<ammo<<endl;
// }
// };

// int main(){

// Weapon W1;
// W1.fire(5);
// W1.GetAmmo();
// W1.Reload(5);
// W1.GetAmmo();


//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Player{

// int score = 0;

// public:

// void Addscore(int points){
//     score = score + points;
// }

// void Setscore(int newscore){
//    score =  newscore;
// }

// int Getscore(){
//     cout<<"This is the value of setscore: "<<score<<endl;
//     return score;
// }
// };
// int main(){

// Player P1;
// P1.Addscore(50);
// P1.Addscore(30);
// P1.Setscore(200);
// P1.Getscore();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Character{

// protected:

// int health = 100;

// public:

// void TakeDamage(int damage){
//     health = health - damage;
// }
// };

// class Player : public Character{

// int score = 0;

// public:

// void Addscore(int points){

// score = score + points;

// }

// void showstatus(){

// cout<<"health status: "<<health<<endl;
// cout<<"score status: "<<score<<endl;
// }

// };

// int main(){

// Player P1;
// P1.TakeDamage(25);
// P1.Addscore(50);
// P1.showstatus();


//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Player{

// int health = 100;

// public:

// void attack(int damage);
// void takeDamage(int damage);
// void showhealth();

// };

// void Player :: attack(int damage){

//  health = health - damage;
// }

// void Player :: takeDamage(int damage){
// health = health - damage;}


// void Player :: showhealth(){

//     cout<<"Current health status: "<<health<<endl;
// }

// int main(){

// Player P1;

// P1.attack(10);
// P1.takeDamage(20);
// P1.showhealth();
// P1.attack(10);
// P1.takeDamage(20);
// P1.showhealth();


//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Weapon{

// int ammo = 10;

// public:

// void fire(int bullets);
// void reload(int bullets);
// void showammo();
    
// };

// void Weapon :: fire(int bullets){

//     ammo = ammo - bullets;
// }

// void Weapon :: reload(int bullets){

//     ammo = ammo + bullets;
// }

// void Weapon :: showammo(){

//     cout<<"Current Ammo of the gun: "<<ammo<<endl;
// }

// int main(){

//  Weapon Desert;
//  Desert.fire(3);
//  Desert.reload(5);
//  Desert.showammo();

//  Desert.fire(5);
//  Desert.reload(7);
//  Desert.showammo();

//  Desert.fire(6);
//  Desert.reload(4);
//  Desert.showammo();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Car{

// int speed = 0;
// int maxSpeed = 150;

// public:

// void Accelerate(int amount);
// void brake(int amount);
// void showspeed();
// };

// void Car :: Accelerate(int amount){
    
//     speed = speed + amount;

//     if(speed<maxSpeed){
//      cout<<speed<<endl;
//     }

//     else if(speed>maxSpeed){
//         cout<<"Can't cross 150 kmph speed: "<<endl;
//     }
    

// }

// void Car :: brake(int amount){

//     speed = speed - amount;

//     if(speed>0){
//      cout<<speed<<endl;
//     }

//     else if(speed<0){
//         cout<<"speed can't be negative: "<<endl;
//     }

// }

// void Car :: showspeed(){

//     cout<<"This is the current speed of the your Car: "<<speed<<endl;
// }

// int main(){

//  Car Tiago;
//  Tiago.Accelerate(100);
//  Tiago.Accelerate(80);
//  Tiago.brake(30);
//  Tiago.showspeed();




//     return 0;
// }