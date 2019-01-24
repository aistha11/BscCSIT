#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
    int n,i,j;
    printf("Enter no of points: ");
    scanf("%d",&n);
    float x[n],f[n],lf,s=0,p;
    printf("Enter interpolating points: \n");
    for(i=0;i<n-1;i++)
    {
        printf("\t\tx%d = ",i);
        scanf("%f",&x[i]);
    }

    printf("Enter the functional value: \n");
    for(i=0;i<n-1;i++)
    {
        printf("\t\tf%d = ",i);
        scanf("%f",&f[i]);
    }
    printf("Enter the point: ");
    scanf("%f",&p);
    for(i=0;i<n-1;i++)
    {
        lf=1.0;
        for(j=0;j<n-1;j++)
        {
            if(i!=j)
                lf=lf*((p-x[j])/(x[i]-x[j]));
        }
        s=s+lf*f[i];
    }
    printf("\nOutput function value at %f is %f",p,s);
    return 0;
}
