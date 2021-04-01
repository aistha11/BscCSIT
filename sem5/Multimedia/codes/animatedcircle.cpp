#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#define n 10
using namespace std;

void draw(int cx, int cy, int r)
{
       int i,gap=0;
       for(i=0;i<n;i++)
       {
           setcolor(rand()%10);
            circle(cx,cy,r+gap);
            gap+=10;
       }
       delay(100);
       cleardevice();
}
int main()
{
   int gdriver=DETECT,gmode;
   initgraph(&gdriver, &gmode, "");
   int cx=300,cy=200,r=10;
   while(1)
   {
        draw(cx,cy,r);
   }
   getch();
   closegraph();
}
