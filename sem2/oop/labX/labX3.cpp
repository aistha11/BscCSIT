#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class person
{
  char name [20];
  int age;
  char address [50];
  public:
        void getdata (char nm[],int a,char adr[])
        {
            strcpy(name,nm);
            age=a;
            strcpy(address,adr);
        }
        void display()
        {
           cout<<"Name: "<<name<<"\nAge: "<<age<<"\nAddress: "<<address<<endl;
        }
};
class employ: public person
{
   int sal;
   char compname [20];
   public:
            void setdata (int s, char cnm [])
            {
               sal=s;
               strcpy(compname,cnm);
            }
            void show ()
            {
                cout<<"Salary: "<<sal<<"\nCompany name: "<<compname<<endl;
            }
};
int main ()
{
    employ e;
    char n[]={"Ram"};
    char a[]={"Kusunti"};
    char c[]={"AI"};
    e.getdata(n,11,a);
    e.display();
    e.setdata(1500,c);
    e.show();
    return 0;
}
