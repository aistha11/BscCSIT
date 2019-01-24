#include <iostream>
#include <iomanip>
using namespace std;
//implement compound statement . Draw truth table (p->q)n(q->r)->(p->r)
int implies (int, int);
int and1 (int,int);
int main ()
{
    int x=0,i,j,k,a[20],b[20],c[20],d[20],e[20];
    for  (i=0;i<2;i++)
    {
        for  (j=0;j<2;j++)
            {
                for  (k=0;k<2;k++)
                    {
                        a[x]=implies(i,j);
                        b[x]=implies(j,k);
                        c[x]=and1(a[x],b[x]);
                        d[x]=implies(i,k);
                        e[x]=implies(c[x],d[x]);
                        x++;
                    }

            }

    }
    cout<<"p\tq\tr\tp->q\tq->r\tp->r\t(p->q)n(q->r)\t(p->q)n(q->r)->(p->r)\n"<<endl;
    x=0;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for (k=0;k<2;k++)
            {
                cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<a[x]<<"\t"<<b[x]<<"\t"<<d[x]<<"\t"<<c[x]<<"\t\t\t"<<e[x]<<endl;
                x++;
            }

        }

    }
    return 0;

}
int implies(int a, int b)
{
    int c;
    if (a==1&&b==0)
    c=0;
    else
    c=1;
    return c;
}
int and1(int a, int b)
{
    int c;
    if (a==1&&b==1)
    c=1;
    else
    c=0;
    return c;
}
