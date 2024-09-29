#include<iostream>
#include<cmath>
using namespace std;
//abstract class
class Shape
{
public:
// pure virtual function
    virtual void draw()=0;
    virtual double getarea()=0;
};
//derive calss Circle
class Circle:public Shape
{
public:            //function for making circle 
    void draw() override
    {   int radius=10;
        int diameter=2*radius;
        for(int y=0; y<=diameter; ++y)
        {   for(int x=0; x<=diameter; ++x)
            {   int distance=round(sqrt((x-radius)*(x-radius)+(y-radius)*(y-radius)));
                if(distance==radius)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout<<endl;
        }
    }
    double getarea()
    {
    	int r;
    	cout<<"enter radius of a circle:";
    	cin>>r;
    	cout<<"area of a circle = "<<3.14*r*r<<endl;
    	return 1;
	}
};
//derive class Rectangle
class Rectangle:public Shape
{
public:        //function for making Rectangle
    void draw() override
    {
        for(int i=0; i<7; i++)
        {
            if(i==0||i==6)
            {   for(int j=0; j<9; j++)
                    cout << "*";
            }
            else
            {   cout <<endl;
                cout << "*       *"<< endl;
            }
        }
    }
    double getarea()
    {
    	int l,w;
    	cout<<"enter length of rectangular";
    	cin>>l;
    	cout<<"\nenter weight of rectangular";
    	cin>>w;
    	cout<<"area of the rectangular = "<<l*w;
    	return 1;
	}
};
class triangle:public Shape
{
	public:
	void draw()
	{
		for (int i=1;i<=5;i++)
		for (int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	double getarea()
	{
		int base,hight;
		cout<<"enter hight of a triangle";
		cin>>hight;
		cout<<"\nenter base of atrianglr ";
		cin>>base;
		cout<<"Area of the triangle = "<<0.5*base*hight<<endl;
		return 1;
	}
};
int main()
{Circle obj1;
obj1.draw();
obj1.getarea();

Rectangle obj2;
obj2.draw();
obj2.getarea();

 triangle obj3;
 obj3.draw();
 obj3.getarea();
}