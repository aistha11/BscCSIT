#include <iostream>
#include <iomanip>
#include <malloc.h>
using namespace std;
struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
};

void addatbeg (struct dnode **pdlist, int num)
{
   struct dnode *temp;
   temp=(struct dnode *)malloc(sizeof(struct dnode));
   temp->prev=NULL;
   temp->data=num;
   temp->next=(*pdlist);
   if (*pdlist!=NULL)
        (*pdlist)->prev=temp;
   *pdlist=temp;
   cout<<"\n"<<num<<" is added at beginning.";
}
void display (struct dnode *dlist)
{
    cout<<"\nThe list is :\ndlist->";
    while(dlist!=NULL)
    {
        cout<<dlist->data<<"<-->";
        dlist=dlist->next;
    }
    cout<<"NULL\n";
}
void addatend (struct dnode **pdlist, int num)
{
   struct dnode *temp,*r;
   temp=(struct dnode *)malloc(sizeof(struct dnode));
   if(*pdlist == NULL)
   {
       temp->prev=NULL;
       temp->data=num;
       temp->next=NULL;
       *pdlist=temp;
   }
   else
   {
        r=*pdlist;
        while(r->next!=NULL)
        {
            r=r->next;
        }
        r->next=temp;
        temp->prev=r;
        temp->data=num;
        temp->next=NULL;
   }
}
int main ()
{
    struct dnode *dlist;
    dlist=NULL;
    addatbeg(&dlist,12);
    addatbeg(&dlist,5);
    addatbeg(&dlist,2);
    addatbeg(&dlist,1);
    display(dlist);
}
