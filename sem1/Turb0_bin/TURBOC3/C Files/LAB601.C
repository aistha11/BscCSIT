#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j,h,m,s=0;
clrscr ();
h=s;
for (i=1;i<=3;i++)
  {
  printf ("Enter marks:\n");
  s=0;
  for (j=1;j<=3;j++)
     {
     scanf ("%d",&m);
     s=s+m;
     if (s>h)
     h=s;
     }
  }
printf ("The highest is %d",h);
getch ();
}