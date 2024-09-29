#include<iostream>
using namespace std;
//abstract base class 
class Base
{
public:
    virtual void show()=0;//pure virtual function 
};
//derive class
class Derv1:public Base
{
public:
    void show() override 
    {
        cout << "1st derive class" << endl;
    }
};
//derive class
class Derv2:public Base
{
public:
    void show() override
    {
        cout << "2nd derive class" << endl;
    }
};
int main()
{   Derv1 obj1;
//calling function for 1st derive class
    obj1.show();
    Derv2 obj2;
    //calling functin for 2nd derive class
    obj2.show();
}