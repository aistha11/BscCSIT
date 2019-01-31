#include <iostream>
#include <iomanip>
#include <malloc.h>
using namespace std;
struct node {
    int data;
    struct node *next;
};
void addatbeg(struct node **plist, int num)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=*plist;
    *plist=temp;
}
void display (struct node *r)
{
    cout<<"\n\t\tList -> ";
    while(r!=NULL)
    {
        cout<<r->data<<" -> ";
       r=r->next;
    }
    cout<<" NULL";
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
        *plist==NULL;
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
int main()
{
    struct node *lists=NULL;
    cout<<"\n\t\tAdding 5,15,25,35,45,55 at beginning.";
    addatbeg(&lists,5);
    addatbeg(&lists,15);
    addatbeg(&lists,25);
    addatbeg(&lists,35);
    addatbeg(&lists,45);
    addatbeg(&lists,55);
    display(lists);
    cout<<"\n\t\tDeleting From beginning.";
    delfrombeg(&lists);
    display(lists);
    cout<<"\n\t\tDeleting From end.";
    delfromend(&lists);
    display(lists);
    cout<<"\n\t\tDeleting a node 25.";
    delanode(&lists,25);
    display(lists);
    cout<<"\n\t\tDeleting At position 3";
    delatpos(&lists,3);
    display(lists);
    return 0;
}

