#include<iostream>
#include<iomanip>
using namespace std;

int a,b,u,v,n,i,j,ne=1;
int visited[10] = {0}, mn,mincost = 0,cost[10][10];

int main()
{
    cout<<"\nEnter the number of nodes: ";
    cin>>n;
    cout<<"\nEnter the adjacency matrix:\n";
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            cin>>cost[i][j];
            if(cost[i][j] == 0)
                cost[i][j]=999;
        }
    visited[1]=1;
    cout<<endl;
    while(ne<n)
    {
       for(i=1,mn=999;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               if(cost[i][j]<mn)
               {
                   if(visited[i]!=0)
                   {
                       mn=cost[i][j];
                       a=u=i;
                       b=v=j;
                   }
               }
           }
       }
       if(visited[u]==0 || visited[v]==0)
       {
           cout<<"\nEdge "<<ne++<<":("<<a<<" "<<b<<") cost: "<<mn;
           mincost+=mn;
           visited[b]=1;
       }
       cost[a][b]=cost[b][a]=999;
    }
    cout<<"\n Minimum cost = "<<mincost;
    return 0;
}
