//to implement Digital Differential Analyzer (DDA) Algorithm
#include <iostream>
#include <graphics.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");
    int x0,y0,xn,yn,x,y,dx,dy,steplength,k;
    double xinc,yinc;
    cout<<"\n\t\tEnter the end points:\n\t\tx0 = ";
    cin>>x0;
    cout<<"\t\tyo = ";cin>>y0;
    cout<<"\t\txn = ";cin>>xn;
    cout<<"\t\tyn = ";cin>>yn;
    cout<<"\n\t\tThe endpoints are (x0,y0) = ("<<x0<<","<<y0<<") & (xn,yn)= ( "<<xn<<","<<yn<<" )\n";
    dx=xn-x0;
    dy=yn-y0;
    if (fabs(dx)>fabs(dy))
    {
       steplength=fabs(dx);
    }
    else
    {
       steplength=fabs(dy);
    }
    cout<<"\n\t\tThe steplength is "<<steplength;
    x=x0;y=y0;
    putpixel(x,y,WHITE);
    cout<<"\n\t\tThe plotted pixel is (x,y) = ( "<<x<<" , "<<y<<" )"<<endl;
    xinc=dx/steplength;
    yinc=dy/steplength;
    cout<<"\n\t\tk\t|\t(x,y)\n";
    cout<<"\t\t--------------------\n";
    for (k=1;k<=steplength;k++)
    {
        x=x+xinc;
        y=y+yinc;
        putpixel(round(x),round(y),WHITE);
        delay(100);
        cout<<"\t\t"<<k<<"\t|\t("<<x<<","<<y<<")\n";
    }
    getch();
    closegraph();
    return 0;
}
