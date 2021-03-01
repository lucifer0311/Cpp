#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

    public:
        void setData(void)
        {

            cout << "Enter the id" << endl;
            cin >> id;
            count++;
        }
        void getData(void)
        {
            cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
        }

        static void getCount(void){
            // cout<<id; -----> throws an ERROR // 
            cout<<"The value of count is "<<count<<endl;
        }

};

// Count is the static data members of class Employee

int Employee :: count;  // Default value is 0 //

int main()
{
    Employee harry, lovish, rohan;
   // harry.id = 1;   // cannot do this id and count  are private //
   // harry.count = 1; // cannot do this id and count are private //

    harry.setData();
    harry.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    return 0;
}