//Lab no 3: Write a C program to test whether a given identifier is valid or not
#include<iostream>
#include<iomanip>
#include<ctype.h>
using namespace std;
// Returns true if the given input is identifier else false
bool isIdentifier(char a[])
{
    int flag = 0, i=1;
    if(isalpha(a[0]) || a[0]=='_')
        flag=1;
    else
        return flag;
    while(a[i]!='\0')
    {
        if(!isdigit(a[i]) && !isalpha(a[i]) && a[i]!= '_')
        {
            flag=0;
            break;
        }
        i++;
    }
    return flag;
}
int main()
{
    char a[10];
    cout<<"\n\tEnter an identifier: ";
    gets(a);
    if(isIdentifier(a))
        cout<<"\n\t"<<a<<" is valid identifier";
    else
        cout<<"\n\t"<<a<<" is not a valid identifier";
    return 0;
}
