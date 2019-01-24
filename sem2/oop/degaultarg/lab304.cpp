/*
write a function emprecord() to display name, age, address of an employee. The function takes three arguments; two string
 arguments for name and address, and one int argument for age and display the data . use default value "KATHMANDU" for address
 , to make the function to display when the argument is omitted. Write a main that gets the values from the user to test
 the function.
*/
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>
using namespace std;
void emprecord (char nm[],int ,char ad[]="KATHMANDU");

int main()
{
    char name[10];
    cout<<"Enter name: ";
    cin.get(name,10);
    int age;
    cout<<"Enter age: ";
    cin>>age;
    char adrs[10];
    cout<<"Enter address: ";
    cin.get(adrs,10);

    emprecord(name,age);
    return 0;
}
void emprecord (char nm[],int a,char ad[])
{
    cout<<"The employee detail is\n"<<"Name: "<<nm<<"\nAge: "<<a<<"\nAddress: "<<ad;
}

