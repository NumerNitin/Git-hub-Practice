#include <iostream>
#include <iomanip>
using namespace std;

    // void sum (int glo =45){
    //     int a;
    //     cout<<glo<<endl;
    // }

    // int c = 5;

    // struct cars{

    //  int modelnumber;
    //  float rating;
    //  char category;
        
    // };

    // union cars {

    // int gold;
    // float cash;
    // char crypto;

    // };

    // int sum(int a, int b){
    // int c=a+b;
    // return c;
    // }

    int main(){ 
        // int glo = 34; float a = 45.5; char b = 'A';bool c = true;
        // glo = 45;
        
        // cout<<"This is the value of glo.\n "<<glo<<endl;
        // cout<<"This is the value of a.\n "<<a<<endl;
        // cout<<"This is the value of b.\n "<<b<<endl;
        // cout<<"This is the value of c.\n "<<c<<endl;
        // sum(glo);

        // int num1, num2;
    
        // cout<<"enter The value of num1 is: \n";
        // cin>>num1;
        // cout<<"enter The value of num2 is: \n";
        // cin>>num2;
        // cout<<"The sum of num1 and num2 is: \n"<<num1+num2<<endl;

    //Operators:- Arithmetic, Assignment,Comparison & logical.
    
    // int a=5,b=17;

    // cout<<a+b<<endl;
    // cout<<a-b<<endl;
    // cout<<a*b<<endl;
    // cout<<a/b<<endl;
    // cout<<a%b<<endl;
    // cout<<a++<<endl;
    // cout<<a--<<endl;
    // cout<<++a<<endl;
    // cout<<--a<<endl;

    // int a=5, b=17, c= 'a', d = 'b';

    // int a=5,b=17;

    // cout<<(a==b)<<endl;
    // cout<<(a!=b)<<endl;
    // cout<<(a||b)<<endl;
    // cout<<(a<=b)<<endl;
    // cout<<(a>=b)<<endl;
    // cout<<(a<b)<<endl;
    // cout<<(a>b)<<endl;

    // int a=5,b=17;

    // cout<<((a==b)&&(a<=b))<<endl;
    // cout<<((a==b)&&(a>=b))<<endl;
    // cout<<(!(a==b)&& (a<=b))<<endl;
    // cout<<((a==b)||(a<=b))<<endl;

    // int a=5,b=17,c=a+b;

    // cout<<"The value of local c variable. "<<c<<endl;
    // cout<<"The value of global c variable. "<<::c<<endl;

    // floats, doubles, & literals :-

    // float a=7.50f;
    // long double b=18.99l;

    // cout<<sizeof(7.50f)<<endl;
    // cout<<sizeof(18.99L)<<endl;
    // cout<<sizeof(7.50)<<endl;
    // cout<<sizeof(18.99)<<endl;

    //reference variables:-

    // int a=17, b=18;
    // int &c=a;
    //  a=19;
    //  cout<<c<<endl;

    // typecasting:-

    // int a=17;
    // float b=18.99;

    // cout<<float(a)<<endl;
    // cout<<(int)b<<endl;

    // contants,manipulators & operators precedence:-
    // int a=50,b=70;
    // const a=60 (we can't change the value of a.)

    // int a=11,b=18;
    // cout<<"The value of a is: "<<setw(2)<<a<<endl;
    // cout<<"The value of b is: "<<setw(2)<<b<<endl;


    // int a=11, b=17, c=5, d=18;
    // float e=88.8, f=99.99;
    // int g=(((a*b)+c)-d);
    // cout<<"The value of g: \n"<<g<<endl;

    
    //Types of Structures:- 1.sequence structure, 2.selection structure & 3.loop structure.
     
    // int age;

    // if, else if, & else ladder:-

    // cout<<"Age Restrictions for Adult Party: "<<endl;
    // cin>>age;

    // if((age>=1) && (age<=18))
    // {cout<<"You are not an adult.So, you are not allowed. "<<endl;}

    // else if(age<=0)
    // {cout<<"You are not even born. "<<endl;}

    // else
    // {cout<<"You are allowed to the party. "<<endl;}

    // switch case:-

    //  switch (age) 
    //  { case 18:
    //    cout<<"You are allowed. "<<endl;
    //    break;
    
    //    case 22:
    //    cout<<"You are allowed. "<<endl;
    //    break;
    
    //    case 2:
    //    cout<<"You are not allowed. "<<endl;
    //    break;   
    
    //    default :
    //    cout<<"Not Present in the list. "<<endl;
    // }

    //    cout<<"End of the restriction list. "<<endl;   


    // There are 3 types of loop in c++:-

    // 1.for loop structure:-

    // int i;
    // for (i=0; i<100; i++)
    //  {cout<<i<<endl;}
     
    // i=0;
    // while(i<=100){
    //   cout<<i<<endl;
    //   i++;
    // } 

    // i=0;
    // do{cout<<i<<endl;
    //     i++;
    // }while(i<=100);


    // breaks & continues


    // int i;
    // for(i=0; i<50; i++)
    // {
    // if(i==5){continue;}
    // cout<<i<<endl;
    // }
    
    
    // Normal Pointer
    // int a = 17;
    // int *b = &a;

    // cout<<"The value of a. "<<a<<endl;
    // cout<<"The address of a"<<&a<<endl;
    // cout<<"The dereferencing value of a. "<<*b<<endl;
    // cout<<"The value of b. "<<b<<endl;

    
    // Arrays and Pointers:-

    // int car[] = {10,20,30,40,50};
    // car[3] = 100;

    // cout<<"The value of 1st Car: "<<car[0]<<endl;
    // cout<<"The value of 1st Car: "<<car[1]<<endl;
    // cout<<"The value of 1st Car: "<<car[2]<<endl;
    // cout<<"The value of 1st Car: "<<car[3]<<endl;
    // cout<<"The value of 1st Car: "<<car[4]<<endl;

    // int *P = car;

    // cout<<"The value of *P. "<<*P++<<endl; //this is also a method but we should use *(P+1).
    // cout<<"The value of *P. "<<*P++<<endl;
    // cout<<"The value of *P. "<<*P++<<endl;
    // cout<<"The value of *P. "<<*P++<<endl;
    // cout<<"The value of *P. "<<*P++<<endl; 


    //Structures,Unions & enums:- 

    // struct cars maruti;

    // // Maruti car details:-
    // maruti.modelnumber = 17;  
    // maruti.rating = 8.7;
    // maruti.category = 'b';

    // struct cars mahindra;

    // // Mahindra car details:-
    // mahindra.modelnumber = 109; 
    // mahindra.rating = 8.5;
    // mahindra.category = 'b';

    // struct cars TATA; 
    //  // TATA car details:-
    // TATA.modelnumber = 100;
    // TATA.rating = 9.0;
    // TATA.category = 'a';
    
    // cout<<"This is the details of maruti details: "<<endl<<"model number:- "<<maruti.modelnumber<<endl<<"rating:- "<<maruti.rating<<endl<<"category:- "<<maruti.category<<endl<<"\n";
    // cout<<"This is the details of mahindra details: "<<endl<<"model number:- "<<mahindra.modelnumber<<endl<<"rating:- "<<mahindra.rating<<endl<<"category:- "<<mahindra.category<<endl<<"\n";
    // cout<<"This is the details of TATA details: "<<endl<<"model number:- "<<TATA.modelnumber<<endl<<"rating:- "<<TATA.rating<<endl<<"category:- "<<TATA.category<<endl<<"\n";

    // cars c1;
     
    // c1.gold = 100;
    // c1.cash = 200.90;
    // c1.crypto = 'b'; 

    // cout<<c1.gold<<endl;

    // enum days{Monday=100, Tuesday=200, wednesday=300, Thursday=400, Friday=500, Saturday=600, Sunday=700};

    // cout<<days(Monday)<<endl;
    // cout<<days(Tuesday)<<endl;
    // cout<<days(wednesday)<<endl;
    // cout<<days(Thursday)<<endl;
    // cout<<days(Friday)<<endl;
    // cout<<days(Saturday)<<endl;
    // cout<<days(Sunday)<<endl;


    // int x, y;
    // cout<<"The value of x and y is: "<<endl;
    // cin>>x>>y;
    // cout<<"The sum of x and y is equal to C: "<<sum(x, y)<<endl; 

 
return 0;
}