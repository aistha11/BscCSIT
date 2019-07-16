#include <stdio.h>
#include <stdlib.h>
int main (int argc,char *argv[])
{
  printf("The number of arguement is : %d \n",argc);
  int i;
	for(i=1;i<argc;i++)
	{
		printf("argv[%d] = %s \n\n",i,argv[i]);
	}
   return 0;
}
