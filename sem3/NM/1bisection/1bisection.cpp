//write a c program to implement bisection method of solving non linear equations
#include <stdio.h>
#include <conio.h>
#include <math.h>
int a[4],i;
float calc (float x)
{
    return (a[3]*pow(x,3)+a[2]*pow(x,2)+a[1]*pow(x,1)+a[0]);
}
int main ()
{
    float x1,x2,xm,fx1,fx2,fxm,E,Ea;
    printf ("\n\t\tEnter the value: \n");

    for (i=3;i>=0;i--)
    {
      printf("\t\ta%d = ",i);
      scanf("%d",&a[i]);
    }
    printf("\n\t\tError estimate: ");
    scanf("%f",&E);
        printf ("\n\t\tEnter the initial guess:\n");
        printf("\t\tx1 = ");
        scanf ("%f",&x1);
        printf("\t\tx2 = ");
        scanf ("%f",&x2);
    while(1)
    {
        fx1=calc(x1);
        fx2=calc(x2);
        if (fx1*fx2<0)
            break;
        else
            {
                printf("\n\t\tThe x1 and x2 doesnot bracket the root.\n");
                printf ("\n\t\tEnter another initial guess:\n");
                printf("\t\tx1 = ");
                scanf ("%f",&x1);
                printf("\t\tx2 = ");
                scanf ("%f",&x2);
            }
    }

    while (1)
    {
        fx1=calc(x1);
        fx2=calc(x2);
        xm=(x1+x2)/2.0;
        fxm=calc(xm);
        Ea=fabs((x2-x1)/x2);
            if (fxm==0)
            {
              printf("\t\tRoot = %f",xm);
              break;
            }
            else if (Ea<E)
            {
              printf("\t\tRoot = %f",xm);
              break;
            }
            else if (fx1*fx2<0)
            {
                x2=xm;
                fx2=fxm;
            }
            else
            {
                x1=xm;
                fx1=fxm;
            }
    }
    return 0;
}
