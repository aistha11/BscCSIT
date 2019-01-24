#include <stdio.h>
#include <conio.h>
#include <string.h>
void main ()
{
char sen [20];
int i,c=0;
clrscr ();
printf ("Enter the sentence:\n");
gets (sen);
for (i=0;sen[i]!='\0';i++)
  {
   if (sen [i]=='a'||sen [i]=='e'||sen [i]=='i'||sen [i]=='o'||sen [i]=='u')
   c++;
  }
printf ("The total vowel are %d:\n",c);
getch ();
}