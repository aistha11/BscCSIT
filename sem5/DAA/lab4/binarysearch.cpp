#include <iostream>
#include <iomanip>
#include <stdlib.h>
#define n 100
using namespace std;
int BinarySearch(int a[],int key,int low, int high)
{
   int mid;
   if (low>high)
        return -1;
   mid=(low + high)/2;
   if (key==a[mid])
    return mid;
   else if (key<a[mid])
    return BinarySearch(a,key,low,mid-1);
   else
    return BinarySearch(a,key,mid+1,high);
}
int main()
{
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i+10;
    int low=0,high=n-1,pos,key;
    cout<<"\t\t";
    for(int i=0;i<n;i++)
            cout<<"\t"<<a[i];

    /*
    for(int i=0;i<n;i++)
    {
        pos=BinarySearch(a,a[i],low,high);
        if (pos==-1)
            cout<<"\n\t\tThe position of "<<a[i]<<" not found";
        else
            cout<<"\n\t\tThe position for "<<a[i]<<" is "<<pos;
    }*/
    cout<<"\n\t\tEnter the value of key: "; cin>>key;
    pos=BinarySearch(a,key,low,high);
    if (pos==-1)
        cout<<"\n\t\tThe position of "<<key<<" not found";
    else
    cout<<"\n\t\tThe position of "<<key<<" is "<<pos;


return 0;
}
