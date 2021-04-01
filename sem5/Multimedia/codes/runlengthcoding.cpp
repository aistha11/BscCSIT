#include <bits/stdc++.h>
using namespace std;
int printRLE(string str)
{
    int n = str.length(),count2=0;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        cout << str[i]<< count;
        count2=count2+2;
    }
    return count2;
}

int main()
{
    int a,i,p;
    string str;
    cout<<"Enter the string:";
    cin>>str;
    i=str.length();
    cout<<"\nLength before compression:"<<i;
    cout<<"\n\n";
    a=printRLE(str);
    cout<<"\n\nLength after compression:"<<a;
    cout<<"\n";
    return 0;
}
