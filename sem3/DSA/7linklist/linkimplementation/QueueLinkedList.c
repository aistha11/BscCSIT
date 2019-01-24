#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

void insert(struct node **qfront, struct node **qrear, int num)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=NULL;

    if(*qrear==NULL)
    {
        *qfront=*qrear=temp;
    }
    else
    {
        (*qrear)->next=temp;
        *qrear=temp;
    }
}

void display(struct node *qfront, struct node *qrear)
{
    struct node *r=qfront;
    printf("\n\nQFront-->");
    while(r!=NULL)
    {
        printf("%d-->", r->data);
        r=r->next;
    }
    printf("END\n\n");
}

int qremove (struct node **qfront, struct node *qrear)
{
    struct node *temp;
    int x;
    if (*qfront==NULL)
    {
        printf("\n\t\tQueue UnderFlow\n");
        return (-1);
    }
    temp=*qfront;
    *qfront=(*qfront)->next;
    x=temp->data;
    free(temp);
    return x;
}

void main()
{
    struct node *qfront, *qrear;
    qfront=qrear=NULL;

    insert(&qfront, &qrear, 5);
    insert(&qfront, &qrear, 7);
    insert(&qfront, &qrear, 9);
    insert(&qfront, &qrear, 4);

    display(qfront, qrear);
    int x=qremove(&qfront, &qrear);
    printf("\nThe removed data is %d",x);
    display(qfront, qrear);
    x=qremove(&qfront, &qrear);
    printf("\nThe removed data is %d",x);
}
