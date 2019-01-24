#include <iostream>
#include <iomanip>
#include <math.h>
#include <graphics.h>
using namespace std;
void draw (int x,int y,int xc,int yc)
{
   putpixel(xc+x,yc+y,WHITE);
   cout<<" ("<<xc+x<<","<<yc+y<<")";
   putpixel(xc-x,yc+y,WHITE);
   cout<<", ("<<xc-x<<","<<yc+y<<")";
   putpixel(xc-x,yc-y,WHITE);
   cout<<", ("<<xc-x<<","<<yc-y<<")";
   putpixel(xc+x,yc-y,WHITE);
   cout<<", ("<<xc+x<<","<<yc-y<<")";
   putpixel(xc+y,yc+x,WHITE);
   cout<<", ("<<xc+y<<","<<yc+x<<")";
   putpixel(xc-y,yc+x,WHITE);
   cout<<", ("<<xc-y<<","<<yc+x<<")";
   putpixel(xc-y,yc-x,WHITE);
   cout<<", ("<<xc-y<<","<<yc-x<<")";
   putpixel(xc+y,yc-x,WHITE);
   cout<<", ("<<xc+y<<","<<yc-x<<")";
}
int main ()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int xc,yc,r,x=0,y=0,k=0;
    cout<<"\n\t\tEnter the center of circle:\n\t\txc = ";cin>>xc;
    cout<<"\t\tyc = ";cin>>yc;
    cout<<"\t\tEnter radius: ";cin>>r;
    cout<<"\t\tLet us assume that the circle is at origin. i.e (x0,y0)= ("<<x<<","<<y<<")\n";
    x=r;
    cout<<"\t\tWe obtain the point on the circumference. i.e (x0,y0)= ("<<x<<","<<y<<")\n";

    int P;
    P=1-r;
    cout<<"\t\tThe initial parameter is "<<P;
    cout<<"\n\t\tInitially Plotted Pixels Are: ";
    draw(x,y,xc,yc);
    cout<<"\n\t\tk\t\tP\t\t(x,y)\n";
    cout<<"\n\t\t"<<k<<"\t\t"<<P<<"\t\t";k++;
    while (x>=y)
    {
        if (P<0)
        {
            y++;
            draw(x,y,xc,yc);
            P=P+2*y+1;
            cout<<"\n\t\t"<<k<<"\t\t"<<P<<"\t\t";k++;
        }
        else
        {
            y++;
            x--;
            draw(x,y,xc,yc);
            P=P+2*y-2*x+1;
            cout<<"\n\t\t"<<k<<"\t\t"<<P<<"\t\t";k++;
        }
    }

    getch();
    closegraph();
    return 0;
}
