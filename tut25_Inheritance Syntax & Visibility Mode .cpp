#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 55.0;
    }
    Employee() {}
};

// Derived Class Syntax
/* 
class {{derived-class-name}} : {{visibility-mode}} : {{base-class-name}}
{
    class members/methods/etc...
}
NOTE:-
1. Default visibility mode is private.
2. Private visibility Mode : Public members of the base class becomes private members of the derived class.
3. Public visibility Mode : Public members of the base class becomes public members of the derived class.
4. Private members are never inherited. 
*/

// Creating a Programmer class derived from Employee base class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    cout<<skillF.id<<endl;
    return 0;
}