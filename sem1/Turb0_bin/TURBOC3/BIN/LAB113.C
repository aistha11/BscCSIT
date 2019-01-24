#include <stdio.h>
#include <conio.h>
#include <string.h>
void main ()
{
char word [20],b[20];
int i,l,j=0;
clrscr ();
printf ("Enter the word:\n");
gets (word);
printf ("After reverse:\n");
l=strlen (word);
for (i=l-1;i>=0;i--)
  {
  //b[k]=a[i];
  *(b+j)=*(word+i);
  j++;
  }
  *(b+j)='\0';
  puts (b);
getch ();
}