#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
#define n 11
void selection(float a[])
{
    int s,c;
    float temp;
    for (s=1;s<=n-1;s++)
    {
       for (c=s;c<=n-1;c++)
            {
               if(a[s-1]>a[c])
               {
                   temp=a[s-1];
                   a[s-1]=a[c];
                   a[c]=temp;
               }
            }
    }
}
int main()
{
    float a[n],b[n],c[n],d[n],N,D_positive,D_negative,D,D_table;
    int s,i;
    cout<<"Enter value of array:\n";
    for (s=1;s<n;s++)
    {
       cin>>a[s];
    }
    cout<<"\nEnter value of N: "; cin>>N;
    cout<<"\nAfter sorting the array:";
    selection(a);
    for (s=1;s<n;s++)
    {
       cout<<"\t"<<a[s];
    }
    for(i=1;i<n;i++)
    {
        b[i]=i/N;
        c[i]=b[i]-a[i];
        d[i]=a[i]-(i-1)/N;
    }
    cout<<"\n\nThe compute table  is:";
    cout<<"\nRi\t\t";
    for(i=1;i<n;i++)
        cout<<a[i]<<"\t\t";
    cout<<"\ni/N\t\t";
    for(i=1;i<n;i++)
        cout<<b[i]<<"\t\t";
    cout<<"\ni/N-Ri\t\t";
    for(i=1;i<n;i++)
    {
        if(c[i]>=0)
            cout<<c[i]<<"\t\t";
        else
            cout<<"-"<<"\t\t";
    }
    cout<<"\nRi-(i-1)/N\t";
    for(i=1;i<n;i++)
    {
        if(d[i]>=0)
            cout<<d[i]<<"\t\t";
        else
            cout<<"-"<<"\t\t";
    }

    D_positive=c[1];
    for(i=2;i<n;i++)
    {
        if(c[i]>=D_positive)
            D_positive=c[i];
        else
            continue;
    }
    cout<<"\n\n"<<"D+ = "<<D_positive;

    D_negative=d[1];
    for(i=2;i<n;i++)
    {
        if(d[i]>=D_negative)
            D_negative=d[i];
        else
            continue;
    }
    cout<<"\n"<<"D- = "<<D_negative;

    if(D_positive>=D_negative)
        D=D_positive;
    else
        D=D_negative;
    cout<<"\n\n"<<"D = "<<D<<"\n";
    cout<<"\n\nEnter D_table value : "; cin>>D_table;
    if(D>=D_table)
        cout<<"\nSince D>=D_table. So, we reject h0 and accept h1 with conclusion that the hypothesis of no difference between the distribution of the generated numbers and the uniform distribution is rejected.\n";
    else
        cout<<"\nSince D<D_table. So, we accept h0 and reject h1 with conclusion that the hypothesis of no difference between the distribution of the generated numbers and the uniform distribution is not rejected.\n";
    return 0;
}
