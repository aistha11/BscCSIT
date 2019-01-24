#include <stdio.h>
#include <conio.h>

int n;
void larsm (int a[15]);
void main ()
{
int a[15],i,j,l=0,s=0;
clrscr ();
printf ("Enter the value of n:\n");
scanf ("%d",&n);
printf ("Enter %d elements:\n",n);
for (i=0;i<n;i++)
scanf ("%d",&a[i]);
larsm (a[15]);
printf ("Largest is %d\nSmallest is %d\n",l,s);
getch ();
}
void larsm (int a[15],int *p,int *q)
{
 int i;
 for (i=0;i<n;i++)
  {
    if (a[i]>=*p)
    *p=a[i];
    else
    *q=a[i];
  }
}
/*void larsm (int ,int ,int *,int *);
void main ()
{
int a=5,b=2,l=0,s=0;
clrscr ();
larsm (a,b,&l,&s);
printf ("%d\n%d",l,s);
getch ();
}
void larsm (int a, int b, int *p, int *q)
{
if (a>b)
  {
  *p=a;
  *q=b;
  }
else
  {
  *p=b;
  *q=a;
  }
} */