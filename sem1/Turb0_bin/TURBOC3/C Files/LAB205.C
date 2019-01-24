#include <stdio.h>
#include <conio.h>
//#include <math.h>
void main ()
{
int cp, sp, p,l;  /*cp=costprice sp=sellprice p=profit l=loss*/
float pp, lp;   /*pp=profit % and lp= loss % which can come in fraction*/
clrscr ();
printf ("Enter Cost price and Selling price\n");
scanf ("%d%d",&cp,&sp);
p=sp-cp;   /* ch to check the which is greater sp or cp*/
if (p>=1)
	{
	// printf ("Profit is Rs.%d\n",p);
	 pp=((p*100.0)/cp);
	 printf ("Profit is Rs.%d\nProfit percentage is %f %\n",p,pp);
	}
else
	{
	l=cp-sp;
	//printf ("The loss is Rs.%d\n",l);
	lp=((l*100.0)/cp);
	printf ("Loss is Rs.%d\nLoss percentage is %f %\n",l,lp);
	}
	getch ();
}