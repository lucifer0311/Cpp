#include<iostream>
using namespace std;
int sum(int a , int b){
    int c = a + b;
    return c;
}
// This will not swap a and b
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}

// Call By Reference using Pointers // 

void swapPointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call By Reference using C++ Reference variables //

void swapReferenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4 , y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a , b)<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
   // swap(x , y); ---> This will not swap a and b //
   // swapPointer(&x , &y); ---> This will swap a and b using pointer reference //
    
    swapReferenceVar(x , y); // ---> This will swap a and b using reference variables //
    
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}