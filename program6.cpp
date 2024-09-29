#include<iostream>
using namespace std;
class Account//abstract class as well iterface
{
public:
    virtual void calculateIntrest()=0;// pure virtual function 
};
class SavingAccount:public Account//child class
{   double balance;
    double yintrest;
public:
    SavingAccount(double a,double b):balance(a),yintrest(b) {}//constructor to initilize
    void calculateIntrest()
    {
        cout<<"after intrest in SavingAccount"<<(balance/yintrest)*100<<endl;
    }
};
class CheckingAccount:public Account
{   double balance;
    double intrest;
public:
     CheckingAccount(double c,double d):balance(c),intrest(d) {}//constructor 
    void calculateIntrest()
    {
        cout << "after interest in CheckingAccount " << (balance-intrest)<<endl;
    }
};
int main()
{   Account *accounts[2];
    accounts[0]=new SavingAccount(100.0,2.5);
    accounts[0]->calculateIntrest();//calling through pointer 
    accounts[1]=new CheckingAccount(2000,50);
    accounts[1]->calculateIntrest();
}