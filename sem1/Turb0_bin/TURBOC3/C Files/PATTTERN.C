#include <stdio.h>
#include <conio.h>
void main ()
{
int i,j,a=0;
clrscr ();
for (i=1;i<=4;i++)
  {a=0;
  for (j=1;j<=4;j++)
    {
    a=a+1;
    if (j>=i)
    printf ("%d",a);
    else
    printf (" ");
    }
  printf ("\n");
  }
getch ();
}