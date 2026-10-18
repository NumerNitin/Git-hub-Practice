#include <iostream>
using namespace std;
    
class Jenn{

int a, b;
friend Jenn setfavoritesum(Jenn o1, Jenn o2);

public:

int setfavorite(int J1,int J2){ 
 a=J1;
 b=J2;

} 
// Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members
int getfavorite(){
    cout<<"This is the value of (a) "<<a<<" and This is the value of (b) "<<b<<endl;
}

};

Jenn setfavoritesum(Jenn o1, Jenn o2){
    Jenn o3;
  o3.setfavorite((o1.a + o2.a),(o2.b + o2.b));
    return o3;}


int main(){

Jenn J1,J2,sum;

J1.setfavorite(50,100);
J1.getfavorite();

J2.setfavorite(150,1090);
J2.getfavorite();

sum=setfavoritesum(J1, J2);
sum.getfavorite();

    return 0;
}