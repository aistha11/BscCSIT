#include <stdio.h>
#include <conio.h>
void main ()
{
int a,hr,temp,min,sec;
clrscr ();
printf ("Enter time in seconds\n");
scanf ("%d",&a);
hr=a/3600;
temp=a%3600;
min=temp/60;
sec=min%60;
printf ("The time is %d hour %d min %d sec\n",hr, min, sec);
getch ();
}