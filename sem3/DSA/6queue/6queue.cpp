#include <iostream>
#include <iomanip>
#include <stdlib.h>
#define MAXQUEUE 5
using namespace std;
struct Queue
{
    int item[MAXQUEUE];
    int irear, ifront;
};
void Insert (struct Queue *pq, int val)
{
    if (pq->irear==MAXQUEUE-1)
    {
      pq->irear=0;
    }
    else
    {
      pq->irear++;
    }
    if (pq->irear==pq->ifront)
    {
        cout<<"\n\t\tQueue Overflow";
        exit(1);
    }
    pq->item[pq->irear]=val;
}
int Remove (struct Queue *pq)
{
     if (pq->irear==pq->ifront)
    {
        cout<<"\n\t\tQueue Underflow";
        exit(1);
    }

    if (pq->ifront==MAXQUEUE-1)
    {
      pq->ifront=0;
    }
    else
    {
      pq->ifront++;
    }
    return pq->item[pq->ifront];
}
bool IsEmpty (struct Queue *pq)
{
    return (pq->irear==pq->ifront);
}
void display (struct Queue pq)
{
    if (pq.ifront==pq.irear)
    {
        cout<<"\nD1\n";
     cout<<"\n\t\tThe Queue is Empty.";return;
    }

    cout<<"\n\t\tThe Queue is :\n ";
    int i=0;
    if (pq.irear>pq.ifront)
    {
        cout<<"\nD3\n";
        for(i=pq.ifront+1;i<=pq.irear;i++)
              cout<<"\n\t\t"<<pq.item[i];
    }
    else
    {
        cout<<"\nD4\n";
        for(i=0;i<MAXQUEUE;i++)
        {
            if(i>pq.ifront)
                cout<<"\n\t\t"<<pq.item[i];
            else if(i<=pq.irear)
                cout<<"\n\t\t"<<pq.item[i];
            else
                continue;
        }
    }

}
int main ()
{
    struct Queue q;
    int x,e;
    q.irear=q.ifront=MAXQUEUE-1;
    //display(q);
    Insert(&q,5);
    Insert(&q,10);
    //display(q);
    x=Remove(&q);
    cout<<"\n\t\tThe removed item is : "<<x;
    //system("cls");
    //system("Color 03");
    Insert(&q,15);
    Insert(&q,20);
    display(q);
    //Insert(&q,25);
    //Insert(&q,30);
     //system("cls");
     e=IsEmpty(&q);
     if(e==1)
        cout<<"\n\t\tThe Queue is Empty.";
    else
        cout<<"\n\t\tThe Queue is not Empty.";
    //system("Color 04");
    x=Remove(&q);
    cout<<"\n\n\t\tThe removed item is : "<<x<<endl;
    display(q);
    return 0;
}
