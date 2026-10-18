#include <iostream>
using namespace std;
  
 class alphabet{
 
 protected:
   int a;

 private:
  int b;


 };
 /*
 For a protected member:
                          Public derivation    Private derivation  Protected derivation 
    1.Private members     not inherited        not inherited       not inherited
    2.Protected members   Protected            Private             Protected
    3.Public members      Public               Private             Protected 
 */

 class derived: protected alphabet{

 };

int main(){

 alphabet b;
 derived d;
 
 //cout<<b.a; //will not work since a is a protected in both base as well as derived class.


    return 0;
}