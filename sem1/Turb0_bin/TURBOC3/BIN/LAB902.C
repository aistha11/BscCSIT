#include <stdio.h>
#include <conio.h>
void display ();
void main ()
{
int i;
clrscr ();
for (i=1;i<=3;i++)
   {
   display ();
   }
getch ();
}
void display ()
{
static int a=0;
a++;
printf ("%d\n",a);
}