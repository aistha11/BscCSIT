//on ubuntu only
#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main ()
{
	int pid=fork();
	if(pid==0)
	{
		printf("I am the child, my pid is %d\n",(int)getpid());
		printf("My parent's pid is %d\n",(int)getppid());
		sleep(11);
		printf("I am the child, my pid is %d\n",(int)getpid());
		printf("My parent's pid is %d\n",(int)getppid());
	}
	else
	{
		sleep(6);
		printf("I am the child, my pid is %d\n",(int)getpid());
		printf("My parent's pid is %d\n",(int)getppid());
		wait(0);
	}
}
