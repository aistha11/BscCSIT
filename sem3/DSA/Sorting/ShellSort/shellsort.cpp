#include <stdio.h>
#include <conio.h>
void shellsort (int x[],int n, int inc[],int numinc)
{
    int incr,j,k,span,y;
    for (incr=0;incr<numinc;incr++)
    {
        span=inc[incr];
        for (j=span;j<n;j++)
        {
            y=x[j];
            for (k=j-span;k>=0 && y<x[k];k-=span)
                x[k+span]=x[k];
            x[k+span]=y;
        }
    }
}
int ShellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
    return 0;
}
void display (int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main ()
{
    int arr[]={12,34,54,11,9},i,n,x[]={1,2,3,4,5,6,7};
    printf("Array Before Sorting:\n");
    display(arr,5);
    shellsort(arr,5,x,7);
    printf("\nArray After Sorting:\n");
    display(arr,5);
    return 0;
}
