#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;
int random(int a, int b)
{
    return rand()%(b-a+1)+a;
}

int main ()
{
    int a,q,xA, xB, yA,yB,kA,kB;
    cout<<"Enter a: ";cin>>a;
    cout<<"Enter q: ";cin>>q;
    xA = random(2,q);
    xB = random(2,q);
    yA = fmod(pow(a,xA),q);
    yB = fmod(pow(a,xB),q);
    kA = fmod(pow(yB,xA),q);
    kB = fmod(pow(yA,xB),q);
    cout<<"\nPrivate Key of Alice: "<<xA;
    cout<<"\nPrivate Key of Bob: "<<yB;
    cout<<"\nKey of Alice: "<<kA;
    cout<<"\nKey of Bob: "<<kB;
    return 0;
}
