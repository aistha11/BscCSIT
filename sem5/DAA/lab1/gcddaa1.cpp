#include <stdio.h>
#include <conio.h>
int gcd (int a, int b)
{
    int r=a%b;
    if(r==0)
            return b;
    else
        return gcd(b,r);

}
int main ()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("The GCD of %d and %d is %d",a,b,gcd(a,b));
}
