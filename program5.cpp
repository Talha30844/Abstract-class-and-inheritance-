#include<iostream>
using namespace std;
class Shape// abstract class
{
public:
    virtual void calculateArea()=0;// pure virtual function
};
class Square:public Shape// derive class
{   float side;
public:
    Square(float s):side(s) {}//constructor
    void calculateArea()
//function to find area of square
    {
        cout << "Area of the square is "<<side*side << endl;
    }
};
class Triangle:public Shape
{   float height,base;
public:
    Triangle(float h,float b):height(h),base(b) {}
//function to find area of triangle
    void calculateArea()
    {
        cout << "Area of triangle is " <<0.5*height*base<< endl;
    }
};
int main()
{   int l,m,n;
    cout << "enter length of a side: ";
    cin>>l;
    Square mysquare(l);
    cout << "enter height and base : ";
    cin>>m>>n;
    Triangle mytriangle(m,n);
    Shape *shapes[2];//pointer of array
    shapes[0]=&mysquare;
    shapes[1]=&mytriangle;
    for(int i=0; i<2; i++)
    {   shapes[i]->calculateArea();//calling functions
        cout << endl;
    }

}