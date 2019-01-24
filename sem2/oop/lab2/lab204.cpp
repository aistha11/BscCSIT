/*
WAP to compute the area of a triangle, rectangle, square , and circle by overloadin the function area().
*/
#include <iostream>
#include <iomanip>
#include <math.h>
const float pi=3.14;

using namespace std;

float area (int ,int ,int);  //triangle with sides
float area (int ,int);    //rectangle
float area (int);   //square
float area (float pi,int r);  //circle

int main()
{
    int a,b,c;
    float ar;
    cout<<"Enter sides of triangle:\n";
    cin>>a>>b>>c;
    ar=area(a,b,c);
    cout <<"Area of triangle is "<<ar<<endl;
    cout<<"Enter l nd b of rectangle:\n";
    cin>>a>>b;
    ar=area(a,b);
    cout <<"Area of rectangle is "<<ar<<endl;
    cout<<"Enter length of square:\n";
    cin>>a;
    ar=area(a);
    cout <<"Area of square is "<<ar<<endl;
    cout<<"Enter radius of circle:\n";
    cin>>a;
    ar=area(pi,a);
    cout <<"Area of square is "<<ar<<endl;
    return 0;
}

float area (int x ,int y,int z)  //triangle with sides
{
   float s,ar;
   s=(x+y+z)/3.0;
   ar=(sqrt(s*(s-x)*(s-y)*(s-z)));
   return ar ;
}
float area (int l ,int b)   //rectangle
{
    return l*b;
}
float area (int l)   //square
{
   return  l*l;
}
float area (float pi,int r)  //circle
{
    return pi*r*r;
}
