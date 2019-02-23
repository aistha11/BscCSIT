#include<stdio.h>
#include<conio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return(n*fact(n-1));
}
int main()
{
    int i,j,n,k;
    float v=0,p,xp,x[10],fx[10],fd[10],h,s;
    printf("enter point to be calculated and no.of points:\n");
    scanf("%f%d",&xp,&n);
    for(i=0;i<n;i++)
    {
        printf("enter x[%d] and fx[%d]\n",i,i);
        scanf("%f%f",&x[i],&fx[i]);
    }
    h=x[1]-x[0];
    s=(xp-x[0])/h;

    for(i=0;i<n;i++)
    {
        fd[i]=fx[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            fd[j]=(fd[j]-fd[j-1]);

        }
    printf("%f\n",fd[i]);
    }
    v=fd[0];
    for(i=1;i<n;i++)
    {
        p=1;
        for(k=1;k<=i;k++)
        {
            p=p*(s-k+1);
        }
        v=v+(fd[i]*p)/fact(i);
    }
    printf("The interpolation value=%f",v);
    getch();
}
