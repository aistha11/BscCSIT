#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <stdlib.h>
#define SZ 5
using namespace std;
struct Stack
{
    int items[SZ];
    int top;
};

void push (struct Stack *ps, int ch);
int pop (struct Stack *ps);
void display (struct Stack s);
int Isempty (struct Stack S);
int IsFull (struct Stack S);
int topstack (struct Stack S);
int main ()
{
    struct Stack S;
    S.top=-1;
    int popeditem;
    push(&S,1);
    push(&S,2);
    push(&S,5);
    display(S);
    push(&S,3);
    push(&S,8);
    push(&S,9);
    display(S);
    popeditem=pop(&S);
    printf("\nThe poped item is %d\n",popeditem);
    display(S);
        return 0;
}

void push (struct Stack *ps, int ch)
{
    if (ps->top==SZ-1)
    {
        printf ("\nStack Overflow");
        return;
    }
    ps->items[++ps->top]=ch;
}
int pop (struct Stack *ps)
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
        printf ("\n%d",s.items[i]);

    }
}
int Isempty (struct Stack S)
{
    if (S.top==-1)
        return 1;
    else
        return 0;
}
int IsFull (struct Stack S)
{
    if (S.top==SZ)
        return 1;
    else
        return 0;
}
int topstack (struct Stack S)
{
    return S.top;
}
