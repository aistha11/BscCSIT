/*********************************************************************************
 Statement - Find the ares of different geometrical figures such as circle, square, rectangle
 Programmer - Vineet Choudhary
 Written For - https://turboc.codeplex.com
 *********************************************************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	int    fig_code;
	float  side,base,length,bredth,height,area,radius;
	clrscr();

	printf("-------------------------\n");
	printf(" 1 --> Circle\n");
	printf(" 2 --> Rectangle\n");
	printf(" 3 --> Triangle\n");
	printf(" 4 --> Square\n");
	printf("-------------------------\n");

	printf("Enter the Figure code\n");
	scanf("%d",&fig_code);

	switch(fig_code)
	{
		case 1:  printf("Enter the radius\n");
					scanf("%f",&radius);
					area=3.142*radius*radius;
					printf("Area of a circle=%f\n", area);
					break;

		case 2:  printf("Enter the bredth and length\n");
					scanf("%f %f",&bredth, &length);
					area=bredth *length;
					printf("Area of a Reactangle=%f\n", area);
					break;

		case 3:  printf("Enter the base and height\n");
					scanf("%f %f",&base,&height);
					area=0.5 *base*height;
					printf("Area of a Triangle=%f\n", area);
					break;

		case 4:  printf("Enter the side\n");
					scanf("%f",&side);
					area=side * side;
					printf("Area of a Square=%f\n", area);
					break;

		default: printf("Error in figure code\n");
					break;

	}   /* End of switch */
	getch();

}   /* End of main() */
/*----------------------------------------------------
Output
Run 1
-------------------------
 1 --> Circle
 2 --> Rectangle
 3 --> Triangle
 4 --> Square
-------------------------
Enter the Figure code
2
Enter the bredth and length
2
6
Area of a Reactangle=12.000000

Run 2
-------------------------
 1 --> Circle
 2 --> Rectangle
 3 --> Triangle
 4 --> Square
-------------------------
Enter the Figure code
3
 Enter the base and height
5
7
Area of a Triangle=17.500000

------------------------------------------------------*/

