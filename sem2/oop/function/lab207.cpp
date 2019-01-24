/*
WAP to find the square root of given integer using inline.
*/
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

inline float squrt (int);


int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"The square root is "<<squrt(n)<<".\n";
    return 0;
}
inline float squrt (int s)
{
    return sqrt(s);
}
