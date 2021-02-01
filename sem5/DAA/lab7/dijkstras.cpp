#include <iostream>
#include <iomanip>

using namespace std;

#define infinity 999

void dij(int n, int v, int cost[10][10], int dist[100])
{
    int i ,u,ct,w,flag[10],mn;
    for(i=1;i<=n;i++)
    {
        flag[i]=0,dist[i]=cost[v][i];
        ct=2;
        while(ct<=n)
        {
            mn=99;
            for(w=1;w<=n;w++)
            {
                if(dist[w]<mn&&!flag[w])
                {
                    mn=dist[w],u=w;
                }
                flag[u]=1;
                ct++;
                for(w=1;w<=n;w++)
                {
                    if((dist[u]+cost[u][w] < dist[w])&&!flag[w])
                        dist[w] = dist[u] + cost[u][w];
                }
            }
        }

    }
}

int main ()
{
    int n ,v,i,j,cost[10][10],dist[10];
    cout<<"Enter the number of nodes: ";
    cin>>n;
    cout<<"Enter the cost matrix: \n";
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
                cost[i][j] = infinity;
        }
    }
    cout<<"\nEnter the source matrix: ";
    cin>>v;
    dij(n,v,cost,dist);
    cout<<"\nThe Shortest Path: \n";
    for(i=1;i<=n;i++)
    {
        if(i!=v)
            cout<<v<<" -> "<<i<<", cost = "<<dist[i]<<endl;
    }
    return 0;
}
