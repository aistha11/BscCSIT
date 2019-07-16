#include <stdio.h>
#include <unistd.h>
int main ()
{
printf("Demonstration of fork system call");
fork();
fork();
printf("The statement after the fork system call");

}
