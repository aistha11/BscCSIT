//to implement 2d scaling w.r.t point(xp,yp)
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
    //scaling vector
    int sx,sy,xp,yp;
    cout<<"Enter the scaling vector:\nsx = ";
    cin>>sx;
    cout<<"sy = ";cin>>sy;
    cout<<"Enter the pivot point:\nxp = ";
    cin>>xp;
    cout<<"yp = ";cin>>yp;
    //displaying poly
    int arr[]={x[0],y[0],x[1],y[1],x[2],y[2],x[3],y[3],x[0],y[0]};
    drawpoly(5,arr);
    outtextxy(x[2]+10,y[2]+70,"Original Object");
    //scaling
    for (i=0;i<=3;i++)
    {
       xd[i]=xp+sx*(x[i]-xp);
       yd[i]=yp+sy*(y[i]-yp);
        //scaled vertices
       cout<<"xd"<<i<<" = "<<xd[i];
       cout<<"\tyd"<<i<<" = "<<yd[i]<<endl;
    }
    //after scaling
    int arr1[]={xd[0],yd[0],xd[1],yd[1],xd[2],yd[2],xd[3],yd[3],xd[0],yd[0]};
    drawpoly(5,arr1);
    outtextxy(xd[2]+10,yd[2]+70,"Scaled Object");


    getch();
    closegraph();
    return 0;
}
