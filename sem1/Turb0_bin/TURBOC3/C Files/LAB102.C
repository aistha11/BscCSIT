#include <stdio.h>
#include <conio.h>
void main ()
{
int a;
float b;
char c;
clrscr ();
printf ("Enter int, float and char:\n");
scanf ("%d %f %c",&a,&b,&c);
printf ("Integer is %d\nFloat is %f\nCharacter is %c",a,b,c);
getch ();
}