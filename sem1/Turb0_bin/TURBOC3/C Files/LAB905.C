#include <stdio.h>
#include <conio.h>
void main ()
{
int a[10][10],b[10][10],op[10][10],r1,c1,r2,c2,i,j,k;
clrscr ();
printf("Enter row for 1st matrix:\n");
scanf ("%d",&r1);
printf("Enter column for 1st matrix:\n");
scanf ("%d",&c1);
printf("Enter row for 2nd matrix:\n");
scanf ("%d",&r2);
printf("Enter column for 2nd matrix:\n");
scanf ("%d",&c2);
while (c1!=r2)
{
printf ("*Error* Matrix multiplication cannot be done.\n");
printf("Enter row for 1st matrix:\n");
scanf ("%d",&r1);
printf("Enter column for 1st matrix:\n");
scanf ("%d",&c1);
printf("Enter row for 2nd matrix:\n");
scanf ("%d",&r2);
printf("Enter column for 2nd matrix:\n");
scanf ("%d",&c2);
}
printf ("Enter elements for 1st matrix:\n");
for (i=0;i<r1;i++)
  {
    for (j=0;j<c1;j++)
     {
     printf ("Enter data a%d%d: ",i+1,j+1);
     scanf ("%d",&a[i][j]);
     }
  }

printf ("Your 1st matrix is:\n");
for (i=0;i<r1;i++)
  {
    for (j=0;j<c1;j++)
     {
     printf ("%d ",a[i][j]);
     }
     printf ("\n");
  }

printf ("Enter elements for 2nd matrix:\n");
for (i=0;i<r2;i++)
  {
    for (j=0;j<c2;j++)
     {
     printf ("Enter data a%d%d: ",i+1,j+1);
     scanf ("%d",&b[i][j]);
     }
  }

printf ("Your 2nd matrix is:\n");
for (i=0;i<r2;i++)
  {
    for (j=0;j<c2;j++)
     {
     printf ("%d ",b[i][j]);
     }
     printf ("\n");
  }

for (i=0;i<r1;i++)
  {
    for (j=0;j<c2;j++)
     {
     op[i][j]=0;
     }

  }

for (i=0;i<r1;i++)
  {
  for (j=0;j<c2;j++)
    {
     op[i][j]+=a[i][j]*b[i][j];
    }
  }
  printf ("Your result matrix is:\n");
for (i=0;i<r1;i++)
  {
  for (j=0;j<c2;j++)
    {
    printf ("%d ",op[i][j]);
    }
    printf ("\n");
  }
  getch ();
}



