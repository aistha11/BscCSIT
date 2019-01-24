#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
#include <string.h>
using namespace std;

//int dec;

class id
{
public:
    int no;
    string username, password;

    id ()
    {
        no=000;
        username= "username";
        password="password";
    }


};
class user: public id
{
    string fname,sname,address,gender;
    public:
        user ()
        {
            fname= "Ram";
            sname= "Stha";
            address= "NUll";
            gender= "NUll";
        }

         int retno()
        {
            return no;
        }
        string retusnm ()
        {
            return username;
        }
        string retpsw ()
        {
            return password;
        }

        void signupf();
        bool loginf (int n);

         void profilef();
         void viewpf();


};

void login(int n);
void signup();
void profile();
void viewp(int n);
void mprofile();
int finduser(int n);
bool islogin (int n,string cusnm, string cpsw);

void user:: signupf()
{
        //clrscr();
        cout<<"\n\t\t\t\tSign Up\n";

        string c_password;
        do {
        cout<<"Choose Your Id::\t";
        cin>>no;
        cout<<"\nEnter your email::\t";
        cin>>username;
        cout<<"Choose your password::\t";
        cin>>password;
        cout<<"Conform your password::\t";
        cin>>c_password;
        if (password!=c_password)
                {
                    cout<<"Password doesn't match.";
                }
        }
        while (password!=c_password);



}

bool user:: loginf(int n)
    {
        //clrscr();
        cout<<"\n\t\t\t\tLogin\n";
        int stats;
        stats=finduser(n);
        if (stats==1)
        {
           return true;
        }
        else
        {
            return false;
        }
    }

    void user::profilef()
    {
        //clrscr();
        cout<<"\n\t\t\t\tProfile\n";
        cout<<"Firstname::\t";
        cin>>fname;
        cout<<"Surname::\t";
        cin>>sname;
        cout<<"Address::\t";
        cin>>address;
        cout<<"Gender::\t";
        cin>>gender;
    }

    void user::viewpf()
    {
        //clrscr();
        cout<<"\n\t\t\t\tView Profile\n";
        cout<<"Firstname::\t"<<fname<<endl;
        cout<<"Surname::\t"<<sname<<endl;
        cout<<"Address::\t"<<address<<endl;
        cout<<"Gender::\t"<<gender<<endl;

    }

int main ()
{

   int dec;
    cout<<"\t\t\t\tFakebook\n";//title
 do
 {
cout<<"\n\nChoices:\n1.Login\t\t\t2.Sign Up\n3.Quit\n Your Choice: ";
cin>>dec;
if (dec==1)
{
    int n;
    cout<<"Enter Your Id::\t";
    cin>>n;
    login(n);
    cout<<"\n\nChoices:\n1.Edit Profile\t\t2.View Profile\n3.Quit\n Your Choice: ";
    cin>>dec;
            do
            {
                if (dec==1)
                mprofile();
                else if (dec==2)
                viewp(n);
                else if (dec==3)
                break;//quit the loop and comes out of loop
                else
                cout<<"There are no other choices.\n";
        }while (1);
}
else if (dec==2)
signup();//calling signupf function
else if (dec==3)
break;//quit the loop and comes out of loop
else
cout<<"There are no other choices.\n";
}while (1);//for run loop until user choose to quit

  return 0;

}

void login(int n)
{
            cout<<"\nLogin\n";
            user obj;
          bool status=obj.loginf(n);
         if (!status)
         {
             cout<<"\n\tLog in Failed Register First\n";
         }
         else
         {
             cout<<"\n\tWelcome  !\n";
         }

}
void signup()
{           cout<<"\nSign UP Finction\n";
            ofstream file;
            file.open("user.txt", ios::binary | ios::app);
            user obj;
            obj.signupf();
            cout<<"****Thank You For Creating Your Account****";
            cout<<"-------------------------------------------";
            cout<<"**Manage Your Profile**";
            obj.profilef();
            file.write((char*)&obj, sizeof(obj));
            file.close();

}
void mprofile()
{

}
void viewp(int n)
{           cout<<"\nView Profile\n";
            ifstream file;
            file.open("user.txt", ios::binary);
            user obj;
            while(file.read((char*)&obj, sizeof(obj)))
                {
                    if(obj.retno()==n)
                    obj.viewpf();
                }
            file.close();
            cout<<"..............................."<<endl;
            cout<<"..............................."<<endl;


}
int finduser (int n)
{
    cout<<"\nFinduser function\n";
    ifstream inFile;
    inFile.open("user.txt", ios::binary);
    user obj;
    int stats;
    string cusnm,cpsw;
    while(inFile.read((char*)&obj, sizeof(obj)))
    {
        if(obj.retno()==n)
        {
            do{
                    cout<<"Enter your username::\t";
                    cin>>cusnm;
                    cout<<"Enter your password::\t";
                    cin>>cpsw;
                   stats=islogin(n,cusnm,cpsw);
                   return 1;
                   break;

            } while (stats!=1);
        }
    }
   inFile.close();
}
bool islogin (int n,string cusnm, string cpsw)
{
    ifstream inFile;
    inFile.open("user.txt", ios::binary);
    user obj;
    while(inFile.read((char*)&obj, sizeof(obj)))
    {
        if(obj.retno()==n)
        {
            if(obj.retusnm()==cusnm&&obj.retpsw()==cpsw)
                    {
                       return true;
                    }
        }
        else
            return false;
    }
   inFile.close();

}
