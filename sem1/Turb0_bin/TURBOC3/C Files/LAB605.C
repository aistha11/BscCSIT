#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
int i,j,x,n;
float t,s=0.0,p=1.0,f;
clrscr ();
printf ("Enter the value of x & n.\n");
scanf ("%d%d",&x,&n);
for (i=1;i<=n;i++)
{
f=1.0;
for (j=1;j<=p;j++)
{
f=j*f;
}
t=(pow(-1,i-1)*(pow(x,p)/f));
s=s+t;
p=p+2;
}
printf ("The sum is %f",s);
getch ();
}