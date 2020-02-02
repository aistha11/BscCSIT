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
int random(int a, int b)
{
    return rand()%(b-a+1)+a;
}
int randomized_partition(int a[],int p,int r)
{
    int i=random(p,r);
    int temp=a[r];
    a[r]=a[i];
    a[i]=temp;
    return partition(a,p,r);
}
void randomized_quicksort(int a[], int p, int r)
{
    if(p<r)
    {
        int q=randomized_partition(a,p,r);
        randomized_quicksort(a,p,q-1);
        randomized_quicksort(a,q+1,r);
    }
}
int main()
{
    int a[n], i;
    for(i=0;i<n;i++)
        a[i]=rand()%500;
        //a[i]=i;
    //printing array
    cout<<"Before Sorting\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    //sorting
    randomized_quicksort(a,0,n-1);
    //printing array after sorting
    cout<<"\nAfter Sorting\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

}
