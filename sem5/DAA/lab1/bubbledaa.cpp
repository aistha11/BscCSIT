#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

void bubble (int a[],int n)
{
    int s,c,temp;
    for(s=1;s<=n;s++)
    {
        for(c=n;c>=s;c--)
        {
            if(a[c]<a[c-1])
            {
                temp=a[c];
                a[c]=a[c-1];
                a[c-1]=temp;
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
    bubble(a,n);
    printf("\nAfter Sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
