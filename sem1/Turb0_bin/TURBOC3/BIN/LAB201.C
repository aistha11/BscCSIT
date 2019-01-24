#include <stdio.h>
#include <conio.h>
void main ()
{
int a,s,c;
clrscr ();
printf ("Enter a number\n");
scanf ("%d",&a);
s=a*a;
c=s*a;
	if (a%2==0)
	{
	printf ("Even:\nIt's square is %d\nIt's cube is %d\n",s,c);
	}
	else
	{
	printf ("Odd:\nIt's cube is %d\n",c);
	}
	getch ();
}