#include <stdio.h>
#include <conio.h>
void main()
{
int a,x,y;
clrscr ();
printf ("Enter a number\n");
scanf ("%d",&a);
x=a%3;
y=a%5;
//if (x!=0)
       //	printf ("It is not required number");
if (x==0&&y!=0)
	{printf ("It is divisibe by 3\n");}
else if (x==0&&y==0)
       {printf ("It is divisible by both\n");}
else
printf ("It is not required number\n");
getch ();
}