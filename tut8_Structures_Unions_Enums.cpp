#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    int salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};
int main(){

// STRUCT //

    struct employee harry;
    ep rohan;
    harry.eId = 1;
    harry.favChar = 'a';
    harry.salary = 1000000;
   
    cout<<"HARRY DETAILS:- "<<endl;
   
    cout<<"The value is "<<harry.eId<<endl;
    cout<<"The value is "<<harry.favChar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
    
    cout<<"ROHAN DETAILS:- "<<endl;

    rohan.eId = 2;
    rohan.favChar = 'b';
    rohan.salary = 3000000;
    cout<<"The value is "<<rohan.eId<<endl;
    cout<<"The value is "<<rohan.favChar<<endl;
    cout<<"The value is "<<rohan.salary<<endl;

// UNION // 

    union money m1;
    m1.rice = 35;
    m1.car = 'c';
    
    cout<<m1.car<<endl;

// ENUM // 

    enum Meal{breakfast , lunch , dinner};
    Meal m2 = breakfast;
    cout<<m2<<endl;
    cout<<lunch<<endl;

    return 0;

}