#include <stdio.h>
#include <conio.h>
void main ()
{
int x, y, temp;
clrscr ();
printf ("Enter the value of x and y\n");
scanf ("%d %d",&x,&y);
printf ("Before swapping \nx=%d\ny=%d\n",x,y);
temp=x;
x=y;
y=temp;
printf ("After swapping \nx=%d\ny=%d",x,y);
getch ();
}