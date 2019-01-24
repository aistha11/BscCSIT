#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>
#define SZ 5
using namespace std;
struct Stack
{
    char items[SZ];
    int top;
};
int match (char op,char cl);
void push (struct Stack *ps, char ch);
char pop (struct Stack *ps);
void display (struct Stack s);
int Isempty (struct Stack S);
int main ()
{
    int i,valid=1;
    char symb,ch;
    struct Stack S;
    S.top=-1;
    char input[]="((a+b)*(c(+)d))";
    printf ("\n\t\tThe input is ");
    for (i=0;i<strlen(input);i++)
    {
        printf("%c",input[i]);
    }
    for (i=0;i<strlen(input);i++)
    {
        symb=input[i];
        if (symb=='(' || symb=='{' || symb=='[')
                push(&S,symb);
        if (symb==')' || symb=='}' || symb==']')
                if (Isempty(S))
                    valid=0;
                else
                {
                    ch=pop(&S);
                    if(!match(ch,symb))
                        valid=0;
                }
    }
    if (!Isempty(S))
        valid=0;
    if(valid==1)
        printf("\n\t\tThe input string contains balanced parenthesis\n\n");
    else
        printf("\n\t\tThe input string contains unbalanced parenthesis");
        return 0;
}

int match (char op,char cl)
{
    if (op=='(' && cl==')')
        return 1;
    else if (op=='{' && cl=='}')
        return 1;
    else if (op=='[' && cl==']')
        return 1;
    else
        return 0;
}
void push (struct Stack *ps, char ch)
{
    if (ps->top==SZ-1)
    {
        printf ("\nStack Overflow");
        exit(1);
    }
    ps->items[++ps->top]=ch;
}
char pop (struct Stack *ps)
{
    if(ps->top==-1)
    {
        printf ("\nStack Underflow");
        exit(1);
    }
    return (ps->items[ps->top--]);
}
void display (struct Stack s)
{
    int i;
    printf("\nCurrent Stack");
    for (i=s.top;i>=0;i--)
    {
        printf ("\n%c",s.items[i]);

    }
}
int Isempty (struct Stack S)
{
    if (S.top==-1)
        return 1;
    else
        return 0;
}
