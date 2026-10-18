// #include<iostream>
// using namespace std;

// class player{

// public:

// string name = "Hero";
// int Health = 100;
// int Score = 50;

// void Display(){

//     cout<<"The name of player: "<<name<<endl;
//     cout<<"The Health of player: "<<Health<<endl;
//     cout<<"The score of player: "<<Score<<endl;
// } };
// int main(){
    
// player P1;
// P1.Display();

// return 0;
// }

// #include<iostream>
// using namespace std;

// class Enemy{

// public:

// int health = 80;
// int damage = 20;

// void attack(){

//     cout<<"Enemy attacks for 20 damage! "<<damage<<"Current health: "<<health<<endl;
// }
// };

// int main(){

// Enemy enemy1;
// enemy1.attack();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Car{

// public:

// string brand;
// int speed;
// int fuel;

// void drive(){
//     cout<<"Car is driving: showing you the specifications of the cars- "<<endl;
// }

// void cardata(string company, int fast, int power){

//     brand = company;
//     speed = fast;
//     fuel =  power;

// }

// void showinfo(){

//     cout<<"The name of Car brand: "<<brand<<endl;
//     cout<<"Current speed: "<<speed<<endl;
//     cout<<"remaning fuel: "<<fuel<<" litre "<<endl;
// }

// };

// int main(){

// Car car1,car2;
// car1.drive();
// car1.cardata("mercedes", 150, 3);
// car1.showinfo();

// cout<<endl;

// car2.drive();
// car2.cardata("Ferrari", 200, 4);
// car2.showinfo();



// return 0;

// }

// #include<iostream>
// using namespace std;

// class Inventory{

// public:

// int coins;
// int healthpotions;
// int weapons;

// void addCoins(int amount){

//     coins = coins + amount;
// }

// void showInventory(){

//     cout<<"The amount of coins i have: "<<coins<<endl;
//     cout<<"The healthpotions i have: "<<healthpotions<<endl;
//     cout<<"The weapons i have: "<<weapons<<endl;
    
// }
// };
// int main(){

// Inventory playerInventory;

// playerInventory.coins=100;
// playerInventory.healthpotions=3;
// playerInventory.weapons=2;

// playerInventory.addCoins(50);

// playerInventory.showInventory();

//     return 0;
// }