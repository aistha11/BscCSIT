#include <stdio.h>
#include <conio.h>
void main()
{
char cs;
clrscr ();
printf ("Enter a letter\n");
scanf ("%c",&cs);
if (cs>='a'&&cs<='z')
{
printf ("It is lowercase\n");
}
else
printf ("It is uppercase\n");
getch ();

}