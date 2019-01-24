/*
WAP to find the cube of  given number using inline function.
*/
#include <iostream>
#include <iomanip>


using namespace std;

inline int cube (int);

int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"The cube is "<<cube(n);

    return 0;
}
inline int cube (int x)
{
    return x*x*x;
}
