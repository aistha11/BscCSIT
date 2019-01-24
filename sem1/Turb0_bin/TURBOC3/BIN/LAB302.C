#include <stdio.h>
#include <conio.h>
void main ()
{
int a;
clrscr ();
printf ("Enter a year\n");
scanf ("%d",&a);
if (a%4==0)
	{
	if (a%100==0)
		{
		if (a%400==0)
		printf ("%d is leap year\n",a);
		else
		printf ("%d is not leap year\n",a);

		}
	else
	printf ("%d is leap year\n",a);
	}
else
printf ("%d is not leap year\n",a);
getch ();
}