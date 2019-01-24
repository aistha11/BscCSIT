#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class ustring
{
  char name[10];
  public:
        ustring ()
        {
            strcpy(name,"Ram");
        }

        ustring (char a[])
        {
           strcpy(name,a);
        }
        int operator ==(ustring r)
        {
            if (strcmp(name,r.name)==0)
            return 1;
            else
            return 0;

        }
        void disp()
        {
            cout<<"The string is "<<name<<endl;
        }
};
int main ()
{
    char str[10]="Ram";
    ustring s1,s2(str);
    cout<<"For s1\n";
    s1.disp();
    cout<<"For s2\n";
    s2.disp();
    if (s1==s2)
    cout<<"\nThe string are Same\n";
    else
    cout<<"The string are Different\n";
     return 0;
}
