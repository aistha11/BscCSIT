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
void display (struct node *r,string s)
{
    cout<<s<<"->";
    while(r!=NULL)
    {
        cout<<r->data<<"->";
        r=r->next;
    }
    cout<<"NULL\n";
}
void addatend(struct node **plist, int num);
struct node* Add (struct node **list1,struct node **list2)
{
    struct node *r,*list3=NULL;
    r=*list1;
    while(r!=NULL)
    {
        addatend(&list3,r->data);
        r=r->next;
    }
    r=*list2;
    while(r!=NULL)
    {
        addatend(&list3,r->data);
        r=r->next;
    }
    return list3;
}
struct node* MergeSort (struct node **list1,struct node **list2)
{
    struct node *p=*list1,*q=*list2,*list3=NULL;
    while(1)
    {
        if(p==NULL)
           {
               while(q!=NULL)
               {
                    addatend(&list3,q->data);
                    q=q->next;
               }
               break;
           }

        if(q==NULL)
           {
               while(p!=NULL)
               {
                    addatend(&list3,p->data);
                    p=p->next;
               }
               break;
           }
        if(p->data < q->data)
           {
               addatend(&list3,p->data);
               p=p->next;
           }
       else if(p->data > q->data)
           {
               addatend(&list3,q->data);
               q=q->next;
           }
        else
        {
            addatend(&list3,p->data);
            p=p->next;
            q=q->next;
        }
    }
    return list3;
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
int main ()
{
    struct node *a=NULL,*b=NULL,*c,*d;
    cout<<"\nAdding 7,5,3,1 at beginning of list A.\n";
    addatbeg(&a,7);
    addatbeg(&a,5);
    addatbeg(&a,3);
    addatbeg(&a,1);
    display(a,"A");
    /*
    cout<<"\nAdding 5,6,7,8 at end of list B.\n";
    addatend(&b,5);
    addatend(&b,6);
    addatend(&b,7);
    addatend(&b,8);
    display(b,"B");
    */
    cout<<"\nAdding 9,8,6,2 at beginning of list B.\n";
    addatbeg(&b,9);
    addatbeg(&b,8);
    addatbeg(&b,6);
    addatbeg(&b,2);
    display(b,"B");
    cout<<"\n\t\tAdding A and B.\n";
    c=Add(&a,&b);
    display(c,"C");
    cout<<"\n\t\tMerging and Sorting A and B.\n";
    d=MergeSort(&a,&b);
    display(d,"D");
    return 0;
}
