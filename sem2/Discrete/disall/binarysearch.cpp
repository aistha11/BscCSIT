#include<stdio.h>
#include<conio.h>
int binSearch(int arr[],int key,int l,int r);
int main()
{
	int arr[] = {11,12,13,14,15,16,17,18,19,20};
	int key=11;
	int pos = binSearch(arr,key,0,10);
	if(pos<0)
	printf("Key item not found");
	else
	printf("Key item found at location %d\n",pos);
	getch();
	return 0;
}
int binSearch(int arr[],int key, int l,int r)
{
if(l<r)
    {
	int m = (l+r)/2;
	if(arr[m]==key)
	return m;
	else if(key<arr[m])
	return binSearch(arr,key,l,m-1);
	else
	return binSearch(arr,key,m+1,r);
   }
}
