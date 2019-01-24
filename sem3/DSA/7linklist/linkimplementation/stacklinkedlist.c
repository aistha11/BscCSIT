#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

void push(struct node **, int);
int pop(struct node **);
void display(struct node *);

void main()
{
    int x;
    struct node *stacktop=NULL;

    push(&stacktop, 5);
    push(&stacktop, 7);
    push(&stacktop, 6);

    display(stacktop);

    x=pop(&stacktop);
    printf("\nPoped Item=%d",x );

    display(stacktop);

}

void push(struct node **ptop, int num)
{
    struct node *temp;
    temp= (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=*ptop;
    *ptop=temp;
}

int pop(struct node **ptop)
{
    struct node *temp;
    int x;
    if(*ptop==NULL)
    {
        printf("\n Stack Underflow");
        return (-1);
    }
    temp=*ptop;
    *ptop=(*ptop)->next;
    x=temp->data;
    free(temp);
    return(x);
}

void display(struct node *st)
{
    struct node *r=st;

    printf("\nSTACKTOP");
    while (r!=NULL)
    {
        printf("\n%d", r->data);
        r=r->next;
    }
    printf("\nEND\n\n");
}
