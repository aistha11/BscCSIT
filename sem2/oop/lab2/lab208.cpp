/*
WAP to convert int into char . Use the concept of inline function.
*/
#include <iostream>
#include <iomanip>

using namespace std;

inline char uchar (int );

int main()
{
     int n;
     cout<<"Enter integer:\n";
     cin>>n;
     cout<<"The corresponding character is "<<uchar(n);



    return 0;
}
inline char uchar (int x)
{
   return char(x);
}
