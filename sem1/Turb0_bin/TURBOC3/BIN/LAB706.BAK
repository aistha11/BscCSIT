#include <stdio.h>
#include <conio.h>
void prime (int ,int );
void main ()
{
int a,b;
clrscr ();
printf ("Enter initial range:");
scanf ("%d",&a);
printf ("Enter final range:");
scanf ("%d",&b);
prime (a,b);
getch ();
}
void prime (int x,int y)
  {
  int i,j,c;
  for (i=x;i<=y;i++)
    {c=0;
    for (j=1;j<=i;j++)
      {
      if (i%j==0)
      c=c+1;
      }
      if (c==2)
      printf ("%d, ",i);
    }
  }