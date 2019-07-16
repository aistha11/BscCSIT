#include <stdio.h>
#include <unistd.h>
int main ()
{
    printf("Demonstration of value returned by fork system call");
    int pid;
    pid=fork();
    if(pid!=0)
        printf("\nThe parent id is %d\n",pid);
    else
        {
            printf("\nThe child pid is %d",pid);
            printf("\nThe parent pid is %d",(int)getppid());
        }

}
