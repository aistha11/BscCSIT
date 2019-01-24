//WAP to read contents of a file already created and display on the screen.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
using namespace std;
class student
{
  char name[20];
    int roll;
    public:
        /*
        student ()
        {
            strcpy(name,"Ram");
            roll=11;
        }*/
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
    fstream file;
    file.open("data.txt",ios::binary|ios::in);
    file.read ((char *)&X,sizeof(X));
    X.display();
    file.close ();
    return 0;
}
