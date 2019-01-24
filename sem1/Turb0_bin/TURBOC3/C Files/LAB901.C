#include <stdio.h>
#include <conio.h>
void a();
int i=99;
void main ()
{
//int i=89;
clrscr ();
a();
printf ("\n%d",i);
getch ();
}
void a ()
{
printf ("%d",i);
}