#include <iostream>
#include <string>
using namespace std;

class Coaching_student
{

protected:
    string name;
    int class_roll_no;

public:
    Coaching_student(string n, int c_r_n)
    {

        name = n;
        class_roll_no = c_r_n;
    }

    virtual void display()
    {
        cout << "If found nothing say:- Gaming is best for health" << endl;
    }
};

class commerce_Student : public Coaching_student
{

    int commerce_fees;

public:
    commerce_Student(string n, int c_r_n, int f) : Coaching_student(n, c_r_n)
    {
        commerce_fees = f;
    }

    void display()
    {

        cout << "This is the name of commerce student:-" << name << endl;
        cout << "This is the class roll number of commerce student:- " << class_roll_no << endl;
        cout << "This is the fees of commerce student:- " << commerce_fees << endl;
    }
};

class science_Student : public Coaching_student
{

    int science_fees;

public:
    science_Student(string n, int c_r_n, int f) : Coaching_student(n, c_r_n)
    {
        science_fees = f;
    }

    void display()
    {
        cout << "This is the name of science student:-" << name << endl;
        cout << "This is the class roll number of science student:- " << class_roll_no << endl;
        cout << "This is the fees of science student:- " << science_fees << endl;
    }
};

int main()
{

    string name;
    int class_roll_no, commerce_fees, science_fees;

    // for commerce student:-

    name = "Nitin";
    class_roll_no = 101;
    commerce_fees = 5000;

    commerce_Student c1(name, class_roll_no, commerce_fees);
    // c1.display();

    // for science student:-

    name = "adarsh";
    class_roll_no = 102;
    science_fees = 6000;

    science_Student s1(name, class_roll_no, science_fees);
    // s1.display();

    Coaching_student *Ptr;
    Ptr = &c1;
    Ptr->display();
    Ptr = &s1;
    Ptr->display();

    return 0;
}