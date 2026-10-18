#include <iostream>
using namespace std;
   
template <class T>

class math{

T x;
T y;

public:

void setdata(T a, T b){

    x = a;
    y = b;
}

void getdata(){

    T c = x + y;
    cout<<"value of c:"<<c<<endl;
}

};


int main(){

 math <int> m1;
 m1.setdata(10, 20);
 m1.getdata();

 math<float>m2;
 m2.setdata(10.11, 21.67);
 m2.getdata();


    return 0;
}