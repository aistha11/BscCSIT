#include <stdio.h>
#include <conio.h>
int fib (int );
void main ()
{
int i,n;
clrscr ();
printf ("Enter no of terms:\n");
scanf ("%d",&n);
for (i=0;i<n;i++)
{
printf ("%d, ",fib (i));
}
getch ();

}
int fib (int f)
 {
 if (f<=0)
 return 0;
 else if (f==1)
 return 1;
 else
 return (fib (f-1)+fib (f-2));
 }