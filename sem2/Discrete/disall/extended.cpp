#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int n1,n2,a,b,q,x,y,lastx,lasty,temp,temp1,temp2,temp3;
    cout<<"Enter values for a and b:\n";
    cin>>n1>>n2;
    if (b>a)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    a=n1;
    b=n2;
    x=0;y=1;lastx=1;lasty=0;
    while (b!=0)
    {
      q=a/b;
      temp1=a%b;
      a=b;
      b=temp1;
      temp2=x;
      x=lastx-q*x;
      lastx=temp2;
      temp3=y;
      y=lasty-q*y;
      lasty=temp3;
    }

    cout<<"The extended euclidean of "<<n1<<" and "<<n2<<" is \n" ;
    cout<<a<<" = "<<lastx<<"*"<<n1<<"+"<<lasty<<"*"<<n2<<endl;
    return 0;
}
