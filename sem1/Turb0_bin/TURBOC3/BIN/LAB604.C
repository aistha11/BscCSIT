#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
int i,j,x,n,sign=1;
float t,s=1.0,p=2.0,f=1.0;
clrscr ();
printf ("Enter the value of x & n.\n");
scanf ("%d%d",&x,&n);
for (i=1;i<n;i++)
{
f=1;
for (j=1;j<=p;j++)
{
f=j*f;
}
t=sign*pow(x,p)/f;
s=s+t;
p=p+2.0;
sign=sign*(-1);
}
printf ("The sum is %f",s);
getch ();
}