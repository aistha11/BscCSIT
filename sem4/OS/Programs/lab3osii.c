#include <stdio.h>
#include <stdlib.h>
int main (int argc,char *argv[])
{
  printf("The number of arguement is : %d \n",argc);
  int i,s=0;
	for(i=0;i<argc;i++)
	{
		s+=atoi(argv[i]);
	}
   printf("The sum is %d \n\n",s);
   return 0;
}
