#include<iostream>
#include<fstream>
using namespace std;
int main(){
/*
// Connecting our file with hout stream    
    ofstream hout("sample43.txt");

// Creating a name string and filling it with the string entered by the user
    string name;    
    cout<<"Enter your name"<<endl;
    cin>>name;

// Writing a string to the file
    hout<<"My name is " + name;

    hout.close();
*/
    
    ifstream hin("sample43.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    getline(hin , content);
    cout<<content;

    return 0;
}
