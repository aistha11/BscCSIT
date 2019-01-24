/*
class=finder
data members= an integet array of size 10
function=getdata() to assign values, largest() to find largest number
*/
#include <iostream>
#include <iomanip>
//#include <string.h>

using namespace std;
class finder
{
    int arr[10];
    public:
        void getdata (int ar[]);
        void largest ();
};
int main ()
{
    finder f;
    int ar[10]={1,2,3,4,5,6,7};
    f.getdata(ar);
    f.largest();
    return 0;


}
void finder::getdata (int ar[])
        {
            int i;
            for (i=0;i<10;i++)
            {
                arr[i]=ar[i];
            }

        }
void finder::largest()
{
    int l,i=0;
    l=arr[i];
    for (i=0;i<10;i++)
    {
      if (arr[i]>l)
      l=arr[i];
    }
    cout <<"The largest value is "<<l<<".\n";
}
