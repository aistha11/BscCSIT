/*
Create a class called point with two data members x-coordinate , y- coordinate . Construct different member function
with the following operation
to input data for point objects
to show data of point objects
Member function to find distance between two points.


*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
class point
{
    int xcor,ycor;
    public:
    void getdata ();
    void display();
    float distance (point ,point);

};
int main ()
{
    point p1,p2;
    float dis;
    cout<<"Enter the first coordinates:\n" ;
    p1.getdata();
    p1.display();
    cout<<"Enter the second coordinates:\n" ;
    p2.getdata();
    p2.display();
    dis=p1.distance(p1,p2);
    cout<<"The distance is "<<dis<<endl;
    return 0;
}
void point::getdata()
{
   cin>>xcor>>ycor;
}
void point::display()
{
 cout<<"The coordinate is ("<<xcor<<","<<ycor<<")\n"  ;

}
float point::distance(point a,point b)
{
    int x=pow((b.xcor-a.xcor),2);
    int y=pow((b.ycor-a.ycor),2);
    float rs;
    rs=sqrt(x+y);
  return rs;
}
