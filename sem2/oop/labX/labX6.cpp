#include <iostream>
#include <iomanip>
using namespace std;
class shape
{
    protected:
    int area1;

  public:
  shape ()
  {
      area1=0;
  }


  void areaof ()
        {

            cout<<"The Area is "<<area1<<endl;
        }

};
class rectangle: public shape
{
    int length;
  int breadth;
  public:
        rectangle (int a,int b)
        {
            length=a;
      breadth=b;
      //area=length*breadth;
        }
        void area ()
        {
            area1=length*breadth;
        }


};
int main ()
{
    rectangle r(5,6);
    r.area();
    r.areaof();

    return 0;
}
