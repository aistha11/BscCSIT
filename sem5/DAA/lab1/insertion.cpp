#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void insertion (int a[],int n)
{
    int s,c,temp;
    for(s=1;s<=n;s++)
    {
        temp=a[s];
        for(c=s;c>=0 && a[c]>temp;c--)
        {
            a[c+1]=a[c];
        }
        a[c+1]=temp;
    }
}
int main ()
{
    int n=100000;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        a[i]=rand()%500;
    }
    printf("Before Sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    insertion(a,n);
    printf("\nAfter Sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
