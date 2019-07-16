#include <stdio.h>
#include <unistd.h>
int main ()
{
printf("Demonstration of getpid & getppid");
int pid,ppid;
pid=getpid();
ppid=getppid();
printf("The process id is %d",pid);
printf("The parent process id is %d",ppid);

}
