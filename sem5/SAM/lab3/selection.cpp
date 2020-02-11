#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define n 6

using namespace std;

void selection (float a[])
{

    float temp;
    for(int s=1;s<=n-1;s++)
    {
        for(int c=s;c<=n-1;c++)
        {
            if(a[s-1]>a[c])
            {
                temp=a[s-1];
                a[s-1]=a[c];
                a[c]=temp;
            }
        }
    }
}
int main ()
{

    float a[n] = {0.0,0.05,0.44, 0.93, 0.89, 0.14};
    float b[n], c[n],d[n];

    printf("Before Sorting:\n");
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    selection(a);
    printf("\nAfter Sorting:\n");
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    float N = 5;
    for(int i=1;i<=n;i++)
    {
       b[i]=i/N;
       c[i]=b[i]-a[i];
       d[i]=a[i]-(i-1)/N;
    }

    cout<<"\nRi\t";
    for(int i=1;i<n;i++)
        cout<<a[i]<<"\t";
    cout<<"\ni/N\t";
    for(int i=1;i<n;i++)
        cout<<b[i]<<"\t";
    cout<<"\ni/N-Ri\t";
    for(int i=1;i<n;i++)
        cout<<c[i]<<"\t";
    cout<<"\nRi-(i-1)/N\t";
    for(int i=1;i<n;i++)
        cout<<d[i]<<"\t";

}
