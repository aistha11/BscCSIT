#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
float phy, com, math,Av;
clrscr ();
printf ("Enter marks of Physics, computer and math\n");
scanf ("%f%f%f",&phy,&com,&math);
Av=((phy+com+math)/3.0);
printf ("The average marks is %f",Av);
getch ();
}