//design a DFA for accepting a language l={a^nb^m | n mod 2=0 and m>=1}
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int transition (int q, char ch);
int main ()
{
    int q=0,i;
    char input[50];
    printf("Enter input: ");
    scanf("%s",&input);
    int l=strlen(input);
    for (i=0;i<l;i++)
    {
        q=transition(q,input[i]);
        if(q==4)
        {
            printf("\nThe string %s is rejected.",input);
            exit(0);
        }
    }
    //printf("The state q is %d",q);
    if(q==3)
            printf("\nThe string %s is accepted.",input);
    else
            printf("\nThe string %s is rejected.",input);
        return 0;
}
int transition (int q, char ch)
{
   switch (q)
   {
        case 0:
                q=((ch=='a')?1:3);
                /*if(ch=='a')
                    q=1;
                else
                    q=3;*/
                break;
        case 1:
                q=((ch=='a')?2:4);
                /*if(ch=='a')
                    q=2;
                else
                    q=4;*/
                break;
        case 2:
                q=((ch=='a')?1:3);
                /*if(ch=='a')
                    q=1;
                else
                    q=3;*/
                break;
        case 3:
                q=((ch=='a')?4:3);
                /*if(ch=='a')
                    q=4;
                else
                    q=3;*/
                break;
        default: break;

   }
   return q;
}

