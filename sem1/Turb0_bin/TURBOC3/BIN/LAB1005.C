#include <stdio.h>
#include <conio.h>
void main ()
{
int a[15],n,i,j,t;
clrscr ();
printf ("Enter the value of n:\n");
scanf ("%d",&n);
printf ("Enter %d elements:\n",n);
for (i=0;i<n;i++)
scanf ("%d",/*&a[i]*/(a+i));
for (i=0;i<n-1;i++)
  {
  for (j=i+1;j<n;j++)
   {
    if /*(a[i]>a[j])*/(*(a+i)>*(a+j))
     {
      /* t=a[i];
       a[i]=a[j];
       a[j]=t;*/
       t=*(a+i);
       *(a+i)=*(a+j);
       *(a+j)=t;
      }
     }
  }

printf ("Data in ascending order are:\n");
for (i=0;i<n;i++)
  {
  printf ("%d, ",/*a[i]*/*(a+i));
  }
 getch ();
}