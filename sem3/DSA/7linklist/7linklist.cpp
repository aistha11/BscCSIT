#include <iostream>
#include <iomanip>
#include <malloc.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void addatbeg (struct node **plist, int num)
{
    struct node *temp;
    temp=(struct node *)malloc (sizeof(struct node ));
    temp->data=num;
    temp->next=*plist;
    *plist=temp;
}
void display (struct node *r)
{
    cout<<"List->";
    while(r!=NULL)
    {
        cout<<r->data<<"->";
        r=r->next;
    }
    cout<<"NULL\n";
}
void addatend(struct node **plist, int num)
{
   struct node *temp,*r;
   temp=(struct node *)malloc(sizeof(struct node));
   temp->data=num;
   temp->next=NULL;
   r=*plist;
   if(r==NULL)
   {
       *plist=temp;
   }
   else
   {
       while(r->next!=NULL)
       {
           r=r->next;
       }
       r->next=temp;
   }
}
void addatpos (struct node **plist,int pos, int num)
{
    struct node *temp,*r;
   temp=(struct node *)malloc(sizeof(struct node));
   temp->data=num;
   r=*plist;
   int i;
   for(i=1;i<pos;i++)
   {
        if(r==NULL)
           {
               cout<<"\n\t\tInsufficient number of node.\n";
               return;
           }
        r=r->next;

   }
   temp->next=r->next;
   r->next=temp;
}
void delfrombeg (struct node **plist)
{
    struct node *temp;
    temp=*plist;
    if(temp==NULL)
    {
        cout<<"\n\t\tList is Empty.\n";
        return;
    }
    *plist=temp->next;
    free(temp);
}
void delfromend(struct node **plist)
{
    struct node *temp,*prev;
    temp=*plist;
    if(temp==NULL)
    {
        cout<<"\n\t\tList is Empty.\n";
        return;
    }
    else if (temp->next==NULL)
    {
        *plist=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
    }
    free(temp);
}
void delanode (struct node **plist,int num)
{
    struct node *temp,*prev;
    temp=*plist;
    if(temp==NULL)
    {
        cout<<"\n\t\tList is Empty.\n";
        return;
    }
    while(temp!=NULL)
    {
        if(temp->data!=num)
        {
            prev=temp;
            temp=temp->next;

        }
        else
        {
            if(temp==*plist)
            {
                *plist=temp->next;
            }
            else
            {
                prev->next=temp->next;
            }
            return;
        }
    }
    cout<<"\n\t\tNode Not Found.";
    free(temp);
}
void delatpos (struct node **plist,int num)
{
    struct node *temp,*prev;
    int i;
    temp=*plist;

        for(i=1;i<num;i++)
        {
            if(temp->next==NULL)
                {
                    cout<<"\n\t\tInsufficient node.\n";
                    return;
                }
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
    free(temp);
}
int main ()
{
    struct node *lists;
    lists=NULL;
    cout<<"\nAdding 5,10,25 at beginning\n";
    addatbeg(&lists,5);
    addatbeg(&lists,10);
    addatbeg(&lists,25);
    display(lists);
    cout<<"Adding 15 at end.\n";
    addatend(&lists,15);
    display(lists);
    cout<<"Adding 20 at position 3.\n";
    addatpos(&lists,3,20);
    display(lists);
    cout<<"Deleting From Beginning.\n";
    delfrombeg(&lists);
    display(lists);
    cout<<"Deleting From End.\n";
    delfromend(&lists);
    display(lists);
    cout<<"Deleting Node 10.\n";
    delanode(&lists,10);
    display(lists);
    cout<<"Deleting node at position 2\n";
    delatpos(&lists,2);
    display(lists);
    return 0;
}
