#include <stdio.h>
#include <conio.h>
int palin(int x);
void main ()
{
int n,rev;
clrscr ();
printf ("Enter a number:\n");
scanf ("%d",&n);
rev= (palin(n));
if (rev==n)
printf ("Palindrome.");
else
printf ("Not Palindrome.");
getch ();
}

int palin(int x)
  {
  int d,r=0;
  do
    {
    d=x%10;
    r=r*10+d;
    x=x/10;
    }while (x!=0);
    return r;
  }