#include <iostream>
#include <iomanip>
#include <math.h>
#include <graphics.h>
using namespace std;
int main ()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int x0,y0,xn,yn,dx,dy,a,temp,k,x,y;
    cout<<"\n\t\tEnter end points: \n\t\tx0 = ";cin>>x0;
    cout<<"\t\ty0 = ";cin>>y0;
    cout<<"\t\txn = ";cin>>xn;
    cout<<"\t\tyn = ";cin>>yn;
    dx=abs(xn-x0);
    dy=abs(yn-y0);
    if ( (xn-x0<0 && yn-y0>0) || (xn-x0>0 && yn-y0<0) )
        a=-1;
    else
        a=1;
    if (dx>=dy)
    {
        if(xn<x0)
            {
               temp=x0;x0=xn;xn=temp;
               temp=y0;y0=yn;yn=temp;
            }
        x=x0;y=y0;
        putpixel(x,y,WHITE);
        cout<<"\n\t\tThe first plotted pixel is: ("<<x<<","<<y<<")";
        int P;
        P=2*dy-dx;
        cout<<"\n\t\tThe initial decision Parameter is: "<<P;
        cout<<"\n\t\tk\tP\t\t(x,y)";
        for (k=0;k<dx;k++)
        {

           if (P<0)
           {
               x++;
               putpixel(x,y,WHITE);
               cout<<"\n\t\t"<<k<<"\t"<<P<<"\t\t("<<x<<","<<y<<")";
               P=P+2*dy;

           }
           else
           {
               x++;
               y=y+a;
               putpixel(x,y,WHITE);
               cout<<"\n\t\t"<<k<<"\t"<<P<<"\t\t("<<x<<","<<y<<")";
               P=P+2*dy-2*dx;
           }


        }
    }
    else
        {
        if(yn<y0)
            {
               temp=x0;x0=xn;xn=temp;
               temp=y0;y0=yn;yn=temp;
            }
        x=x0;y=y0;
        putpixel(x,y,WHITE);
        cout<<"\n\t\tThe first plotted pixel is: ("<<x<<","<<y<<")";
        int P;
        P=2*dx-dy;
        cout<<"\n\t\tThe initial decision Parameter is: "<<P;
        cout<<"\n\t\tk\tP\t\t(x,y)";
        for (k=0;k<dy;k++)
        {
           if (P<0)
           {
               y++;
               putpixel(x,y,WHITE);
               cout<<"\n\t\t"<<k<<"\t"<<P<<"\t\t("<<x<<","<<y<<")";
               P=P+2*dx;

           }
           else
           {
               y++;
               x=x+a;
               putpixel(x,y,WHITE);
               cout<<"\n\t\t"<<k<<"\t"<<P<<"\t\t("<<x<<","<<y<<")";
               P=P+2*dx-2*dy;

           }


        }
    }
    getch();
    closegraph();
return 0;
}
