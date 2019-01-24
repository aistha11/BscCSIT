#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
char name[20];
int roll;
int marks;
};
void main ()
{
  struct student s[5];
  int i,h,x;
  clrscr ();
  for (i=0;i<5;i++)
  {
  printf ("Enter the contents of %d student:\n",i+1);
  printf ("Name:");
  gets(s[i].name);
  printf ("Roll:");
  scanf ("%d",&s[i].roll);
  printf ("Marks:");
  scanf ("%d",&s[i].marks);
  fflush(stdin);
  }
  h=s[0].marks;
  for (i=1;i<5;i++)
  {
    if (s[i].marks>h)
     h=s[i].marks;
    x=i;
  }

    printf ("The contents of student having highest marks is:\n");
    printf ("Name: %s\nRoll: %d\nMarks: %d\n",s[x].name,s[x].roll,s[x].marks);

  getch ();
}
