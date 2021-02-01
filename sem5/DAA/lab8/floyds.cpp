#include <iostream>
#include <iomanip>

using namespace std;

int mn(int a , int b)
{
    return a<b?a:b;
}

void floyds(int p[10][10], int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                i==j?p[i][j]=0:p[i][j]=mn(p[i][j],p[i][k]+p[k][j]);
            }
        }
    }
}

int main()
{
    int p[10][10], w,n,e,u,v,i,j;
    cout<<"\nEnter the number of vertices: ";
    cin>>n;
    cout<<"\nEnter the number of edges: ";
    cin>>e;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            p[i][j] = 999;
        }
    }
    for(i=1;i<=e;i++)
    {
        cout<<"Enter the end vertices of edge "<<i<<" with its weight: ";
        cin>>u;
        cin>>v;
        cin>>w;
        p[u][v] = w;
    }
    cout<<"\n Matrix of input data:\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
    floyds(p,n);
    cout<<"\nTransitive closure:\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\nThe Shortest paths are: \n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j)
                cout<<"\n <"<<i<<","<<j<<"> = "<<p[i][j];
        }
    }
    return 0;
}

