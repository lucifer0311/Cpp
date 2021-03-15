#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};

/* For a Protected Member:
                       Public derivation   Priavte derivation   Protected derivation
1. Priavte Members        Not Inherited       Not Inherited       Not Inherited
2. Protected Members      Protected           Private             Protected
3. Public Members         Public              Private             Protected
*/

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; ---> will not work since 'a' is protected in both base as well as derived class
    return 0;
}