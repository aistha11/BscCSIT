#include <stdio.h>
#include <conio.h>
int power (int,int);
void main ()
{
int x,n,r;
clrscr ();
printf ("Enter the value of x and n for y=x^n.\n");
scanf ("%d%d",&x,&n);
r=power (x,n);
printf ("The value of y is %d",r);
getch ();
}
int power (int a,int b)
  {
  int i,p=1;
  for (i=1;i<=b;i++)
      {
      p=p*a;
      }
  return p;
  }