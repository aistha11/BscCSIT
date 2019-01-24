#include <stdio.h>
#include <conio.h>
void main ()
{
int i,a=0,b=1,c=0;
clrscr ();
printf ("Fibonacci series upto term < 34 is\n");
for (i=1;c<34;i++)
  {
  a=b;
  b=c;
  c=a+b;
  printf ("%d, ",c);
  }
getch ();
}