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
        ustring operator +(ustring r)
        {
            char temp[20];
            strcpy(temp,strcat(name,r.name));
            return ustring(temp);

        }
        void disp()
        {
            cout<<"The string is "<<name<<endl;
        }
};
int main ()
{
    char str[10]="Sita";
    ustring s1,s2(str),s3;
    cout<<"For s1\n";
    s1.disp();
    cout<<"For s2\n";
    s2.disp();
    cout<<"After concatenate:\n";
    s3=s1+s2;
    s3.disp();
     return 0;
}
