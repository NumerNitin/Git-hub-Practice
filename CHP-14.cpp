#include <iostream>
using namespace std;

union money{  // union: it is a user-defined data type that can hold different types of data but only one type at a time. It is similar to a structure but with a key difference in memory allocation.

int gold;     // Gold: it is a variable of type int that will hold the amount of gold. Since it is part of a union, it shares memory with the other members of the union.
char crypto;  // crypto: it is a variable of type char that will hold the type of cryptocurrency. Since it is part of a union, it shares memory with the other members of the union.
float cash;   // cash: it is a variable of type float that will hold the amount of cash. Since it is part of a union, it shares memory with the other members of the union.

};


// typedef struct car{ // typedef: it is used to create an alias for a data type.
//                     //struct: it is used to create a user-defined data type that can hold multiple variables of different types.
//                     //car: it is the name of the structure that we are defining.
//   char color;       // color: it is a variable of type char that will hold the color of the car & char is a data type that can hold a single character.
//   int model;        // model: it is a variable of type int that will hold the model year of the car & int is a data type that can hold whole numbers.
//   float price;      // price: it is a variable of type float that will hold the price of the car & float is a data type that can hold decimal numbers.
// }cr;                // cr: it is an alias for the structure car that we have defined. We can use cr to declare variables of type car.

    int main(){
  //  cr car1;         // car1: it is a variable of type cr (which is an alias for the structure car) that we are declaring. We can use car1 to access the members of the structure car.
  //  cr car2;         // car2: it is another variable of type cr that we are declaring. We can use car2 to access the members of the structure car.
  //  cr car3;         // car3: it is another variable of type cr that we are declaring. We can use car3 to access the members of the structure car.
  //  car1.color = 'r';   
  //  car2.color = 'b';
  //  car3.color = 'g';
  //  car1.model = 2020;
  //  car2.model = 2021;
  //  car3.model = 2022;
  //  car1.price = 100000.199;
  //  car2.price = 200000.299;
  //  car3.price = 300000.399;

  //  cout<<"This is the details of car 1: "<<endl<<"Color: "<<car1.color<<endl<<"Model: "<<car1.model<<endl<<"Price: "<<car1.price <<"\n"<<endl;
  //  cout<<"This is the details of car 2: "<<endl<<"Color: "<<car2.color<<endl<<"Model: "<<car2.model<<endl<<"Price: "<<car2.price <<"\n"<<endl;
  //  cout<<"This is the details of car 3: "<<endl<<"Color: "<<car3.color<<endl<<"Model: "<<car3.model<<endl<<"Price: "<<car3.price <<"\n"<<endl;
    

  //  money m1;
  //  m1.gold = 1000;
  // //  m1.crypto = 'b';
  // //  m1.cash = 2000.50;

  //  cout<<m1.gold<<endl; // Since m1 is a union, it can only hold one value at a time. When we assign a new value to m1.crypto, it overwrites the previous value of m1.gold. Similarly, when we assign a new value to m1.cash, it overwrites the previous value of m1.crypto. Therefore, when we try to access m1.gold after assigning values to m1.crypto and m1.cash, it will not give us the expected result because the memory allocated for m1.gold has been overwritten by the values of m1.crypto and m1.cash.
  // //  cout<<m1.crypto<<endl; // Since m1 is a union, it can only hold one value at a time. When we assign a new value to m1.cash, it overwrites the previous value of m1.crypto. Therefore, when we try to access m1.crypto after assigning a value to m1.cash, it will not give us the expected result because the memory allocated for m1.crypto has been overwritten by the value of m1.cash.
  // //  cout<<m1.cash<<endl; // Since m1 is a union, it can only hold one value at a time. When we assign a new value to m1.cash, it overwrites the previous values of m1.gold and m1.crypto. Therefore, when we try to access m1.cash after assigning values to m1.gold and m1.crypto, it will give us the expected result because the memory allocated for m1.cash has been overwritten by the value of m1.cash.


    // enum day{monday = 10, tuesday = 20, wednesday = 30}; // enum: it is a user-defined data type that consists of a set of named integral constants. It is used to assign names to the integral constants to make the code more readable and maintainable. In this example, we have defined an enumeration called day that has three named constants: monday, tuesday, and wednesday. By default, the value of the first constant (monday) is 0, the value of the second constant (tuesday) is 1, and the value of the third constant (wednesday) is 2.  
    // cout<<monday<<endl; // Since we have assigned the value of 10 to monday, it will print 10 when we try to access it.
    // cout<<tuesday<<endl; // Since we have assigned the value of 20 to tuesday, it will print 20 when we try to access it.
    // cout<<wednesday<<endl; // Since we have assigned the value of 30 to

    // enum day{monday, tuesday, wednesday}; // enum: it is a user-defined data type that consists of a set of named integral constants. It is used to assign names to the integral constants to make the code more readable and maintainable. In this example, we have defined an enumeration called day that has three named constants: monday, tuesday, and wednesday. By default, the value of the first constant (monday) is 0, the value of the second constant (tuesday) is 1, and the value of the third constant (wednesday) is 2.  
    // cout<<monday<<endl; // Since we have assigned the value of 10 to monday, it will print 10 when we try to access it.
    // cout<<tuesday<<endl; // Since we have assigned the value of 20 to tuesday, it will print 20 when we try to access it.
    // cout<<wednesday<<endl; // Since we have assigned the value of 30 to

   
   return 0;
}