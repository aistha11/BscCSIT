//#include <iostream>
#include <graphics.h>
//#include <iomanip>

using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    outtext("House");
    /*
    putpixel(80,120,WHITE);//t
    putpixel(30,170,WHITE);//l
    putpixel(130,170,WHITE);//r
    putpixel(30,280,WHITE);//ld
    putpixel(130,280,WHITE);//rd
    putpixel(220,60,WHITE);//tu
    putpixel(270,100,WHITE);//td
    putpixel(270,200,WHITE);//rf
    */
    //side  t,l,ld,rd,r,t
    int t[]={80,120,30,170,30,280,130,280,130,170,80,120};
    setfillstyle(9,2);
    fillpoly(6,t);
    circle(80,160,9);
    //side door
    rectangle(65,220,90,280);
    //roof t,tu,td,r,t
    int r[]={80,120,220,60,270,100,130,170,80,120};
    setfillstyle(7,6);
    fillpoly(5,r);
    //face r,td,rf,rd,r
    int d[]={130,170,270,100,270,200,130,280,130,170};
    setfillstyle(3,9);
    fillpoly(5,d);
    //front door
    /*
    putpixel(195,200,RED);
    putpixel(215,185,RED);
    putpixel(195,242,RED);
    putpixel(215,230,RED);
    */
    int door[]={195,200,195,242,215,230,215,185,195,200};
    setfillstyle(9,5);
    fillpoly(5,door);
    //w1
    /*
    putpixel(150,185,RED);
    putpixel(150,210,RED);
    putpixel(175,170,RED);
    putpixel(175,195,RED);
    */
    int w1[]={150,185,150,210,175,195,175,170,150,185};
    setfillstyle(6,3);
    fillpoly(5,w1);
    //w2
    /*
    putpixel(230,150,RED);
    putpixel(230,175,RED);
    putpixel(255,135,RED);
    putpixel(255,160,RED);
    */
    int w2[]={230,150,230,175,255,160,255,135,230,150};
    setfillstyle(6,3);
    fillpoly(5,w2);
    //moon
    circle(500,30,29);
    //road
    line(10,400,450,150);
    line(50,470,500,220);
    //tree
    /*
    putpixel(350,180,RED);//1
    putpixel(350,140,RED);//2
    putpixel(320,160,RED);//3
    putpixel(340,130,RED);//4
    putpixel(320,140,RED);//5
    putpixel(330,120,RED);//6
    putpixel(320,125,RED);//7
    putpixel(370,100,RED);//9
    putpixel(335,80,RED);//8
    putpixel(360,105,RED);//10
    putpixel(385,110,RED);//11
    putpixel(360,120,RED);//12
    putpixel(390,115,RED);//13
    putpixel(360,135,RED);//14
    putpixel(360,175,RED);//15
    */
    int tree[]={350,180,350,140,320,160,340,130,320,140,330,120,320,125,340,95,370,98,360,105,380,105,360,120,390,115,360,135,360,175,350,180};
    setfillstyle(8,2);
    fillpoly(16,tree);
    getch();
    closegraph();
    return 0;
}
