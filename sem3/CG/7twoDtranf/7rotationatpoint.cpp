//to implement 2d rotation 200,200 250,200 220,350  200,350 20 400,200
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
    //rotation vector
    int r,xp,yp;
    cout<<"Enter the rotation vector:\nr = ";
    cin>>r;
    cout<<"xp = ";cin>>xp;
    cout<<"yp = ";cin>>yp;
    //displaying poly
    int arr[]={x[0],y[0],x[1],y[1],x[2],y[2],x[3],y[3],x[0],y[0]};
    drawpoly(5,arr);
    outtextxy(x[2]+100,y[2]+100,"Original Object");
    //rotating
    for (i=0;i<=3;i++)
    {
       xd[i]=xp+(x[i]-xp)*cos(r)-(y[i]-yp)*sin(r);
       yd[i]=xp+(x[i]-xp)*sin(r)-(y[i]+yp)*cos(r);
       cout<<"xd"<<i<<" = "<<xd[i];
       cout<<"\tyd"<<i<<" = "<<yd[i]<<endl;
    }
    //after translation
    int arr1[]={xd[0],yd[0],xd[1],yd[1],xd[2],yd[2],xd[3],yd[3],xd[0],yd[0]};
    drawpoly(5,arr1);
    outtextxy(xd[2]+100,yd[2]+100,"Rotated Object");
    //rotated vertices

    getch();
    closegraph();
    return 0;
}
