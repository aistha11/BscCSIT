#include <iostream>
#include <iomanip>
#include <graphics.h>
using namespace std;
void boundary4fill(int x,int y,int b_color,int f_color);
void boundary8fill(int ,int ,int ,int );
int main ()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    rectangle(30,70,90,130);
    boundary8fill(40,100,WHITE,RED);
    circle(300,200,30);
    putpixel(300,200,RED);
    boundary4fill(300,200,WHITE,BLUE);
    getch();
    closegraph();
}
void boundary4fill(int x,int y,int b_color,int f_color)
{
    int seed=getpixel(x,y);
    if(seed!=b_color && seed!=f_color)
    {
        putpixel(x,y,f_color);
        delay(10);
        boundary4fill(x+1,y,b_color,f_color);
        boundary4fill(x,y+1,b_color,f_color);
        boundary4fill(x-1,y,b_color,f_color);
        boundary4fill(x,y-1,b_color,f_color);
    }
}
void boundary8fill(int x,int y,int b_color,int f_color)
{
    int value=getpixel(x,y);
    if(value!=b_color && value!=f_color)
    {
        putpixel(x,y,f_color);
        delay(10);
        boundary8fill(x+1,y,b_color,f_color);
        boundary8fill(x,y+1,b_color,f_color);
        boundary8fill(x-1,y,b_color,f_color);
        boundary8fill(x,y-1,b_color,f_color);

        boundary8fill(x+1,y+1,b_color,f_color);
        boundary8fill(x-1,y+1,b_color,f_color);
        boundary8fill(x-1,y-1,b_color,f_color);
        boundary8fill(x+1,y-1,b_color,f_color);
    }
}

