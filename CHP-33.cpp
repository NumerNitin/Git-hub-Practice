#include <iostream>
using namespace std;
    
class bankdeposit{

int principal;
int years;
float interest;
float returnvalue;

public:

bankdeposit();
bankdeposit(int p, int y, float r);
bankdeposit(int p, int y, int r);
void display();
};

bankdeposit :: bankdeposit(int p, int y, float r){

    principal = p;
    years = y;
    interest = r;
    returnvalue = principal;
    
    for(int i=0; i<y; i++){

        returnvalue = returnvalue*(1+interest);
    }
}

bankdeposit :: bankdeposit(int p, int y, int r){

    principal = p;
    years = y;
    interest = float(r/100);
    returnvalue = principal;
    
    for(int i=0; i<y; i++){

        returnvalue = returnvalue*(1+interest);
    }
}

void bankdeposit :: display(){

    cout<<endl<<"Principal amount was "<<principal
        << ". Return value after "<<years
        << " years is "<<returnvalue<<endl;
}

int main(){

    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bankdeposit(p, y, r);
    bd1.display();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bankdeposit(p, y, R);
    bd2.display();
    
    return 0;
}