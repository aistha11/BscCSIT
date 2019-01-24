#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j,t,c=0;
clrscr ();
for (i=10;i<=100;i++)
  {
  t=i;
  c=0;
  for (j=1;j<=t;j++)
    {
    if (t%j==0)
    c=c+1;
    }
  if (c==2)
  printf ("%d, ",t);
  }
getch ();
}