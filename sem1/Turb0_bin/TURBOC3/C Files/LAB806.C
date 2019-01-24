#include <stdio.h>
#include <conio.h>
void main ()
{
int x[5],i,s=0;
clrscr ();
printf ("Enter elements for array:\n");
for (i=0;i<5;i++)
{
printf ("Enter data: ");
scanf ("%d",&x[i]);
}
for (i=0;i<5;i++)
  {
   s=s+x[i];
  }
printf ("The sum is %d.",s);
getch ();
}