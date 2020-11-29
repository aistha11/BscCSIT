#include<stdio.h>
#include<conio.h>


void main()
{
    char text[100];
    int i = 2, a = 0;

    printf("\nWrite a C Program to Identify Whether a Given Line is a Comment or Not.");
    printf("\n\nEnter Text : ");
    gets(text);
    if(isComment(text))
        printf("It is a comment");
    else
        printf("It is not a comment");

    getch();
}

int isComment(char cmt[])
{
    int i = 2, a = 0;
    if(cmt[0] == '/')
    {
        if(cmt[1] == '/') {
            return 1;
        }
        else if(cmt[1] == '*')
        {
            for(i = 2; i <= 100; i++)
            {
                if(cmt[i] == '*' && cmt[i + 1] == '/')
                {
                    return 1;
                    a = 1;
                    break;
                }
                else {
                    continue;
                }
            }
            if(a == 0)
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;

    }
}
