#include <iostream>
#include <iomanip>

using namespace std;
class student
{
  static int id;
  int roll;
  public:
      void get ();
      void display ();
      static void dispid ();
};
void student::get()
{
    cout<<"Enter Roll: ";
    cin>>roll;
    id++;
}
static void student::dispid ()
{
    cout<<"\nId: "<<id<<endl;
}

 void student::display ()
{
    cout<<"\nId: "<<id<<"\nRoll: "<<roll<<endl;
}
int student::id=0;
int main ()
{
    student s,d;
    cout<<"For s:\n";
    s.get();
    student::dispid();
    s.display();
    cout<<"For d:\n";
    d.get();
    student::dispid();
    d.display();
    cout<<"For s:\n";
    student::dispid();
    s.display();
    return 0;
}
