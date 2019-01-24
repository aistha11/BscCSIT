#include <stdio.h>
#include <conio.h>
void sec(int);
void main ()
{
clrscr ();
sec(10);
getch ();
}
void sec (int x)
{
if (x>0)
   {
   printf ("Sagarmatha Engineering College.\n");
   x--;
   sec(x);
   }
}