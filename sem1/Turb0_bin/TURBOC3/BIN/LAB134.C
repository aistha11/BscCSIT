#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <string.h>
void main ()
{
char name [10],ch;
int lot, price,i,tot=0;
FILE *fp;
clrscr ();
fp=fopen("lab134t.txt","w");
if (fp==NULL)
exit (0);
for (i=0;i<5;i++)
 {
 printf ("Enter name,age & salary: ");
 scanf ("%s %d %d",name,&lot,&price);
 fprintf (fp,"%s %d %d",name,lot,price);
 fflush (stdin);
 }
 fclose (fp);
 fp=fopen ("lab134t.txt","r");
 rewind (fp);
 if (fp==NULL)
 exit(0);
 for (i=0;i<5;i++)
 {
  tot+=price;
 }
 printf ("The total price is %d.",tot);
 fclose (fp);
 getch ();

}