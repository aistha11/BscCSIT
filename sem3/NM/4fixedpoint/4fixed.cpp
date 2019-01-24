//to implement fixed point iteration method to find root of non linear equation
#include <stdio.h>
#include <conio.h>
#include <math.h>
int a[5],i;
float f(float x)
{
    return ((a[3]*pow(x,3)+a[2]*pow(x,2)+a[0])/(-1*a[1]));
}
int main ()
{
    float x0,x1,fx0,fx1,E,Ea;
    printf("Enter the value of:\n");
   for (i=3;i>=0;i--)
   {
       printf("a%d = ",i);
       scanf("%d",&a[i]);
   }
   printf("Enter initial guess: "); scanf("%f",&x0);
   printf("Estimate Error: "); scanf("%f",&E);
   i=0;
   while (1)
   {
       x1=f(x0);
       Ea=fabs((x1-x0)/x1);
       if (Ea<E || i==500)
       {
           printf("\n\t\tRoot is %f",x1);
           break;
       }
       else
       {
           x0=x1;
       }
       i++;
   }
   return 0;
}
