#include <iostream>
using namespace std;
  
class student{

protected:
   int roll_no;

public:
 void set_roll_no(int r){

    roll_no = r;
 }   

 void get_roll_no(void){

    cout<<"Student Roll no: "<<roll_no<<endl;
}
};

class test : virtual public student{

protected:

float english, hindi;

public:

void set_marks(float e, float h)
{
    english =e;
    hindi =h;
}

void get_marks(void){

    cout<<"Student English marks: "<<english<<endl;
    cout<<"Student Hindi marks: "<<hindi<<endl;
}
};

class sports : virtual public student{

protected:

float score;

public:

void set_score(float s){

    score = s;
}

void get_score(void){

    cout<<"Student Sports score: "<<score<<endl;
}
};

class academic_result : public test, public sports{

private:

float total_test, total_result;

public:

void display(void){

    total_test = english + hindi;
    total_result = total_test + score;

    cout<<"student total test marks: "<<total_test<<endl;
    cout<<"student total result marks: "<<total_result<<endl;
}
};

int main(){

 academic_result nitin;
 nitin.set_roll_no(117);
 nitin.get_roll_no();


 nitin.set_marks(80,90);
 nitin.get_marks();

 
 nitin.set_score(10);
 nitin.get_score();

 nitin.display();


    return 0;
}