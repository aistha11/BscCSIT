#include<stdio.h>
#include <conio.h>
void main()
{
    int num,r,sum,temp;

    for(num=100;num<=1000;num++){
	 temp=num;
	 sum = 0;

	 while(temp!=0){
	     r=temp%10;
	     temp=temp/10;
	     sum=sum+(r*r*r);
	 }
	 if(sum==num)
	     printf("%d ",num);
    }

    getch ();
}