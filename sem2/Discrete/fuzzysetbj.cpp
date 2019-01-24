#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    char set[5][10];
    float a[5],b[5];
    int i;
    cout<<"Enter the elements: \n";
    for (i=0;i<5;i++)
    {
        cin>>set[i];
    }
    cout<<"Enter membership function of set A: \n";
    for (i=0;i<5;i++)
    {
        cin>>a[i];
    }
     cout<<"Enter membership function of set B: \n";
    for (i=0;i<5;i++)
    {
        cin>>b[i];
    }
    cout<<"The Union is { ";
    for (i=0;i<5;i++)
    {

        cout <<max(a[i],b[i])<<"/";
        cout<<set[i]<<",";


    }
    cout<<" }\n";
     cout<<"The Intersection is { ";
    for (i=0;i<5;i++)
    {

        cout <<min(a[i],b[i])<<"/";
        cout<<set[i]<<",";
    }
    cout<<" }\n";
     cout<<"The complement of A is { ";
    for (i=0;i<5;i++)
    {
        cout <<1-a[i]<<"/";
        cout<<set[i]<<",";

    }
    cout<<" }\n";
     cout<<"The complement of B is {";
    for (i=0;i<5;i++)
    {

        cout <<1-b[i]<<"/";
        cout<<set[i]<<",";
    }
    cout<<" }\n";
    return 0;

}
