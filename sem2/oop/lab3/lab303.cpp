/*
write a function power() to raise a number m to a power n. The function takes double value for m and int value for n, and returns the
result . use a default value of 3 for n to make the function to calculate the cubes when the argument is omitted. Write a main that gets
the value of m and n from the user to test the function.
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int power (double, int =3);


int main()
{
    double m;int n,rs;
    cout<<"Enter the value of m and n \n";
    cin>>m>>n;
    cout<<"The result is "<<power(m);
    return 0;
}

int power (double a, int e)
{
    return pow(a,e);
}

