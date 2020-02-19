#include <iostream>
#include <iomanip>
#define m 2
#define n 2
using namespace std;
void markov_chain(float x[], float tm[m][n], float r[],int t)
{
    for(int i=1;i<=t;i++)
    {
        r[0]=x[0]*tm[0][0]+x[1]*tm[1][0];
        r[1]=x[0]*tm[0][1]+x[1]*tm[1][1];
        x[0]=r[0];
        x[1]=r[1];
    }
    cout<<"\nFinal result:\n";
    cout<<"\tx"<<t<<"[0] = "<<x[0]<<endl;
    cout<<"\tx"<<t<<"[1] = "<<x[1];
}

int main()
{
    float tm[m][n];
    cout<<"Enter transition matrix (tm): \n";
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            {
                cout<<"\t tm["<<i<<"]["<<j<<"] = ";
                cin>>tm[i][j];
            }

    float x[2],r[2]={0,0};
    cout<<"\nEnter x: \n";
    cout<<"\tx0[0] = ";cin>>x[0];
    cout<<"\tx0[1] = ";cin>>x[1];
    int t;
    cout<<"\nEnter t = ";cin>>t;
    markov_chain(x,tm,r,t);
    cout<<"\n";
    return 0;
}
