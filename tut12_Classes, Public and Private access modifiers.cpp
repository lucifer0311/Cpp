#include<iostream>
using namespace std;

class employee
{
    private:
    int a , b , c;
    public:
    int d , e;
    void setData(int a1 , int b1 , int c1);   // Declaration // 
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }

};
void employee :: setData(int a1 , int b1 , int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee harry;
    // harry.a = 1; ==> This will throw ERROR as a is private //
    harry.d = 40;
    harry.e = 50; 
    harry.setData(10 , 20 , 30);
    harry.getData();
    return 0;

}