#include <iostream>
#include <iomanip>
using namespace std;
int BinarySearch(int a[],int x,int low, int high)
{
   int mid;
   if (low>high)
        return -1;
   mid=(low + high)/2;
   if (x==a[mid])
    return mid;
   else if (x<a[mid])
    return BinarySearch(a,x,low,mid-1);
   else
    return BinarySearch(a,x,mid+1,high);
}
int main()
{
    int a[]={3,4,6,7,9,10,13,17,22,25,27,31};
    int low=0,high=11,pos,x;
    cout<<"\n\t\tEnter the value of x: "; cin>>x;
    pos=BinarySearch(a,x,low,high);
    if (pos==-1)
        cout<<"\n\t\tThe position of "<<x<<" not found";
    else
    cout<<"\n\t\tThe position for "<<x<<" is "<<pos;


return 0;
}
