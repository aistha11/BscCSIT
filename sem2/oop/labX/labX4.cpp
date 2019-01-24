#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class student
{
    char name[20];
    int roll;
    public:
            void getstd (char nm[],int r)
            {
              strcpy(name,nm);
              roll=r;
            }
            void dispstd()
            {
                cout<<"Name: "<<name<<"\nRoll: "<<roll<<endl;
            }
};
class lecturer
{
    char lecnam[20];
    int age;
    public:
    void setlec (char nm[],int a)
    {
      strcpy (lecnam,nm);
      age=a;
    }
    void displec ()
    {
        cout<<"Lecturer name: "<<lecnam<<"\nAge: "<<age<<endl;
    }


};
class book: public student, public lecturer
{
    char bocnam[20];
    int price;
    public:
        void setbok (char nm[],int p)
        {
          strcpy (bocnam,nm);
          price=p;
        }
        void dispboc ()
        {
            cout<<"Book name: "<<bocnam<<"\nPrice: "<<price<<endl;
        }


};
int main ()
{
    book b;
    char s[20]={"Bijay"},l[20]={" BS "},c[20]={"OOP"};
    b.getstd(s,11);
    b.setlec(l,45);
    b.setbok(c,1500);
    b.dispstd();
    b.displec();
    b.dispboc();
    return 0;

}
