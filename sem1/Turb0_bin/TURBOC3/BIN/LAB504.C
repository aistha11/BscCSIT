#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
int i,j,n,p=2,k=3;
float t,s=0;
clrscr ();
printf ("Enter number of terms:\n");
scanf ("%d",&n);
for (i=1;i<=n;i++)
  {
  j=i+1;
  t=pow(i,p)+pow(j,p)/k;
  s=s+t;
  k=k+1;
  }
printf ("The sum is %f\n",s);
getch ();
}