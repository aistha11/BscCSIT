#include <stdio.h>
#include <conio.h>
void main ()
{
int i,b,e,r=1;
clrscr ();
printf ("Enter base\n");
scanf ("%d",&b);
printf ("Enter power to base\n");
scanf ("%d",&e);
for (i=1;i<=e;i++)
	{
	 r=r*b;
	}
printf ("The result is %d",r);
getch ();
}