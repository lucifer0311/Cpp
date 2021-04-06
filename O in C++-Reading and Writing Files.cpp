#include<iostream>
#include<fstream>

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream -----> derived from fstreambase
3. ofstream -----> derived from fstreambase
*/

// In order work with files in C++, yu will have to open it. Primarily, there are 2 ways to open a file:
// 1. Using a constructor
// 2. Using the member function open() of the class 

using namespace std;

int main(){
    string st = "Harry Bhai";
    string st2;
// Opening file using Constructor and writing it
    
  /* ofstream out("sample43.txt"); // write operation
    out<<st;    */ 
    
// Opening file using Constructor and reading it 

    ifstream in("sample43_b.txt");
   // in>>st2;
    getline(in , st2);   
    cout<<st2;
    
    return 0;
}