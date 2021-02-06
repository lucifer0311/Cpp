#include<iostream>
using namespace std;

int c=50;   //Global Variable//

int main(){
    // BUILT IN DATA TYPES //
    int a, b, c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum is: "<<c<<endl;

    cout<<"The global variable is: "<<::c<<endl;

    // float, double and long double LITERALS //

    float d = 20.15f;
    long double e = 20.15l;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    //Sizeof Function

    cout<<"The size of 20.15 is "<<sizeof(20.15)<<endl;
    cout<<"The size of 20.15l is "<<sizeof(20.15l)<<endl;
    cout<<"The size of 20.15L is "<<sizeof(20.15L)<<endl; 
    cout<<"The size of 20.15f is "<<sizeof(20.15f)<<endl;
    cout<<"The size of 20.15F is "<<sizeof(20.15F)<<endl;

    // REFERENCE VARIABLES //
    
    float p = 55.55;
    float & q = p;
    cout<<"The value of p is "<<p<<endl;
    cout<<"The value of q is "<<q<<endl;

    // TYPECASTING //

    int x = 44;
    float y = 11.11;
    cout<<"The value of x is "<<float(x)<<endl;
    cout<<"The value of x is "<<(float)x<<endl;

    cout<<"The value of y is "<<int(y)<<endl;
    cout<<"The value of y is "<<(int)y<<endl;
    int z = int(y);

    cout<<"The expression is "<<x + y<<endl;
    cout<<"The expression is "<<x + int(y)<<endl;
    cout<<"The expression is "<<x + (int)y<<endl;

    return 0;
}