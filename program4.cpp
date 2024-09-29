#include<iostream>
using namespace std;
// abstract class as well as interface
class Employee
{
protected:
    int s=50000;
public:
//pure virtual function
    virtual void calculateSalary()=0;
};
class FullTimeEmployee:public Employee//derive class
{
public:
    void calculateSalary() override
    {
        cout << "your salary is " <<s<<endl;
    }
};
class PartTimeEmployee:public Employee//derive class
{
public:
    void calculateSalary() override
    {
        cout << "your salary is " <<0.6*s<< endl;
    }
};
int main()
{   string n;
    cout << "you are Full Time Employee (yes or no) : ";
    cin >> n;
    if(n=="yes")
    {   FullTimeEmployee obj1;
        obj1.calculateSalary();// calling function for full-time job
    }
    else if(n=="no")
    {   PartTimeEmployee obj2;
        obj2.calculateSalary();// calling function for part time job
    }
    else
    {
        cout << "invalid answer" << endl;
    }
    return 0;
}