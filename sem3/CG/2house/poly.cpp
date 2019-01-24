#include <iostream>
#include <iomanip>
#include <graphics.h>


using namespace std;

int main()
{
    int gd,gm;
    gd=DETECT;
    initgraph(&gd,&gm,"");
    outtext("Ram");
    putpixel(400,400,WHITE);
    //4 vertices array {x0,x0,x1,y1,x2,y2,x0,y0}
    int arr[]={20,20,200,20,100,200,20,20};
    // setfillstyle (pattern,color); pattern= [0-11] color=[0-15]
    //sets the fill style & color of polygon
    setfillstyle(3,5);
    //fillpoly(4,arr);
    fillpoly(4,arr);
    getch();
    closegraph();
    return 0;
}
