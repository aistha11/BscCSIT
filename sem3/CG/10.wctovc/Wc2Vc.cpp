#include <iostream>
#include <iomanip>
#include <graphics.h>
using namespace std;
int main ()
{
   int gd=DETECT,gm,i;
   initgraph(&gd,&gm,"");
   //window vertices
   float xwmn=100,xwmx=390,ywmn=100,ywmx=390;
    rectangle(xwmn,ywmx,xwmx,ywmn);
    int x[4],y[4],xd[4],yd[4];
    cout<<"Enter vertices:\n";
    for(i=0;i<=3;i++)
    {
       cout<<"x"<<i<<" = ";cin>>x[i];
       cout<<"y"<<i<<" = ";cin>>y[i];
    }

    int arr[]={x[0],y[0],x[1],y[1],x[2],y[2],x[3],y[3],x[0],y[0]};
    setfillstyle(7,3);
    drawpoly(5,arr);
    //viewport coordinates
   float xdmn=20,xdmx=90,ydmn=20,ydmx=90;
   rectangle(xdmn,ydmx,xdmx,ydmn);
    //window to viewport
    float sx,sy;
    sx=(xdmx-xdmn)/(xwmx-xwmn);
    sy=(ydmx-ydmn)/(ywmx-ywmn);
    cout<<"sx = "<<sx<<"sy = "<<sy<<endl;
    for(i=0;i<=3;i++)
    {
       xd[i]=x[i]*sx-xwmn*sx+xdmn;
       yd[i]=y[i]*sy-ywmn*sy+ydmn;
       cout<<"xd"<<i<<" = "<<xd<<"yd"<<i<<" = "<<yd<<endl;
    }
    int arr1[]={xd[0],yd[0],xd[1],yd[1],xd[2],yd[2],xd[3],yd[3],xd[0],yd[0]};
    setfillstyle(9,2);
    drawpoly(5,arr1);

   getch();
   closegraph();
   return 0;
}
