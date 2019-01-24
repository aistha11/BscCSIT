#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class student
{
protected:
    char name [20];
    int roll;
public:
    student ()
    {
        strcpy(name,"Ram");
        roll=1;
    }
    void getstd ()
    {

        cout<<"Enter name: ";
        cin.get(name,20);
        cout<<"Roll: ";cin>>roll;
    }
};
class computer : public student
{
protected:
    int markcomp;
public:
    void getcomp ()
    {
        cout<<"Enter marks of Computer: ";cin>>markcomp;
    }
    void dispcomp ()
    {
        cout<<"Name: "<<name<<"\nRoll: "<<"Marks: "<<markcomp<<endl;
    }
    int comp ()
    {
        return markcomp;
    }
};
class science : public student
{
    protected:
    int marksc;
public:
    void getsc ()
    {
        cout<<"Enter marks of Science: ";cin>>marksc;
    }
    void dispsc()
    {
        cout<<"Name: "<<name<<"\nRoll: "<<"Marks: "<<marksc<<endl;
    }
    int sci ()
    {
        return marksc;
    }

};
class mathematics : public student
{
  protected:
    int markmt;
public:
    void getmt ()
    {
        cout<<"Enter marks of Science: ";cin>>markmt;
    }
    void dispmt()
    {
        cout<<"Name: "<<name<<"\nRoll: "<<"Marks: "<<markmt<<endl;
    }
    int mth ()
    {
        return markmt;
    }
};
int main ()
{
    computer c;
    c.getcomp();
    c.getstd();
    c.dispcomp();
    return 0;
}
