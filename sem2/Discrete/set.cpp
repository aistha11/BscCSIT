#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main()
{
    int a[10],b[10],i,j,m,n;
    cout << "Enter the size of A\n";
    cin>>m;
    cout << "Enter the size of B\n";
    cin>>n;
    cout << "Enter the elements of A\n";
    for (i=0;i<m;i++)
    {
        cin>>a[i];
    }

    cout << "Enter the elements of B\n";
    for (j=0;j<n;j++)
    {
        cin>>b[j];
    }
    cout <<"The union of A and B is { ";
    i=0;j=0;
    while (i<m&&j<n)
    {
        if (a[i]<b[j])
        {
            cout <<a[i]<<",";
            i++;
        }
        else if (a[i]>b[j])
        {
            cout <<b[j]<<",";
            j++;
        }
        else
        {
            cout <<b[j]<<",";
            i++;
            j++;
        }
    }
    while (i<m)
    {
        cout<<a[i]<<",";
        i++;
    }
    while (j<n)
    {
        cout<<b[j]<<",";
        j++;
    }

     cout <<" }";
     cout<<"\nThe intersection of A and B is {";
    i=0;j=0;
    while (i<m&&j<n)
    {
        if (a[i]<b[j])

        {
            i++;
        }
        else if (a[i]>b[j])
        {
            j++;
        }
        else
        {
            cout <<b[j]<<",";
            i++;
            j++;
        }
    }


     cout <<" }"<<endl;
     cout<<"The symmetric difference is {";
     i=0;j=0;
     while(i<m&&j<n)
     {
          if (a[i]<b[j])

        {
            cout<<a[i]<<",";
            i++;
        }
        else if (a[i]>b[j])
        {
            cout<<b[i]<<",";
            j++;
        }
        else
        {
            i++;
            j++;
        }

     }
     while (i<m)
    {
        cout<<a[i]<<",";
        i++;
    }
    while (j<n)
    {
        cout<<b[j]<<",";
        j++;
    }
     cout <<" }"<<endl;
     cout<<"The cartesion product is   {";
     for (i=0;i<m;i++)
     {
         for (j=0;j<n;j++)
         {
             cout<<"{"<<a[i]<<","<<b[j]<<"}";
         }
     }
      cout <<" }"<<endl;

      //progrdam to implement floor and ceiling function
      float val,fval,cval;
      cout<<"Enter a float value: ";
      cin>>val;
      fval=floor(val);
      cval=ceil(val);
      cout <<"The floor value is "<<fval<<endl;
      cout <<"The ceiling value is "<<cval<<endl;
    return 0;
}

