/*Write a C++ program that utilizes an abstract base class 'Shape' with pure virtual functions 'area()' and
'perimeter()', and three derived classes 'Circle', 'Rectangle', and 'Triangle', each implementing the 'area()'
and 'perimeter()' functions, to calculate and display the area and perimeter of a 'Circle' object named 'circle'
with a radius of 5.0, a 'Rectangle' object named 'rectangle' with a length of 4.0 and a width of 6.0, and a
'Triangle' object named 'triangle' with sides of 3.0, 4.0, and 5.0, using polymorphism and inheritance, while
incorporating mathematical formulas for the calculations, such as the Heron's formula for the triangle area,
and ensuring correct output formatting.*/
#include<iostream>
#include<math.h>
using namespace std;

class shape
{public:
shape(){
}
//virtual functions
virtual double area()=0; //pure virtual function 
virtual double perimeter()=0; 
};
class circle: public shape
{public:
int radius;
circle(int r)//constructor of circle
{radius=r;
}
double area()
{return 3.14 * radius * radius;//area of circle
}
double perimeter()//calculate perimeter
{return 2*3.14*radius;
}
};
class triangle: public shape
{public:
float a,b,c;
triangle(float d,float e,float f)//constructor of triangle
{a=d;
b=e;
c=f;
}
double area()
{double s=(a+b+c)/2.0;
return sqrt(s*(s-a)*(s-b)*(s-c));// Heron's formula
}
double perimeter()// Calculates the perimeter of the shape.
{return a+b+c;
}

};
class rectangle: public shape
{public:
int l;
int w;
rectangle(float g,float f)
{l=g;
w=f;
}
double area()
{return l*w;
}
double perimeter()
{return 2*(l+w);}
};
int main()
{circle c(5.0);
triangle t(3.0, 4.0, 5.0);
rectangle r(4.0, 6.0);
shape *p[3];
p[0]=&c;
p[1]=&t;
p[2]=&r;
for(int i=0;i<3;i++)
{p[i]->area();
cout <<"Area="<<p[i]->area()<<endl;
cout <<"parameter of the shape="<<p[i]->perimeter()<<endl;
}

} 
