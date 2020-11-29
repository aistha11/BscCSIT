//Lab 2: WAP to recognize e strings under 'a','abb','a*b+'
//L = {a, abb, b, bb, bbbbbbb......, aab, aaab, aaaaabbbbb, aaaa.......bbbbbbb......}

#include<iostream>
#include<iomanip>
using namespace std;

// Takes a input and return the final state
int isAccepted(char s[])
{
    int state = 0, i=0;
    char c;
    while(s[i]!='\0')
    {
        switch(state)
        {
            case 0:
                c = s[i++];
                if(c=='a')
                    state=1;
                else if(c=='b')
                    state=2;
                else
                    state=6;
                break;
            case 1:
                c = s[i++];
                if(c=='a')
                    state=3;
                else if(c=='b')
                    state = 4;
                else
                    state=6;
                break;
            case 2:
                c = s[i++];
                if(c=='a')
                    state=6;
                else if(c=='b')
                    state=2;
                else
                    state=6;
                break;
            case 3:
                c = s[i++];
                if(c=='a')
                    state=3;
                else if(c=='b')
                    state=2;
                else
                    state=6;
                break;
            case 4:
                c = s[i++];
                if(c=='a')
                    state=6;
                else if(c=='b')
                    state=5;
                else
                    state=6;
                break;
            case 5:
                c = s[i++];
                if(c=='a')
                    state=6;
                else if(c=='b')
                    state=2;
                else
                    state=6;
                break;
            default:
                return state;
                break;

        }
    }
    return state;
}

int main()
{
    char s[20];
    cout<<"\nEnter string: ";
    gets(s);
    int qn = isAccepted(s);
    cout<<"The final state is "<<qn<<endl;
    if(qn == 1)
        cout<<s<<" is accepted under rule 'a'.";
    else if(qn == 5)
        cout<<s<<" is accepted under rule 'abb'.";
    else if(qn == 2 || qn == 4)
        cout<<s<<" is accepted under rule 'a*b+'.";
    else
       cout<<s<<" is not accepted";
    return 0;
}
