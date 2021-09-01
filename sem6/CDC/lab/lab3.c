// Lab no 3: Write a C program to test whether a given identifier is valid or not

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
    char a[10];
    int flag, i = 1;
    printf("\n Enter an identifier:");
    gets(a);
    if (isalpha(a[0]) || a[0] == '_')
        flag = 1;
    else
        printf("\n Not a valid identifier");
    while (a[i] != '\0')
    {
        if (!isdigit(a[i]) && !isalpha(a[i]) && a[i] != '_')
        {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 1)
        printf("\n Valid identifier");
    else
        printf("Not a valid identifier");
    return 0;
}

/*
Output:
Run 1:
Enter an identifier: area_12no
Valid identifier
Run 2:
Enter an identifier: _sum5
Valid identifier
Run 3:
Enter an identifier: var@num
Not a valid identifier
*/
