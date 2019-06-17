//design and implement an NFA that accepts all strings that ends with 01
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
char input[]="11010101";
int accepted=0;
void transition (int q, int ch);
int main ()
{
    int q=0,ii=0;
    transition(q,ii);
    //printf("The state q is %d",q);
    if(accepted==1)
            printf("\nThe string %s is accepted.",input);
    else
            printf("\nThe string %s is rejected.",input);
        return 0;
}
void transition (int q, int ii)
{
   char ch=input[ii];
   if(ch=='\0'&& q==2)
        accepted=1;
    ii++;

                if(q==0&&ch=='0'){
                    transition(0,ii);
                    transition(1,ii);
                }
                if(q==0&&ch=='1')
                    transition(0,ii);
                if(q==1&&ch=='1')
                    transition(2,ii);
}
