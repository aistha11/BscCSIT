#include <stdio.h>
#include <conio.h>

int fib(int n)
{
   if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}

int main ()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d",&n);
    //printf("The fibonacci of %d is %d",n,fib(n));
    for(i=0;i<n;i++)
        printf("%d ,",fib(i));
}
