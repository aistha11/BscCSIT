#include <stdio.h>
#include <conio.h>
void main ()
{
int x[10],i,l,s;
clrscr ();
printf ("Enter elements for array:\n");
for (i=0;i<10;i++)
{
printf ("Enter data: ");
scanf ("%d",&x[i]);
}
l=x[0];
s=x[0];
for (i=0;i<10;i++)
  {
   if (x[i]>=l)
   l=x[i];
   if (x[i]<=s)
   s=x[i];
  }
printf ("The largest is %d.\n",l);
printf ("The smallest is %d.\n",s);
getch ();
}