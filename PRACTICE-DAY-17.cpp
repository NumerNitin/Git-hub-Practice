// #include<iostream>
// using namespace std;

// class Enemy{

// string name;
// int health;
// int attackPower;

// public:
// void setdata(string n, int h, int ap){

//     name=n;
//     health=h;
//     attackPower=ap;
// }

// void attack(){
//     cout<<name<<" Attacks! "<<endl;
// }

// void TakeDamage(int damage){

//     health = health - damage;

//       if (health < 0)
//       {
//         health = 0;
//       }

//     cout<<health<<endl;
    
// }

// int getHealth(){
//     return health;
// }

// };
// int main(){

//     Enemy E1;
//     E1.setdata("Goblin",100,20);
//     E1.attack();
//     E1.TakeDamage(30);
//     cout<<"The current health status of enemy: "<<E1.getHealth()<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Enemy
// {
// private:
//     string name;
//     int health;
//     int attackPower;

// public:

//     void setData(string n, int h, int ap)
//     {
//         name = n;
//         health = h;
//         attackPower = ap;
//     }

//     void Attack()
//     {
//         cout << name << " Attacks!" << endl;
//     }

//     void TakeDamage(int damage)
//     {
//         health = health - damage;
//         cout << name << " takes " << damage << " damage." << endl;
//     }

//     int GetHealth()
//     {
//         return health;
//     }
// };

// int main()
// {
//     Enemy E1;

//     E1.setData("Goblin", 100, 20);

//     E1.Attack();

//     E1.TakeDamage(30);

//     cout << "Current Health: " << E1.GetHealth() << endl;

//     return 0;}

// #include<iostream>
// using namespace std;

// class Weapon{

// private:

// string weaponName;
// int damage;
// int ammo;

// public:

// void setdata(string wn, int d, int am){

//     weaponName = wn;
//     damage = d;
//     ammo = am;
// }

// void fire(int shoot){

//     cout<<" Currently you've: "<<ammo<<endl;
//     cout<<" shoot: "<<shoot<<" bullets "<<endl;
//     ammo = ammo - shoot;

//     if(ammo==0){
//         cout<<"Out of Ammo: "<<endl;
//     }
    
// }

// void rel(int reload){

//     ammo = ammo + reload;
//     cout<<"The amount of bullet reloaded: "<<ammo<<endl;
// }

// int Getammo(){

//     return ammo;
// }

// };

// int main(){

// Weapon Pistol;
// Pistol.setdata("eagle",25,3);
// Pistol.fire(3);
// Pistol.rel(10);
// cout<<Pistol.Getammo()<<endl;


//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Enemy{

// public:

// string name;
// int health;
// int damage;

// void setdata(string n, int h, int d){

//     name = n;
//     health = h;
//     damage = d;
// }

// void attack(){

//     cout<<name<<" Attacks! "<<endl;
// }

// void displayEnemy(){

// cout<<"Enemy: "<<name<<endl;
// cout<<"health: "<<health<<endl;
// cout<<"damage: "<<damage<<endl;
// }
// };

// int main(){

// Enemy E1;
// E1.setdata("Goblin",100,20);
// E1.attack();
// E1.displayEnemy();


//     return 0;
// }

#include<iostream>
using namespace std;

class Inventory{

    int coins;
    int healthPotions;
    int ammo;

    public:

    void addCoins()
    {
     cout<<"Coins: "<<coins<<endl;

    }
 
    void addPotions(){

       cout<<"Potions: "<<healthPotions<<endl; 
    }

    void addAmmo(){

        cout<<"Ammo: "<<ammo<<endl;
    }

    void usePotion(int remainingpotion){
 
        cout

    }


};



int main(){



    return 0;;
}