#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

// When no copy constructor is found, then complier supplies its own copy constructor

    Number(Number &obj)
    {
        cout << "Copy Constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(44);
    x.display();
    y.display();
    z.display();
    Number z1(z); // Copy Constructor invoked 
    z1.display();

    //z2 = z; ----> Copy Constructor not called

    Number z3 = z; // Copy Constructor invoked
    z3.display(); 

    return 0;
}
