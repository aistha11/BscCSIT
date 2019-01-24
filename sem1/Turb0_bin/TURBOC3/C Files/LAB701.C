#include <stdio.h>
#include <conio.h>
int large (int ,int ,int );
void main ()
{
int l,a,b,c;
clrscr ();
printf ("Enter three numbers:\n");
scanf ("%d%d%d",&a,&b,&c);
l=large(a,b,c);
printf ("The largest is %d.\n",l);
getch ();
}
int large (int x,int y,int z)
{
if (x>y&&x>z)
return x;
else if (y>x&&y>z)
return y;
else
return z;
}