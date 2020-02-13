#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
void swap(int *x,int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}
void printRandoms(int arr[],int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++) {
        arr[i] = (rand() % (upper - lower + 1)) + lower;
        //printf("%4d",arr[i]);
    }

}
void select(int arr[],int k,int n)
{
    int i;
    for(i=0;i<=k;i++){
        int minIndex = i;
        int minValue=arr[i];
        for(int j = i+1;j<=n;j++){
            if(arr[j]<minValue){
            minIndex = j;
            minValue = arr[j];
            swap(&arr[i],&arr[minIndex]);
            }
        }

    }
    printf("\nThe %dth smallest is %d",k,arr[k]);
}
// Driver code
int main()
{
    int lower = 5, upper = 100, count = 10,k ;
    int arr[10];
    srand(time(0));
    cout<<"\nEnter the value of ith order: ";
    cin>>k;
    printRandoms(arr,lower, upper, count);
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("\nGiven array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    select( arr,k,count);

    return 0;
}
