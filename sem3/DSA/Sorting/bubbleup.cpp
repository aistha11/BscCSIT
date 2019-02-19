#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int a[5]={8,7,3,12,2}, s,c,temp;
    //before sort
    cout<<"Before Sorting \n";
    for (s=0;s<5;s++)
    {
       //cout<<"a"<<s<<" = "<<a[s]<<endl;
       cout<<a[s]<<endl;
    }
    //sorting
    for (s=1;s<=4;s++)
    {
       for (c=4;c>=s;c--)
            {
               if(a[c]<a[c-1])
               {
                   temp=a[c];
                   a[c]=a[c-1];
                   a[c-1]=temp;
               }
            }
    }
    //after sort
    cout<<"\nAfter Sorting \n";
    for (s=0;s<5;s++)
    {
       //cout<<"a"<<s<<" = "<<a[s]<<endl;
       cout<<a[s]<<endl;
    }
    return 0;
}
