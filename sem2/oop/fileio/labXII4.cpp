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
    student S;
    fstream file;
    file.open("data.txt",ios::binary|ios::in|ios::trunc);
    file.read ((char *)&S,sizeof(S));
    S.display();
    file.close ();
    return 0;
}
