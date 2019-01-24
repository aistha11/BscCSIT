#include <stdio.h>
#include <conio.h>
#include <math.h>
void main ()
{
float a,b,c;
float disc,real,imag;
float R1,R2;
clrscr ();
printf ("Enter a b c for quadratic equation:\n");
scanf ("%f%f%f",&a,&b,&c);
disc=b*b-4.0*a*c;
real=-b/(2.0*a);
imag=sqrt(abs(disc))/(2.0*a);
switch (disc>0)
       {	case 1:
			R1=real+imag;
			R2=real-imag;
			printf ("Roots are real and distinct:\nRoot1=%f\nRoot2=%f\n",R1,R2);
			break;

	case 0:
		switch (disc<0)
		       {	case 1:
				printf ("Roots are imaginary:\nRoot1=%f+i%f\n",real,imag);
				printf ("Root2=%f-i%f\n",real,imag);
				break;
			case 0:
				R1=real;
				R2=R1;
				printf ("Roots are real and equal:\nRoot1=%f\nRoot2=%f\n",R1,R2);
				break;

			}

       }
       getch ();
}