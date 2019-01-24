#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    int poly[6],n,r,i,j,q[6];
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("Enter the Coefficients:\n");
   for (i=n;i>=0;i--)
   {
       printf("Coeff a%d = ",i);
       scanf("%d",&poly[i]);
   }
   printf("Enter the value of constant (x-r): \n");
    scanf("%d",&r);
    q[0]=poly[n];
    for (i=1;i<=n;i++)
    {
        q[i]=(q[i-1]*r)+poly[n-i];
        printf("\n%d = %d * %d + %d",q[i],q[i-1],r,poly[i]);
    }
    printf("\nThe Coefficients of Quotients are: \n");
   for (i=0;i<n;i++)
   {
       printf("\nCoeff b%d = %d",i,q[i]);
   }
   printf("\nThe Remainder is :  %d\n",q[n]);
}
