//on ubuntu
#include <stdio.h>
#include<unistd.h>
int main ()
{
	int pid;
	pid=fork();
	if(pid==0)
	{for(;;)printf("Child");}
	else
	{for(;;)printf("Parent");}
}
