//to implement 2d reflecting along x=100
#include <iostream>
#include <iomanip>
#include <graphics.h>
#include <math.h>
using namespace std;
int main ()
{
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"");
    //vetices
    int x[4],y[4],xd[4],yd[4];
    cout<<"Enter vertices:\n";
    for(i=0;i<=3;i++)
    {
       cout<<"x"<<i<<" = ";cin>>x[i];
       cout<<"y"<<i<<" = ";cin>>y[i];
    }
    //reflecting vector
    int rx;
    cout<<"Enter the reflecting vector:\nx = ";
    cin>>rx;
    //y-axis
    line(rx,1,rx,500);
    //displaying poly
    int arr[]={x[0],y[0],x[1],y[1],x[2],y[2],x[3],y[3],x[0],y[0]};
    drawpoly(5,arr);
    outtextxy(x[2]+10,y[2]+70,"Original Object");
    //reflecting
    for (i=0;i<=3;i++)
    {
       xd[i]=2*rx-x[i];
       yd[i]=y[i];
       //reflected vertices
       cout<<"xd"<<i<<" = "<<xd[i];
       cout<<"\tyd"<<i<<" = "<<yd[i]<<endl;
    }
    //after reflection
    int arr1[]={xd[0],yd[0],xd[1],yd[1],xd[2],yd[2],xd[3],yd[3],xd[0],yd[0]};
    drawpoly(5,arr1);
    outtextxy(xd[2]+10,yd[2]+70,"Reflected Object");


    getch();
    closegraph();
    return 0;
}
