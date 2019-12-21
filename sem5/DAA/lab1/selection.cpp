#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void selection (int a[],int n)
{
    int s,c,temp;
    for(s=1;s<=n-1;s++)
    {
        for(c=s;c<=n-1;c++)
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
    selection(a,n);
    printf("\nAfter Sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
