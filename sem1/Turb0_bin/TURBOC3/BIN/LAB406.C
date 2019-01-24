#include <stdio.h>
#include <conio.h>
void main ()
{
int i,x,s=0,pc=0;
float a;
clrscr ();
printf ("Enter a number\n");
for (i=1;pc<5;i++)
	{
	 //printf ("Enter a number\n");
	 scanf ("%d",&x);
	 if (x>0)
		{
		pc=pc+1;
		s=s+x;
		}
	/*else
		printf ("Try again\n");*/
	}
a=s/5.0;
printf ("The average is %f",a);
getch ();
}