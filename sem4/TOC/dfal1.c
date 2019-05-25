//design a DFA that accepts all strings that ends with bb. (Alphabet E={a,b})
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
    char input[50]="abbabb";
    int q=0,i;
    printf(" The string ");
    for (i=0;i<strlen(input);i++)
    {
        /*if (q==0&&input[i]=='a')
            q=0;
        else if (q==0&&input[i]=='b')
            q=1;
        else if (q==1&&input[i]=='b')
            q=2;
        else if (q==1&&input[i]=='a')
            q=0;
        else if (q==2&&input[i]=='b')
            q=2;
        else if (q==2&&input[i]=='a')
            q=0;
        else
           break;
        */
        printf("%c",input[i]);
        /*
        if (q==0)
        {
            if (input[i]=='a')
                q=0;
            else
                q=1;
        }
        else if (q==1)
        {
            if (input[i]=='a')
                q=0;
            else
                q=2;
        }
        else if (q==2)
        {
            if (input[i]=='a')
                q=0;
            else
                q=2;
        }
        else
            break;
        */
        switch(q)
        {
        case 0:
            if (input[i]=='a')
                q=0;
            else
                q=1;
            break;

        case 1:
            if (input[i]=='a')
                q=0;
            else
                q=2;
                break;
        case 2:
            if (input[i]=='a')
                q=0;
            else
                q=2;
            break;

        default: break;
        }

    }
    if (q==2)
       printf(" is Accepted\n");
    else
        printf(" is Rejected\n");
    return 0;
}
