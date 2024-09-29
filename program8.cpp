#include<iostream>
using namespace std;
class paymentMethod//abstract class 
{public:
//pure virtual functions
virtual void processmethod(double amount)=0;
virtual void refund(double amount)=0;

};
//child claass
class CreditCard:public paymentMethod
{public:
void processmethod(double amount)
{float n=amount;
cout << "scretch your card\nenter your pin code\nyou have paid" <<n<< endl;}
void refund(double amount)
{cout<<"your refund amount"<<amount<<endl;
}
};
//child classs
class PayPal:public paymentMethod
{public:
 void processmethod(double amount)
{
cout << "open your app or web account\nenter your pin code\nyou have paid" <<amount<< endl;}
void refund(double amount)
{cout<<"your refund amount"<<amount<<endl;
}
};
//childclasss
class BankTransfer:public paymentMethod
{public:
 void processmethod(double amount)
{
cout << "Go to bank\ngave your id\ngave your amount and transfer account no\ntou have paid your amout=" <<amount<< endl;}
void refund(double amount)
{cout<<"your refund amount"<<amount<<endl;
}
};
int main()
{ 
int a;
cout<<"enter your amount";
cin>>a;
//making objects and calling functions
CreditCard c;
c.processmethod(a);
c.refund(a);
PayPal p;
p.processmethod(a);
p.refund(a);
BankTransfer b;
b.processmethod(a);
b.refund(a);
}