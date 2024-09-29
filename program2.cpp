#include<iostream>
using namespace std;
//abstract class
class Vehicle
{
public:
// pure virtual function
    virtual void getNumberOfWheels()=0;
};
//derive calss
class Car:public Vehicle
{
public:
    void getNumberOfWheels() override 
    {
        cout << "car has 4 wheels" << endl;
    }
};
//derive class
class Bike:public Vehicle
{
public:
    void getNumberOfWheels() override 
    {
        cout << "bike has 2 wheels" << endl;
    }
};
int main()
//pointer of array as object
{   Vehicle *p[2];
    p[0]=new Car();//storing in heep memory 
    p[0]->getNumberOfWheels();//calling function 
    p[1]=new Bike();//storing in heep memory 
    p[1]->getNumberOfWheels();//calling function 
}