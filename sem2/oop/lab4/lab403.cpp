/*
class=account
datamembers=name, acc , balance
function
1).setdata to assign define inside class,
2). to deposit an amount define outside class
3).to withdraw an amount after the checking  the balance
4).display to display name , account no and balance
*/
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;
class account
{
    char name[100];
    float acc,bal;
    public:
        void setdata (char nm[],float ac,float ba)
        {
            strcpy(name,nm);
            acc=ac;
            bal=ba;

        }
        void deposit ();
        void withdraw ();
        void display ();

};
int main ()
{
    account a1;
    a1.setdata("Hari",11,1000);
    a1.display();


    a1.deposit();
    a1.withdraw();
    a1.display();
    return (0);

}
void account:: deposit ()
{
    int de;
    cout<<"Enter the amount to deposit: ";
    cin>>de;
    bal=bal+de;
    cout<<"Your current balance is "<<bal<<".\n";
}
void account:: withdraw ()
{
    int wtd;
    cout<<"\nEnter the amount to withdraw: ";
    cin>>wtd;
    if (wtd>bal)
    {
       cout<<"You donot have sufficient balance to withdraw.\n";
    }
    else
    {
       cout<<"You have withdraw "<<wtd<<"money from your account.\n";
       bal=bal-wtd;
    }
    cout<<"Your current balance is "<<bal<<".\n";
}
void account:: display ()
{
    cout<<"\nName: "<<name<<"\nAccount no: "<<acc<<"\nBalance : "<<bal<<".\n";
}

