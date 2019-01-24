#include <iostream>
#include <iomanip>
using namespace std;
void Tower(int n, char frompeg, char topeg, char auxpeg)
{
    if (n==1)
    {
       cout<<"\n\t\tMove disk "<<n<<" from "<<frompeg<<" to "<<topeg;
        return;
    }
    Tower(n-1,frompeg,auxpeg,topeg);
    cout<<"\n\t\tMove disk "<<n<<" from "<<frompeg<<" to "<<topeg;
    Tower(n-1,auxpeg,topeg,frompeg);
}
int main ()
{
    int n;
    char from='A',aux='C',to='B';
    cout<<"\n\t\tEnter the no of disks: ";
    cin>>n;
    cout<<"\n\t\tMoving from "<<from<<" to "<<to;
    Tower(n,from,to,aux);
    return 0;
}
