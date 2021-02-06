#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a = 5;
    cout<<"The value of a was "<<a<<endl;
    a = 10;
    cout<<"The value of a is "<<a<<endl;

// CONSTANTS //

    const int b = 7;
    cout<<"The value of a is "<<b<<endl;
    /*b = 8;                          We will get an ERROR because b is a CONSTANT
    cout<<"The value of b is "<<b<<endl; */

// MANIPULATORS //

    int p = 4 , q = 44 , r = 444;
    // Without setw //
    cout<<"The of value of p without setw is: "<<p<<endl;
    cout<<"The of value of q without setw is: "<<q<<endl;
    cout<<"The of value of r without setw is: "<<r<<endl;
    // With setw //
    cout<<"The of value of p with setw is: "<<setw(4)<<p<<endl;
    cout<<"The of value of q with setw is: "<<setw(4)<<q<<endl;
    cout<<"The of value of r with setw is: "<<setw(4)<<r<<endl;

// OPERATOR PRECEDENCE //   

    int x = 4 , y = 5;
    /* int c = (x*4)+y; */
    int c = ((((x*4)+y)-1)+10);
    cout<<"The value of c: "<<c<<endl;;

}
