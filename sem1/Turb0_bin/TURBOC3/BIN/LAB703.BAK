#include <stdio.h>
#include <conio.h>
float opr (float ,char , float );
void main ()
{
char op;
float r,a,b;
clrscr ();
printf ("Enter first operand:");
scanf ("%f",&a);
printf ("Enter operator:");
scanf (" %c",&op);
printf ("Enter second operand:");
scanf ("%f",&b);
r=opr(a,op,b);
printf ("The result is %f",r);
getch ();
}
float opr (float x,char o,float y)
  {
  float rt;
  switch (o)
    {
     case '+': rt=x+y;  break;
     case '-': rt=x-y;  break;
     case '*': rt=x*y;  break;
     case '/': rt=x/y;  break;
     default: printf ("Try Again\n");
    }
    return rt;
  }




