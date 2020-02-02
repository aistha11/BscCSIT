#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

#define n 10

int partition(int a[],int p,int r)
{
    int x=a[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(a[j]<=x)
        {
            i++;
            //exchange(a[i],a[j]);
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int tmp=a[i+1];
    a[i+1]=a[r];
    a[r]=tmp;
    return i+1;
}
void quicksort(int a[], int p, int r)
{
    if(p<r)
    {
        int q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
int main()
{
    int a[n], i;
    for(i=0;i<n;i++)
        a[i]=rand()%20;
        //a[i]=i;
    //printing array
    cout<<"Before Sorting\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    //sorting
    quicksort(a,0,n-1);
    //printing array after sorting
    cout<<"\nAfter Sorting\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
