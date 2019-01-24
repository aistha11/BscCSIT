#include <stdio.h>
#include <conio.h>
#include <string.h>
void main ()
{
char name [5][10],temp [10];
int i,j;
clrscr ();
printf ("Enter 5 names:\n");
for (i=0;i<5;i++)
gets (name[i]);
for (i=0;i<4;i++)
  {
  for (j=i+1;j<5;j++)
    {
     if (strcmp(name[i],name[j])>0)
       {
       strcpy(temp,name[j]);
       strcpy(name[j],name[i]);
       strcpy(name[i],temp);
       }
    }
  }
  printf ("In ascending:\n");
 for (i=0;i<5;i++)
 {
 //puts(name[i]);
 puts(*(name+i));
 //printf ("\n");
 }
 getch ();
}