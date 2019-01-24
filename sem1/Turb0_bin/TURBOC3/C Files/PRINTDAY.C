#include <stdio.h>
#include <conio.h>
void main()
{
int a;
clrscr ();
printf ("Enter a number from 1 to 7\n");
scanf ("%d",&a);
if (a==1)
printf ("Sunday");
else if (a==2)
printf ("Monday");
else if (a==3)
printf ("Tuesday");
else if (a==4)
printf ("Wednesday");
else if (a==5)
printf ("Thursday");
else if (a==6)
printf ("Friday");
else if (a==7)
printf ("Saturday");
else
printf ("Wrong input");
getch ();
}
