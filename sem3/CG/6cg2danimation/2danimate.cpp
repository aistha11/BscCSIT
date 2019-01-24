//to create basic animation by implementing 2d transformation
#include <iostream>
#include <iomanip>
#include <graphics.h>
using namespace std;
void draw(int x)
{
    setcolor(WHITE);
    circle (x,100,15);
    line(500,60,500,115);
    setcolor(GREEN);
    rectangle(500,60,520,80);
    getch ();
    cleardevice();
}
int main ()
{
    int gd=DETECT,gm,i,xc,yc;
    initgraph(&gd,&gm,"");
    //setbkcolor(BLUE);
    draw(30);
    for (i=30;i<=500;i++)
    {
        draw(i);
    }
    draw(500);
    for (i=500;i>=30;i--)
    {
        draw(i);
    }
    getch ();
    closegraph();
}
