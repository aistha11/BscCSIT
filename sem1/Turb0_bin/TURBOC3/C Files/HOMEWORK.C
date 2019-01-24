#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
char op;
int a,b,r;
clrscr ();
printf ("Enter first number: ");
scanf ("%d",&a);
printf ("Enter operator: ");
scanf (" %c",&op);
printf ("Enter second number: ");
scanf ("%d",&b);
switch (op)
{
case '+':
	r=a+b;
	printf ("Result is %d",r);
	break;
case '-':
	r=a-b;
	printf ("Result is %d",r);
	break;
case '*':
	r=a*b;
	printf ("Result is %d",r);
	break;
case '/':
	r=a/b;
	printf ("Result is %d",r);
	break;
}

getch ();
}