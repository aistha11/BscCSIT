//lab 1 : Write  program  in  C  to  test  whether  given  entered  string  within  valid comment section or not.

#include<iostream>
#include<iomanip>
using namespace std;

bool isComment(char cmt[])
{
    int i = 2, a = 0;
    if(cmt[0] == '/')
    {
        if(cmt[1] == '/')
            return 1;
        else if(cmt[1] == '*')
        {
            for(i = 2; i <= 100; i++)
            {
                if(cmt[i] == '*' && cmt[i + 1] == '/')
                {
                    return 1;
                    a = 1;
                    break;
                }
                else
                    continue;
            }
            if(a == 0)
                return 0;
        }
        else
            return 0;
    }
    else
        return 0;
}
int main()
{
    char com[300];
    cout<<"\nEnter comment: ";
    gets(com);
    if(isComment(com))
        cout<<"It is a comment";
    else
        cout<<"It is not a comment";
    return 0;
}
