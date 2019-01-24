#include <stdio.h>
#include <conio.h>
#include <string.h>
void ustrcat (char [], char []);
void  main ()
{
 char a[20],b[20];
 clrscr ();
 printf ("Enter 1st string to concatenate:\n");
 gets (a);
 printf ("Enter 2nd string to concatenate:\n");
 gets (b);
 printf ("After concatenation.\n");
 ustrcat (a,b);
 getch ();

}
void ustrcat (char a[], char b[])
{
int i,j;
i=strlen(a);
for (j=0;b[j]!='\0';i++,j++)
  {
    a[i]=b[j];
  }
  a[i]='\0';
  puts (a);
}
