#include<iostream>
using namespace std;
int main(){

// SELECTION CONTROL STRUCTURE: IF ELSE-IF ELSE LADDER //

    int age;
    cout<<"Tell  me your age: "<<endl;
    cin>>age;
    if((age>0) && (age<18)){
        cout<<"You can not come to my party"<<endl;
    }
    else if(age==18){
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else if(age<1){
        cout<<"You are not yet born"<<endl;
    }
    else{
        cout<<"You can come to tbe party"<<endl;
    }

// SELECTION CONTROL STRUCTURE: SWITCH CASE STATEMENTS //

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;

    case 22:
        cout<<"You are 22"<<endl;    
        break;
    
    case 5:
        cout<<"You are 5"<<endl;
        break;

    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"DONE";
    
    return 0;

}