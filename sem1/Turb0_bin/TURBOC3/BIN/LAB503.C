#include <stdio.h>
#include <conio.h>
void main ()
{
int i,n,t=0,s=0;
clrscr ();
printf ("Enter the number of terms:\n");
scanf ("%d",&n);
for (i=1;i<=n;i++)
  {
  t=t+i;
  s=s+t;
  }
printf ("The sum is %d\n",s);
getch ();
}