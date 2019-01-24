#include <stdio.h>
#include <conio.h>
void main ()
{
int a[3][3],i,j,d=0;
clrscr ();
printf ("Enter elements for matrix:\n");
for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
     {
     printf ("Enter data a%d%d: ",i+1,j+1);
     scanf ("%d",&a[i][j]);
     }
  }

printf ("Your matrix is:\n");
for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
     {
     printf ("%d ",a[i][j]);
     }
     printf ("\n");
  }

for (i=0;i<3;i++)
  {
  for (j=0;j<3;j++)
    {
     if (i==j)
     d=d+a[i][j];
    }
  }
printf ("The diagonal sum is %d.\n",d);
getch ();
}