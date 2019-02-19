#include <iostream>
#include <iomanip>
using namespace std;
void insertion (int a[],int n)
{
    int s,c,temp;
    for (s=1;s<=4;s++)
    {
        temp=a[s];
       for (c=s-1;c>=0 && a[c]>temp;c--)
            {
               a[c+1]=a[c];
            }
          a[c+1]=temp;
    }
}
int main ()
{
    int a[5]={15,20,10,25,50};
    int s;
    //before sort
    cout<<"\t\tBefore Sorting \n\t";
    for (s=0;s<5;s++)
    {
       //cout<<"a"<<s<<" = "<<a[s]<<"\t";
       cout<<"\t"<<a[s];
    }
    //sorting
    insertion(a,5);
    //after sort
    cout<<"\n\t\tAfter Sorting \n\t";
    for (s=0;s<5;s++)
    {
       //cout<<"a"<<s<<" = "<<a[s]<<"\t";
       cout<<"\t"<<a[s];
    }
    return 0;
}
