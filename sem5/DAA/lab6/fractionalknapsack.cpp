#include <iostream>
#include <iomanip>

using namespace std;

double wt[] = {1,3,5,6,3};

void greedyFracKnapSack(int W,int n)
{

    int i = 0;
    double x[n];
    for(i=0;i<n;i++)
    {
        x[i] = 0.0;
    }
    int tempW = W;
    for(i = 0;i<n;i++)
    {
        if(wt[i]>tempW)
        {
            break;
        }
        else
        {
            x[i]=1.0;
            tempW = tempW - wt[i];
        }
    }
    if(i<=n)
            x[i] = tempW / wt[i];
    cout<<"The fractional amount of item is: \n";
    for(int i=0;i<n;i++)
    {
        cout<<"\n\t x"<<i<<" = "<<x[i];
    }
}

int main()
{
    int W = 16;
    int n = 6;
    greedyFracKnapSack(W,n);
	return 0;
}
