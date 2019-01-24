#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class ustring
{
    char a[];
public:
    ustring()
    {
    }
    ustring(char x[])
    {
        strcpy(x,a);
    }
    void display()
    {
        cout<<"The string is "<<a<<endl;
    }
    ustring operator + (ustring z)
    {
        a=strcat(a,z.a);
       return ustring(a);
    }

};
int main ()
{
    char s[10]={"Ram"};
    ustring st(s);
    st.display();
    return 0;
}
