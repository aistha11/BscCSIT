#include <stdio.h>
#include <conio.h>
void main ()
{
int i,c=0,x;
clrscr ();
printf ("Enter 10 integer number\n");
for (i=1;i<=10;i++)
	{
	scanf ("%d",&x);
	if (x>=0)
	c=c+1;
	}
printf ("There are %d positive numbers.",c);
getch ();
}

