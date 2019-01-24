#include<iostream>
#include<iomanip>
##include <istream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

double apples;
double oranges;
double cherries;
double watermelon;
double wallet=1000;
float userchoice;

int main()
{

 while(wallet>=0)
 {
     cout<<"\n\t\tWELCOME TO OUR SHOP\n\n";
     cout<<"\t\tMenu\n\n";
     cout<<"1.\t\tApples\t\tRs300";
     cout<<"2.\t\tOranges\t\tRs200";
     cout<<"3.\t\tCherries\t\tRs400";
     cout<<"4.\t\tWatermelon\t\tRs500";
     cout<<"You have \n"<<apples<<"Apples\n"<<oranges<<"Oranges\n"<<cherries<<"Cherries\n"<<watermelon<<"Watermelon\n";
     cout<<"Your Available credit is "<<wallet<<endl;
     cout<<"What Do You Want To Buy??  ";
     cin>>userchoice;
     switch(userchoice)
     {
        case 1:
        apples++;
        wallet=wallet-300;
        break;
        case 2:
        oranges++;
        wallet=wallet-200;
        break;
        case 3:
        cherries++;
        wallet=wallet-400;
        break;
        case 4:
        watermelon++;
        wallet=wallet-500;
        break;
        default:
            cout<<"\n\n\t\tWrong choice...\n\n";

     }


 }


 cin.get();
 cin.get();
 return 0;
}
