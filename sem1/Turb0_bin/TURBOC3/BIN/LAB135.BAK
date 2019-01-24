#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <string.h>
void main ()
{
char name [10],ch;
int age, sal;
FILE *fp;
clrscr ();
fp=fopen("lab135t.txt","w");
if (fp==NULL)
exit (0);
do
 {
 printf ("Enter name,age & salary: ");
 scanf ("%s %d %d",name,&age,&sal);
 fprintf (fp,"%s %d %d",name,age,sal);
 fflush (stdin);
 printf ("Do you want more?y/n  ");
 scanf ("%c",&ch);
 } while (ch!='n');
 fclose (fp);
 fp=fopen ("lab135t.txt","r");
 rewind (fp);
 if (fp==NULL)
 exit(0);
 printf ("The record of employee whose salary is less than 1000 is:\n");
 while ((fscanf (fp,"%s %d %d",name,&age,&sal))!=EOF)
 {
 if (sal<=1000)
 printf ("Name: %s\nage: %d\nsalary:%d\n ",name,age,sal);
 }
 fclose (fp);
 getch ();

}