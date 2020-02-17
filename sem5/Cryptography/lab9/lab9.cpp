#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;

int random(int a, int b)
{
    return rand()%(b-a+1)+a;
}


int main()
{
    int a,q,xA,yA,k,K,M,c1,c2;
    cout<<"Enter q: ";
    cin>>q;
    cout<<"Enter a: ";
    cin>>a;
    xA = random(2,q);
    cout<<"The private key A (xA) is "<<xA;
    yA = fmod(pow(a,xA),q);
    cout<<"\nThe public key A (yA) is "<<yA;
    cout<<"\nEnter the message : ";
    cin>>M;
    //encryption
    cout<<"\n*************Encryption************";
    k = random(2,q);
    cout<<"\nThe random integer k = "<<k;
    K = fmod(pow(yA,k),q);
    c1 = fmod(pow(a,k),q);
    c2 = fmod((K*M),q);
    cout<<"\nThe cipher text (c1,c2) = ("<<c1<<","<<c2<<")";
    //decryption
    cout<<"\n*************Decryption************";
    K = fmod(pow(c1,xA),q);
    M = fmod((pow(c1,(q-xA-1))*c2),q);
    cout<<"\nThe decrypted text is "<<M;

}
