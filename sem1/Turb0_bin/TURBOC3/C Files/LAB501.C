#include <stdio.h>
#include <conio.h>
void main ()
{
int i=1,l,n;
clrscr ();
printf ("Enter a number:\n");
scanf ("%d",&n);
l=n;
do
 {
 scanf ("%d",&n);
 if (n>l)
 l=n;
 i++;
 } while (i<5);
 printf ("The largest is %d",l);
 getch ();
}