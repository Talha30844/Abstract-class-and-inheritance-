
#include <iostream>
using namespace std;
//abstract class
class fruit {
public:
    //pure virtual functions
    virtual void eat() = 0;
    virtual void taste() = 0;
    virtual void colour() = 0;
};
//drive class that inherits from base class
class Apple : public fruit {
public:
    void eat() {
        cout << "Ali likes Apple" << endl;
    }

    void taste() {
        cout << "just taste" << endl;
    }

    void colour() {
        cout << "Red or Green" << endl;
    }
};
//design class banana from base class Apple
class banana : public fruit {
public:
    void eat() {
        cout << "Ali also like babnana" << endl;
    }

    void taste() {
        cout << "nice taste" << endl;
    }

    void colour() {
        cout << "yellow" << endl;
    }
};

int main()
{//creating objects of dried glass apple and banana
    Apple a;
    banana b;
    cout << "Apple properties" << endl;
    //calling functions for drive class Apple
    a.eat();
    a.taste();
    a.colour();
    cout << "Banana properties" << endl;
    //function calling for drive class banana
    b.eat();
    b.taste();
    b.colour();

    return 0;
}