#include <stdio.h>
#include <conio.h>
void main ()
{
int a[3][3],i,j,s=0,d=0;
clrscr ();
printf ("Enter elements for matrix:\n");
for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
     {
     printf ("Enter data: ");
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
     s=s+a[i][j];
     if (i==j)
     d=d+a[i][j];
    }
  }
printf ("The total sum is %d.\n",s);
printf ("The diagonal sum is %d.\n",d);
printf ("The transpose is: \n");
for (i=0;i<3;i++)
  {
  for (j=0;j<3;j++)
    {
    if (i==j)
    printf ("%d ",a[i][j]);
    else
    printf ("%d ",a[j][i]);
    }
    printf ("\n");
  }
//for identity or not
if (d==s&&s==3)
printf ("Identity");
else
printf ("Not Identity");
getch ();
}