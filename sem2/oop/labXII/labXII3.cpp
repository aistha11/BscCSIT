//WAP to enter a name , roll of a student in file
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
using namespace std;
//typedef class student stud;
class student
{
    char name[20];
    int roll;
    public:
        void getdata ()
        {
            cout<<"Enter name and roll:\nName: ";
            cin>>name;
            cout<<"Roll: ";
            cin>>roll;
        }
        void display ()
        {
            cout<<"\nName: "<<name<<"\nRoll: "<<roll<<endl;
        }

};
int main ()
{
    student X;
    X.getdata();
    fstream file;
    file.open("data.txt",ios::binary|ios::out);
    file.write((char *)&X,sizeof(X));
    file.close ();
    file.open("data.txt",ios::binary|ios::in|ios::trunc);
    file.read ((char *)&X,sizeof(X));
    X.display();
    file.close ();

    return (0);
}
