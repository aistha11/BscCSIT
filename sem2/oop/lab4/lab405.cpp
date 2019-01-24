/*
class=student
data members=name, roll, address
function =to receive data, to display data
Program to accept and display data about 10 students
*/
#include <iostream>
#include <iomanip>
using namespace std;

class student
{
    char name[10];
    int roll;
    char adrs[10];
public:
    void receive ();
    void display();

};
const int size=10;

int main ()
{
    student s[size];
    int i;
    for (i=0;i<size;i++)
    {
        cout<<"Enter the data of "<<i+1<<" student:\n";
        s[i].receive();

    }
    for (i=0;i<size;i++)
    {
       cout<<"The data of "<<i+1<<" student:\n";
       s[i].display();
    }
    return 0;

}

void student::receive ()
{
    cout<<"Name: ";
    cin>>name;
    cout<<"Roll: ";
    cin>>roll;
    cout<<"Address: ";
    cin>>adrs;

}
void student::display ()
{
    cout<<"Name: "<<name<<"\nRoll: "<<roll<<"\nAddress: "<<adrs<<".\n";
}
