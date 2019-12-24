#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<iomanip>
#define n 100
using namespace std;
int main()
{
   int gdriver=DETECT,gmode;
   initgraph(&gdriver, &gmode, "");
   int cx=300,cy=200,r=10,i;
   for(i=0;i<n;i++)
   {
       setcolor(rand()%10);
       circle(cx,cy,r);
       r=r+1;
       delay(100);
       cleardevice();
   }
   getch();
   closegraph();
}
