#include <stdio.h>
#include <conio.h>
int power (int , int );
void main ()
{
int x,n,y;
clrscr ();
printf ("Enter x to the power n:\n");
scanf ("%d%d",&x,&n);
y=power (x,n);
printf ("The result is %d.",y);
getch ();
}

int power (int b,int p)
{
if (p==0)
return 1;
else
return (b*power(b,p-1));
}