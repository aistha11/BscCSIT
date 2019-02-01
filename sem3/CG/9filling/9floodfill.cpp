#include <iostream>
#include <iomanip>
#include <graphics.h>
using namespace std;
void flood4fill(int x,int y,int o_color,int f_color);
void flood8fill(int ,int ,int ,int );
int main ()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    //rectangle(30,50,100,150);
    setcolor(GREEN);
    line(30,50,100,50);
    setcolor(BLUE);
    line(100,50,100,150);
    setcolor(YELLOW);
    line(100,150,30,150);
    setcolor(BROWN);
    line(30,150,30,50);
    flood8fill(40,100,BLACK,RED);
    circle(300,200,30);
    flood4fill(300,200,BLACK,BLUE);
    getch();
    closegraph();
}
void flood4fill(int x,int y,int o_color,int f_color)
{
    int seed=getpixel(x,y);
    if(seed==o_color)
    {
        putpixel(x,y,f_color);
        delay(1);
        flood4fill(x+1,y,o_color,f_color);
        flood4fill(x,y+1,o_color,f_color);
        flood4fill(x-1,y,o_color,f_color);
        flood4fill(x,y-1,o_color,f_color);
    }
}
void flood8fill(int x,int y,int o_color,int f_color)
{
    int value=getpixel(x,y);
    if(value==o_color)
    {
        putpixel(x,y,f_color);
        delay(1);
        flood8fill(x+1,y,o_color,f_color);
        flood8fill(x,y+1,o_color,f_color);
        flood8fill(x-1,y,o_color,f_color);
        flood8fill(x,y-1,o_color,f_color);

        flood8fill(x+1,y+1,o_color,f_color);
        flood8fill(x-1,y+1,o_color,f_color);
        flood8fill(x-1,y-1,o_color,f_color);
        flood8fill(x+1,y-1,o_color,f_color);
    }
}

