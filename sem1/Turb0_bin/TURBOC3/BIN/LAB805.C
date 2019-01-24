#include <stdio.h>
#include <conio.h>
#include <math.h>
int sum (int n);
void main ()
{
int t,s;
clrscr ();
printf ("Enter the no of terms:\n");
scanf ("%d",&t);
s=sum(t);
printf ("The sum is %d.",s);
getch ();
}
int sum (int n)
{
if (n==0)
return 0;
else
return (pow(-1,n+1)*n*n+sum(n-1));
}