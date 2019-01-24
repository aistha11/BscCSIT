/*
class=room
datamembers=length, width
function=setdata to assign, display to display values, area to find and display area
program for R1,R2,R3
*/
#include <iostream>
#include <iomanip>

using namespace std;
class room
{
    int ln,bd;
    public:
        void setdata (int l,int b);
        void display ();
        void area ();

};
int main ()
{
    room r1,r2,r3;
    r1.setdata(10,5);
    cout<<"Room 1\n";
    r1.display();
    r1.area();
    r2.setdata(17,9);
    cout<<"Room 2\n";
    r2.display();
    r2.area();
    r3.setdata(15,7);
    cout<<"Room 3\n";
    r3.display();
    r3.area();
    return 0;
}
void room ::setdata(int l,int b)
{
    ln=l;
    bd=b;
}
void room::display()
{
    cout<<"The length is "<<ln<<" and breadth is "<<bd<<".\n";
}
void room::area()
{
   cout<<"The area is "<<ln*bd<<".\n";
}
