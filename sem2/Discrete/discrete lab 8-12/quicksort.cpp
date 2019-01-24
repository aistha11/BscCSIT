#include<stdio.h>
#include<conio.h>
#include<math.h>
void quickSort(int arr[],int l,int r);
int partition(int arr[],int l,int r);
int main()
{
	int arr[] = {1,0,10,8,3,6,4,7,2,5};
	int i;
	printf("Array before sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	quickSort(arr,0,9);
	printf("\nArray after sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	getch();
	return 0;
}
void quickSort(int arr[],int l,int r)
{
	if(l<r){

		int p = partition(arr,l,r);
		quickSort(arr,l,p-1);
		quickSort(arr,p+1,r);
	}
}
int partition(int arr[],int l,int r)
{
	int x,y,p,t;
	x=l;
	y=r;
	p=arr[l];
	while(x<y)
	{
		while(arr[x]<=p && x<=y)
		x++;
		while(arr[y]>p&& x<=y)
		y--;
		if(x<y)
		{
        t = arr[x];
		arr[x] = arr[y];
		arr[y]=t;
		}
	}
	t = arr[l];
	arr[l]=arr[y];
	arr[y]=t;
	return y;
}
