#include <stdio.h>
#include <conio.h>
int hcf (int , int );
void main ()
{
int a,b,r;
clrscr ();
printf ("Enter two numbers:\n");
scanf ("%d%d",&a,&b);
r=hcf(a,b);
printf ("The HCF is %d.",r);
getch ();
}
int hcf (int x,int y)
{
while (x!=y)
  {
  if (x>y)
  return (hcf(x-y,y));
  else
  return (hcf(x,y-x));
  }
return x;
}