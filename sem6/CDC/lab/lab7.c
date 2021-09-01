//Lab no 7: Write a C program for constructing of LL (1) parsing
#include <stdio.h>
#include <string.h>
#include <process.h>
char s[20], stack[20];
int main()
{
    char m[5][6][4] = {"tb", " ", " ", "tb", " ", " ", " ", "+tb", " ", " ", "n", "n", "fc", " ", " ", "fc", " ", " ", " ", "n", "*fc", " a", "n", "n", "i", " ", " ", "(e)", " ", " "};
    int size[5][6] = {2, 0, 0, 2, 0, 0, 0, 3, 0, 0, 1, 1, 2, 0, 0, 2, 0, 0, 0, 1, 3, 0, 1, 1, 1, 0, 0, 3, 0, 0};
    int i, j, k, n, str1, str2;
    printf("\n Enter the input string: ");
    scanf("%s", s);
    strcat(s, "$");
    n = strlen(s);
    stack[0] = '$';
    stack[1] = 'e';
    i = 1;
    j = 0;
    printf("\nStack Input\n");
    printf("__________________\n");
    while ((stack[i] != '$') && (s[j] != '$'))
    {
        if (stack[i] == s[j])
        {
            i--;
            j++;
        }
        switch (stack[i])
        {
        case 'e':
            str1 = 0;
            break;
        case 'b':
            str1 = 1;
            break;
        case 't':
            str1 = 2;
            break;
        case 'c':
            str1 = 3;
            break;
        case 'f':
            str1 = 4;
            break;
        }
        switch (s[j])
        {
        case 'i':
            str2 = 0;
            break;
        case '+':
            str2 = 1;
            break;
        case '*':
            str2 = 2;
            break;
        case '(':
            str2 = 3;
            break;
        case ')':
            str2 = 4;
            break;
        case '$':
            str2 = 5;
            break;
        }
        if (m[str1][str2][0] == '\0')
        {
            printf("\nERROR");
            exit(0);
        }
        else if (m[str1][str2][0] == 'n')
            i--;
        else if (m[str1][str2][0] == 'i')
            stack[i] = 'i';
        else
        {
            for (k = size[str1][str2] - 1; k >= 0; k--)
            {
                stack[i] = m[str1][str2][k];
                i++;
            }
            i--;
        }
        for (k = 0; k <= i; k++)
            printf(" %c", stack[k]);
        printf(" \t\t");
        for (k = j; k <= n; k++)
            printf("%c", s[k]);
        printf(" \n ");
    }
    printf("\n SUCCESS");
    return 0;
}

/*
Output:
Enter the input string: i*i+i
Stack Input
__________________
$ b t i*i+i$
$ b c f i*i+i$
$ b c i i*i+i$
$ b c f * *i+i$
$ b c i i+i$
$ b +i$
$ b t + +i$
$ b c f i$
$ b c i i$
$ b $
SUCCESS
--------------------------------
*/
