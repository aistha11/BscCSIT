#include <stdio.h>
#include <conio.h>
#include <string.h>
void main ()
{
 char name[4][10],search [10];
 int i;
 clrscr ();
 printf ("Enter the name of 4 students:\n");
 for (i=0;i<4;i++)
 gets (name[i]);
 printf ("Enter the name to search:\n");
 gets (search);
 for (i=0;i<4;i++)
   {
    if (strcmp(search,name[i])==0)
      {
      printf ("Found\n");
      break;
      }
   }
   if (i==4)
   printf ("Not Found\n");
 getch ();
}