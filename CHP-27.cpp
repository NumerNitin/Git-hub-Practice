#include <iostream>
using namespace std;

class employee; // forward declaration

class empbonussal
{
public:
    int add(int b1, int s1)
    {
        return (b1 + s1);
    }

    int sumbonussalary(employee, employee);
    int sumsalary(employee, employee);
};

class employee
{

    int bonussal;
    int salary;
    friend int empbonussal ::sumbonussalary(employee Jenn, employee nitin);
    friend int empbonussal ::sumsalary(employee Jenn, employee nitin);

public:
    void setidsalary(int b1, int s1)
    {
        bonussal = b1;
        salary = s1;
    }

    // void displayidsalary()
    // {
    //     cout << "This is bonus & salary. " << bonussal << " and " << salary << endl;
    // } 
};

int empbonussal ::sumbonussalary(employee Jenn, employee nitin)
{
    return (Jenn.bonussal + nitin.bonussal);
}

int empbonussal ::sumsalary(employee Jenn, employee nitin)
{
    return (Jenn.salary + nitin.salary);
}

int main()
{

 employee Jenn, nitin;
 empbonussal bonussalary;
 empbonussal sumofsalary;

 Jenn.setidsalary(50000, 100000);
 nitin.setidsalary(25000, 200000);

//  bonussalary.sumbonussalary(Jenn, nitin);
 cout<<"This is the sum of bonus received by both Jenn & nitin. "<<bonussalary.sumbonussalary(Jenn, nitin)<<endl;
 cout<<"This is the sum of salary received by both Jenn & nitin. "<<sumofsalary.sumsalary(Jenn, nitin)<<endl;


    return 0;
}