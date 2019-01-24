#include <stdio.h>
#include <conio.h>
void main ()
{
int i,n,t,s=0;
clrscr ();
printf ("Enter the terms:\n");
scanf ("%d",&n);
for (i=0;i<n;i++)
 {
 t=i*i+1;
 s=s+t;

 }
printf ("The sum is %d",s);
getch ();
}