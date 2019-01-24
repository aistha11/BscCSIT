#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class parent
{
protected:
    char address[20];
public:
    void getadd (char add[])
    {
        strcpy(address,add);
    }
};
class child: public parent
{
protected:
    char name[20];
public:
    void getname (char nm[])
    {
        strcpy(name,nm);
    }
    void display ()
    {
        cout<<"The name is "<<name<<endl;
    }
};
class student: public child
{
protected:
    int roll , marks;
public:
    void input (int r, int m)
    {
        roll=r;
        marks=m;
    }
    void dispall ()
    {
        cout<<"The Name is: "<<name<<endl;
        cout<<"The Roll is: "<<roll<<endl;
        cout<<"The Marks is: "<<marks<<endl;
        cout<<"The Address is: "<<address<<endl;
    }
};
int main()
{
    student s;
    char nm[20]={"Bijay"},ad[20]={"Kathmandu"};
    s.getname(nm);
    s.getadd(ad);
    s.input(11,576);
    s.dispall();
    return 0;
}
