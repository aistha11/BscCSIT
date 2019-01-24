/*
Find the area of rectangle in which the length and width provided by the user and display the content. Make use of inline function.
*/
#include <iostream>
#include <iomanip>

using namespace std;

inline int area (int,int);


int main()
{
    int l,b,ar;
    cout<<"Enter l and b of rectangle:\n";
    cin>>l>>b;
    ar=area(l,b);
    cout<<"Area of rectangle is "<<ar;

    return 0;
}

inline int area (int x,int y)
{
    return x*y;
}
