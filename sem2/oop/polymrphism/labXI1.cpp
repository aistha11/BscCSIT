#include <iostream>
#include <iomanip>
using namespace std;
class shape
{
    protected: float length,width;
    public:
        shape (float l,float b)
        {
           length=l;
           width=b;
        }
        virtual void Area ()
        {
           cout<<"Base Area\n" ;
        }
};
class rectangle:public shape
{
  public:
        rectangle (float f,float g):shape (f,g)
        {

        }
        void disp()
        {
            cout<<"Data of rectangle: \n";
            cout<<"Length="<<length<<"\nBreadth="<<width<<endl;
        }
};
class Square: public Shape //derived from base class shape
{
    public:
        Square(int a, int b): Shape(a, b)
        {

        }
        void area()
        {
            cout<<"Area of square: "<<length*width;
        }
};

int main()
{
    Shape *s; //base class pointer declaration.
    Rectangle R(7, 8);
    Square S(7, 7);
    R.disp();
    S.disp();
    s=&R;        //s points to derived class object R.
    s->area(); 	//invokes area() function of derived class Rectangle.
    s=&S;       	//s now points to derived class object S.
    s->area();  //invokes area() function of derived class Square.
    return 0;
}

