//illustrating the concept of data representation using high level programming language
//input a number i.e n
//express in octal
//express in hexadecimal
//express in binary
//compute 1's complement of n
//compute 2's complement of n
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
//#include <conio.h>
using namespace std;
void convt (int n)
{
    int i;
    for (i=31;i>=0;i--)
    {
       int k;
       k=(n>>i)&1;
       cout<<k;
    }
}
int main ()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    //for octal
    cout<<"\n\n\In octal : ";
    printf ("%o",n);
    //for hexadecimal
    cout<<"\n\nIn hexadecimal : ";
    printf ("%x\n",n);
        //for binary
    cout<<"\n\In Binary : ";
    convt(n);
    //for 1's complement of n
    cout<<"\n\n 1's complement of "<<n<<" : ";
    convt(~n);
    //for 1's complement of n
    cout<<"\n\n 2's complement of "<<n<<" : ";
    convt(~n+1);
    return 0;

}




