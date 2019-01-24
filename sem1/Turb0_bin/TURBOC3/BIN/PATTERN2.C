#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j;
clrscr ();
for (i=3;i>=1;i--)
	{
	for (j=1;j<=i;j++)
		{
		 printf ("*");
		}
	printf ("\n");
	}
getch ();
}