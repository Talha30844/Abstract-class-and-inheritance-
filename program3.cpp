#include<iostream>
#include<cmath>
using namespace std;
//abstract class
class Shape
{
public:
// pure virtual function
    virtual void draw()=0;
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
};
int main()
// calling functions through pointer array
{   Shape *p[2];
    p[0]=new Circle();
    p[1]=new Rectangle();
    p[0]->draw();
    p[1]->draw();
}