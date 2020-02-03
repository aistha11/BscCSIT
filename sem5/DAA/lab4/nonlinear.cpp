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

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
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

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
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
void printRandoms(int arr[],int lower, int upper,
                             int count)
{
    int i;
    for (i = 0; i < count; i++) {
        arr[i] = (rand() %
           (upper - lower + 1)) + lower;
        printf("%4d",arr[i]);
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
    printf("\n%d",arr[k]);
}
// Driver code
int main()
{
    int lower = 5, upper = 100, count = 10,k ;
    int arr[10];
    // Use current time as
    // seed for random generator

    srand(time(0));
    cout<<"enter the value of ith order"<<endl;
    cin>>k;
    printRandoms(arr,lower, upper, count);
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    select( arr,k,count);

    return 0;
}
