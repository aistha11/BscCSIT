#include <stdio.h>
#include <conio.h>
#include <string.h>
struct data { int day; int month; int year;};
struct employee
{
char name [10];
struct data dob;
int id;
};
void main ()
{
struct employee e;
clrscr ();
printf ("Enter the content of employee:\n");
printf ("Name: ");
gets(e.name);
printf ("Dob as (day month year):\n");
scanf ("%d%d%d",&e.dob.day,&e.dob.month,&e.dob.year);
printf ("ID:\n");
scanf ("%d",&e.id);
printf ("Employee content is :\n");
printf ("Name:%s\nDOB:%d/%d/%d\nID:%d",e.name,e.dob.day,e.dob.month,e.dob.year,e.id);
getch ();
}

