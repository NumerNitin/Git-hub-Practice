#include <iostream>
using namespace std;
   
 class students{

    int id;
    int name;

    public:

    void setdata(void){
        cout<<"Enter the id. "<<endl;
        cin>>id;}

    void getdata(void){ 
        cout<<"This is the id:- "<<id<<endl;}
    };
int main(){

 students s[5];
 for(int i = 0; i<5; i++){
 
    s[i].setdata(); 
    s[i].getdata(); 
 } 
    return 0;
}