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
void Reverse (struct node **plist)
{
    struct node *prev=NULL,*r,*temp;
    r=*plist;
    while (r!=NULL)
    {
        temp = r->next;
        r->next=prev;
        prev = r;
        r= temp;
    }
    *plist=prev;
}
int main ()
{
    struct node *lists;
    lists=NULL;
    cout<<"\nAdding 5,10,25,30 at beginning\n";
    addatbeg(&lists,5);
    addatbeg(&lists,10);
    addatbeg(&lists,25);
    addatbeg(&lists,30);
    cout<<"\nBefore Reverse.\n";
    display(lists,"lists");
    cout<<"\nAfter Reverse.\n";
    Reverse(&lists);
    display(lists,"lists");
    return 0;
}
