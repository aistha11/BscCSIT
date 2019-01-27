#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    int i,j,n;
    float x[100],fx[100],dd[100],xp,v=0,p;
    printf("\n\t\tEnter the value of n: ");scanf("%d",&n);
    printf("\n\t\tEnter the x[i]:\n");
    for(i=0;i<n;i++)
    {
        printf("\t\tx%d = ",i);scanf("%f",&x[i]);
    }
    printf("\n\t\tEnter the fx[i]:\n");
    for(i=0;i<n;i++)
    {
        printf("\t\tfx%d = ",i);scanf("%f",&fx[i]);
    }


    printf("\n\t\tEnter the value:\n\t\txp = ");scanf("%f",&xp);


    for(i=0;i<n;i++)
    {
        dd[i]=fx[i];
        printf("\t\t%f = %f",i,dd[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
            dd[j]=((dd[j]-dd[j-1])/(x[j]-x[j-i-1]));
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<i;j++)
            p=p*(xp-x[j]);
        v=v+p*dd[i];
    }
    printf("\n\t\tThe interpolation value at %f = %f",xp,v);
    getch();
}

