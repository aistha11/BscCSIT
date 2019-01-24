#include <stdio.h>
#include <conio.h>
int fact(int);
void main ()
{
int x,f;
clrscr ();
printf ("Enter the valude of n:\n");
scanf ("%d",&x);
f=fact(x);
printf ("Factorial of %d is %d.\n",x,f);
getch ();
}
int fact (int n)
{
if (n==0||n==1)
return 1;
else
return (n*fact(n-1));
}