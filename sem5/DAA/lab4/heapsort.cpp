#include <iostream>
using namespace std;
void max_heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}
void build_max_heap(int arr[],int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    max_heapify(arr, n, i);
}
void heapSort(int arr[], int n)
{
    build_max_heap(arr,n);
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        max_heapify(arr, i, 0);
    }
}


void displayArray(int arr[], int n)
{
for (int i=0; i<n; ++i)
cout << arr[i] << " ";
cout << "\n";
}
int main()
{
int arr[] = {62, 19, 13, 56, 57, 34, 23, 87, 43, 22};
int n = 10;
cout << "Unsorted array is \n";
displayArray(arr, n);
heapSort(arr, n);
cout << "Sorted array is \n";
displayArray(arr, n);
}
