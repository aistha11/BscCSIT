#include <stdio.h>
#include <conio.h>
#include <string.h>
int i,l=0;
int ustrlen (char []);
void main ()
{
char name[20];
clrscr ();
printf ("Enter the name:\n");
gets (name);
l=ustrlen (name);
printf ("The length is %d.",l);
getch ();
}
int ustrlen (char x[])
{
for (i=0;x[i]!='\0';i++)
l++;
return l;
}