#include<stdio.h>
#include<conio.h>
int power(int x, int n);
int main()
{
int x,n;
printf("Enter value of x and n: \n");
scanf("%d%d",&x,&n);
printf("%d^%d = %d",x,n,power(x,n));
getch();
return 0;
}
int power(int x,int n)
{
if(n==0)
return 1;
else
return x*power(x,n-1);
}
