#include <stdio.h>
#include <conio.h>
void main ()
{
int i=1,t,a=0,b=1,c=0;
clrscr ();
printf ("Enter a term: ");
scanf ("%d",&t);
/*a=0;
b=1;
c=0;*/
for (i=1;i<=t;i++)
	{
	printf ("%d, ",c);
	a=b;
	b=c;
	c=a+b;
	}
getch ();
}