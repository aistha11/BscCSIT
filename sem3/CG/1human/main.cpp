//#include<iomanip>
//#include<iostream>
#include<graphics.h>
//using namespace std;
int main()
{
int gd ,gm;
gd=DETECT;
initgraph(&gd,&gm,"");
setbkcolor(GREEN);
setcolor(7);
outtext("Bijay Shrestha");
outtextxy(235,30,"Hello! I am Robot :) ");
circle(290,70,4);
line(290,75,290,90);
rectangle(250,90,330,175); //head          rectangle left,top,right,bottom
rectangle(240,115,250,150); //left ear
line(240,105,240,115);
circle(240,103,3);
rectangle(330,115,340,150);  //right ear
line(340,105,340,115);
circle(340,103,3);
circle(270,120,8); //first eye             circle(x,y,r)
circle(310,120,8);  //second eye
//nose
line(290,125,290,145); //draw a line  x1,y1,x2,y2
//mouth
rectangle(275,155,305,165);
line(280,155,280,165);
line(285,155,285,165);
line(290,155,290,165);
line(295,155,295,165);
line(300,155,300,165);
//neck
line(290,175,290,195);
line(275,175,275,195);
line(305,175,305,195);
//body
rectangle(230,195,350,295);
//left arm
rectangle(220,205,230,250);
rectangle(170,215,220,240);
line(160,223,170,223);
line(160,232,170,232);
rectangle(135,215,160,240);
line(143,205,143,215);
line(152,205,152,215);
rectangle(135,150,160,205);
//hand
putpixel(147,141,WHITE);
circle(147,141,9);
//right arm
rectangle(350,205,360,250);
rectangle(360,215,410,240);
line(410,223,420,223);
line(410,232,420,232);
rectangle(420,215,445,240);
line(428,240,428,250);
line(437,240,437,250);
rectangle(420,250,445,305);
//hand
putpixel(432,314,WHITE);
circle(432,314,9);
// left leg
line(260,295,260,305);
line(270,295,270,305);
rectangle(250,305,280,395);
line(260,395,260,400);
line(270,395,270,400);

//right leg
line(310,295,310,305);
line(320,295,320,305);
rectangle(300,305,330,395);
line(310,395,310,400);
line(320,395,320,400);
//foot
//left
rectangle(230,400,280,420);
//right
rectangle(300,400,350,420);

getch();

closegraph();

}
