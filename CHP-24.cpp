#include <iostream>
using namespace std;

class employee{

int id;
static int count;

public:

void setdata(void){
 cout<<"Please enter the value of id. "<<endl;
 cin>>id;
 count++;
}

void getdata(){
cout<<"This is your employee id "<<id<< " and this is the count of your employee id. "<<count<<endl;
}

void static getcount(){
cout<<"This is the value of static method or station member function. "<<count<<endl;
}


};

int employee :: count;

int main()
{
employee phantom, rawat, harshit;

phantom.setdata();
phantom.getdata();
employee::getcount();

rawat.setdata();
rawat.getdata();
employee::getcount();

harshit.setdata();
harshit.getdata();
employee::getcount();

    return 0;
}