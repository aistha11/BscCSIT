/*
Write a function using reference variables as arguements to swap the values of a pair of floating point numbers.
*/
#include <iostream>
#include <iomanip>

using namespace std;
void swap (float &,float &);

int main()
{
    float a=2.5,b=3.6;
    cout<<"Before swap\na="<<a<<"\nb="<<b;
    swap(a,b);
    cout<<"\nAfter swap\na="<<a<<"\nb="<<b;
    return 0;
}

void swap (float &x,float &y)
{
    float t;
    t=x;x=y;y=t;
}
