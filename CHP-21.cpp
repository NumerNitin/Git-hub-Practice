#include <iostream>
using namespace std;
    
 class Car
 {
    private:
       int cost, customization, luckynumber; 
 
    public:
       int basemodel, prize;
       
       void setcardata(int a1, int b1, int c1);
       void getcardata(){
       cout<<"The value of cost. "<<cost<<endl; 
       cout<<"The value of customization. "<<customization<<endl; 
       cout<<"The value of luckynumber. "<<luckynumber<<endl; 
       cout<<"The value of basemodel. "<<basemodel<<endl; 
       cout<<"The value of prize. "<<prize<<endl; 

       };

   };
   void Car :: setcardata(int a1, int b1, int c1){
      cost=a1;
      customization=b1;
      luckynumber=c1;
   };

  int main(){

  Car mercedesbenz;
  
//   mercedesbenz.cost=233465; it will throw the private error will code run. 
  mercedesbenz.basemodel=124; 
  mercedesbenz.prize=50000;
  mercedesbenz.setcardata(1000000, 698, 17);
  mercedesbenz.getcardata();
   
 return 0;
}