#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
using namespace std;
bool isrepeat(char ct[])
{
    for(int i=0;ct[i]!='\0';i++)
        for(int j=0;j<26;j++)
        {
            if(i==j)
                continue;
            else if(ct[i]==ct[j])
                return true;
        }
    return false;
}
int main()
{
            char msg[20]={'\0'},cipher[20]={'\0'};
            int i,j,enter;
            char pt[26]={'\0'},ct[27]={'\0'};
            cout<<"\n\tEnter message: ";
            cin>>msg;

               do{
                    enter=0;
                    for(j=0;j<26;j++)
                        ct[j]='\0';
                    cout<<"\n\tEnter unique key from a to z to substitute:- \n";
                    for(i=0;i<26;i++)
                    {
                        pt[i]=i+97;
                        cout<<"\t"<<pt[i]<<" : ";
                        cin>>ct[i];
                        if(isrepeat(ct))
                        {
                           cout<<"\n\t!!!!Already Entered as "<<ct<<endl;
                           enter=1;
                           break;
                        }
                    }
               }while(enter==1);

            cout<<"\tThe key is "<<ct<<endl;

            //converting plain text into cipher text (encryption)
            for(i=0;i<strlen(msg);i++)
                for(j=0;j<26;j++)
                    if(pt[j]==msg[i])
                        cipher[i]=ct[j];

            cout<<"\n\tThe cipher text is: "<<cipher;

}
