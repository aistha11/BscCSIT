#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
float a, b, c, R1, R2;
float disc, real, imag;
clrscr ();
printf ("Enter value a,b & c for ax^2+bx+c\n");
scanf ("%f %f %f",&a,&b,&c);
disc=b*b-4.0*a*c;
real=-b/(2.0*a);
imag=sqrt(abs(disc))/(2.0*a);
if (a==0||b==0||c==0)
	{
	printf ("Roots cannot be determined\n");
	}
else
	{
	 if (disc < 0)
		{
		 printf ("Roots are imaginary\n");
		 printf ("The Root1 is %f +i%f\n",real,imag);
		 printf ("The Root2 is %f -i%f\n",real,imag);
		}
	 else if (disc==0)
		{
		printf ("Roots are real and equal\n");
		R1=real;
		R2=R1;
		printf ("The Root1 is %f\nThe Root2 is %f\n",R1,R2);
		}
	 else if (disc > 0)
		{
		printf ("Roots are real and distinct\n");
		R1=real+imag;
		R2=real-imag;
		printf ("The Root1 is %f\nThe Root 2 is %f\n",R1,R2);
		}
	}
getch ();
}