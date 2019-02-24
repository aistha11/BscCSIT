#include <iostream>
#include <iomanip>
using namespace std;
void selection (int a[],int n)
{
    int s,c,temp;
    for (s=1;s<=4;s++)
    {
       for (c=s;c<=n-1;c++)
            {
               if(a[s-1]>a[c])
               {
                   temp=a[s-1];
                   a[s-1]=a[c];
                   a[c]=temp;
               }
            }
    }
}
int main ()
{
    int a[5]={9,7,10,6,4};
    int s;
    //before sort
    cout<<"Before Sorting \n";
    for (s=0;s<5;s++)
    {
       //cout<<"a"<<s<<" = "<<a[s]<<endl;
       cout<<a[s]<<endl;
    }
    //sorting
    selection(a,5);
    //after sort
    cout<<"\nAfter Sorting \n";
    for (s=0;s<5;s++)
    {
       //cout<<"a"<<s<<" = "<<a[s]<<endl;
       cout<<a[s]<<endl;
    }
    return 0;
}
