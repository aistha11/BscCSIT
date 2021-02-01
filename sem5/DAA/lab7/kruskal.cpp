#include <iostream>
#include <iomanip>

using namespace std;

int i,j,k,a,b,u,v,n,ne=1;
int mn ,mincost=0, cost[9][9], parent[9];
int find(int i)
{
    while(parent[i])
    {
        i=parent[i];
    }
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j] = i;
        return 1;
    }
    return 0;
}
int main()
{
    cout<<"\nEnter the no of vertices: ";
    cin>>n;
    cout<<"\nEnter the cost adjacency matrix:\n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }
    cout<<"\nThe Edges of minimum Cost Spanning Tree are\n\n";
    while(ne<n)
    {

        for(i=1,mn=999;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<mn)
                {
                    mn=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            cout<<"\n"<<ne++<<" edge("<<a<<","<<b<<") = "<<mn;
            mincost += mn;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    cout<<"\n\tMinimum cost = "<<mincost<<endl;
    return 0;

}

