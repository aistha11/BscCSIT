//to implement 2d translation 10,10 200,10 200,300 10,200 100,0
#include <iostream>
#include <iomanip>
#include <graphics.h>
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
    //translation vector
    int tx,ty;
    cout<<"Enter the transltion vector:\ntx = ";
    cin>>tx;
    cout<<"ty = ";cin>>ty;
    //displaying poly
    int arr[]={x[0],y[0],x[1],y[1],x[2],y[2],x[3],y[3],x[0],y[0]};
    drawpoly(5,arr);
    outtextxy(x[2]+10,y[2]+20,"Original Object");
    //translating
    for (i=0;i<=3;i++)
    {
       xd[i]=x[i]+tx;
       yd[i]=y[i]+ty;
       cout<<"xd"<<i<<" = "<<xd[i];
       cout<<"\tyd"<<i<<" = "<<yd[i]<<endl;
    }
    //after translation
    int arr1[]={xd[0],yd[0],xd[1],yd[1],xd[2],yd[2],xd[3],yd[3],xd[0],yd[0]};
    drawpoly(5,arr1);
    outtextxy(xd[2]+10,yd[2]+20,"Translated Object");
    //translating vertices

    getch();
    closegraph();
    return 0;
}
