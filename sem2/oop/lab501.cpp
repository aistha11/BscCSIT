#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int i,j,m,n;
    int A[10][10],B[10][10],R[10][10];
    cout<<"Enter dimension for Addition:\n";
    cin>>m>>n;
    cout<<"Enter the elements for A\n";
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter a"<<i+1<<j+1<<": ";
            cin>>A[i][j];
        }
    }
     cout<<"\nEnter the elements for B\n";
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"Enter b"<<i+1<<j+1<<": ";
            cin>>B[i][j];
        }
    }
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            R[i][j]=A[i][j]+B[i][j];


        }

    }
    cout<<"\n The matrix A: \n";
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\t"<<A[i][j];


        }
        cout<<endl;
    }
    cout<<"\n The matrix B: \n";
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\t"<<B[i][j];


        }
        cout<<endl;
    }
    cout<<"\n A+B: \n";
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"\t"<<R[i][j];


        }
        cout<<endl;
    }
    return 0;

}


