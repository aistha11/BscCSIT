/*
class=employee
datamembers=name, age , salary
function=getdata to assign, display to display name and age
*/
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
class employee
{
    char name[100];
    int age,sal;
    public:
        void getdata (char nam[],int ag,int sal);
        void display ();

};


int main()
{
    employee e1;
    e1.getdata("Ram",25,3000);
    e1.display();

    return 0;
}
void employee ::getdata (char nam[],int ag,int sl)
{
   strcpy(name,nam);
   age=ag;
   sal=sl;
}
void employee::display()
{
    cout <<"The name is "<<name<<" and age is "<<age<<endl;
}
