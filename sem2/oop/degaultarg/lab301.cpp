/*
Write function interest() to calculate the interest. The Function should take a float value for principal P, int value for time T,
and float value for rate R. Use default value of 3.5 for rate R. Write a main () that gets the values of P and T from the user to
test the function .
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
float interest(float P,int t,float R=3.5);

int main()
{
    float p;
    int t;
    cout <<"Enter the value of P and T\n";
    cin>>p>>t;
    cout<<"The interest is "<<interest(p,t);
    return 0;
}

float interest(float P,int t,float R)
{
    float si;
    si=(P*t*R)/100.0;
    return si;
}
