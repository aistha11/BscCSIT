#include <iostream>
#include <iomanip>
#include <istream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
void login ();
void registr();
void forget();
void Insert(int n);
void Display(int n);
void Search(int n);
int usermain(int n);
void logout(int n);
void theme(int a);

class User
{
int id ; // User id
char name[20] ; //User name
int Age ; // Age of User.
char address[30]; //Address of user
char gender[30]; //Gender of User
char dob[15];
public:
void readdata(int x) ;
void writedata(void) ;
int retid()
{
    return id;
}
} ;

int main ()
{
    int choice;
    system("cls");
    cout<<"\n\t\t\t**************** MAIN MENU ******************\n\n";
    cout<<"\n\t\t1. Login";
    cout<<"\n\t\t2. Register";
    cout<<"\n\t\t3. Forget Credentials";
    cout<<"\n\t\t4. Change Theme";
    cout<<"\n\t\t5. Exit";
    cout<<"\n\t\tEnter your choice: ";
    cin>>choice;
    switch (choice)
    {
    case 1:
        login ();
        break;

    case 2:
        registr();
        break;
    case 3:
        forget();
        break;
    case 4:
        theme(1);
        break;
    case 5:
        cout<<"\n\t\t\tPreparing To Exit :) \n\n\n\n";
        break;
    default:
        cout<<"\n\t\tSorry :( , Wrong choice Selected\n\n\n";
        cout<<"\t\tPress Any Key To Continue....\n\t\t";
        cin.get();
        cin.get();
        main();
    }
    return 0;
}

void registr()
{
    int n=0,id;
    string reguser, regpass,u,p;

    ifstream cou("database.txt");
    while (cou>>u>>p>>id)
    {
        n++;
    }
    cou.close();

    system("cls");
    cout<<"\n\t\t\t*********************** REGISTER HERE ***************************\n\n";
    cout<<"\n\t\tRegister New Username: ";
    cin>>reguser;
    cout<<"\t\tChoose Your Password: ";
    cin>>regpass;
    ofstream reg("database.txt",ios::app);
    reg<<reguser<<" "<<regpass<<" "<<n<<endl;
    cout<<"\t\tRegistration is successfull :) \n\t\t";
    reg.close();
    cin.get();
    cin.get();
    main ();
}

void login ()
{
  int exist,n,id,logval;
  string user, pass,u,p;
  system("cls");
      cout<<"\n\t\t\t******************************* LOGIN ********************************\n\n";
    cout<<"\n\t\tEnter Your Username: ";
    cin>>user;
    cout<<"\t\tEnter Your Password: ";
    cin>>pass;
    ifstream input("database.txt");
    while (input>>u>>p>>id)
    {
       /* cout<<"\n\t\tEntered:"<<user<<" "<<pass<<" "<<n;
        cout<<"\n\t\tCheck  :"<<u<<" "<<p<<" "<<id; */

        if (u==user && p==pass)
        {
            exist=1;
            n=id;
            break;
        }
        else
        {
            exist=0;
        }
    }
    input.close();
    /*
    cout<<"\n\t\tExist: "<<exist;
    cout<<"\n\t\tEntered:"<<user<<" "<<pass<<" "<<n; */
    if(exist==1)
    {
        cout<<"\n\t\tHello "<<user<<"\n\t\tWe're glad that you are here.\n\n";
        cout<<"\n\t\tManage Your Profile......  ";
        cin.get();
        cin.get();
        logval=usermain(n);
        if (logval==1)
        cout<<"\t\tYou're Logged Out...\n\t\t";
        cin.get();
        cin.get();
        main();
    }
    else
    {
        cout<<"\n\t\tSorry, Login Failed. \n\t\t";
        cin.get();
        cin.get();
        main();
    }
}
void forget ()
{
    int ch;
    system("cls");
    cout<<"\n\t\t\t**************** NO WORRY WE ARE HERE TO HELP *******************\n";
    cout<<"\n\t\t1. Search your account by username \n";
    cout<<"\n\t\t2. Search your account by password \n";
    cout<<"\n\t\t3. Main Menu \n";
    cout<<"\n\t\tEnter your Choice : ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        {
        int ex;
        string searchuser, su,sp;
        cout<<"\t\tEnter Your Remembered Username :";
        cin>>searchuser;

        ifstream searchu ("database.txt");
        while (searchu>>su>>sp)
        {
            if (su==searchuser)
            {
                ex=1;
                break;
            }
        }
        searchu.close();
        if(ex==1)
        {
            cout<<"\n\t\t**************  Hurray ! Account Found! *********************\n\n";
            cout<<"\t\tYour Password is "<<sp<<"\n\t\t";
            cin.get();
            cin.get();
            main();

        }
        else
        {
            cout<<"\n\t\t Sorry,:( Your Account Was Not Found\n\t\t";
            cin.get();
            cin.get();
            main();
        }
        break;
        }
    case 2:
        {
        int exi;
        string searchpass, su2,sp2;
        cout<<"\n\t\tEnter The Remembered Password :";
        cin>>searchpass;
        ifstream searchp("database.txt");
        while (searchp>>su2>>sp2)
        {
           if(sp2==searchpass)
           {
               exi=1;
               break;
           }
        }
        searchp.close();
        if(exi==1)
        {
            cout<<"\n\t\t*********** Hurray ! :) Account Found! *****************\n\n";
            cout<<"\n\t\tYour Username Is "<<su2;
            cout<<"\n\t\tYour Password Is "<<sp2;
            cin.get();
            cin.get();
            main();

        }
        else
        {
            cout<<"\t\tSorry, :( Your Account Is Not Found\n\t\t";
            cin.get();
            cin.get();
            main();
        }
        break;
        }
    case 3:
        main();
    default:
        cout<<"\n\t\t****************** +_+ Wrong Choice! +_+ *********************\n\n\t\t";
        cin.get();
        cin.get();
        main ();
    }
}

//For Profile System

int usermain( int n )
{
    system("cls");
    int choice;
    char ch;
    do
    {
        system("cls");
        cout<<"\n\t\t\t************************ MY PROFILE ***********************\n\n";
        cout<<"\t\t1. ADD PROFILE"<<endl;
        cout<<"\t\t2. DISPLAY PROFILE"<<endl;
        cout<<"\t\t3. VIEW OTHERS PROFILE"<<endl;
        cout<<"\t\t4. Change Theme"<<endl;
        cout<<"\t\t5. LOGOUT"<<endl;
        cout<<"\t\t Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                Insert(n);
                break;
            case 2:
                Display(n);
                break;
            case 3:
                Search(n);
                break;
            case 4:
                theme(0);
                break;
            case 5:
                return 1;
                break;
        }
    } while(choice<5);
}

void User:: readdata(int x)  // Read From Keyboard.
{
    cout<<"\n\t\t\t****************** Enter Correct Data **************************\n\n\n";
    id=x;
    cout<< "\t\tEnter Name: "; cin>>name ;
    cout<< "\t\tEnter Age: "; cin>>Age ;
    cout<<"\t\tD.O.B: ";cin>>dob;
    cout<<"\t\tGender: "; cin>>gender;
    cout<<"\t\tAddress: ";cin>>address;

}
void User:: writedata(void) // For Display.
{
    cout<<"\n\t\tName:\t"<<name;
    cout<<"\n\t\tAge:\t"<<Age;
    cout<<"\n\t\tD.O.B:\t"<<dob;
    cout<<"\n\t\tGender:\t"<<gender;
    cout<<"\n\t\tAddress:"<<address;
}

void Insert(int n)		// Function To write in a binary file.
{
            system("cls");
            cout<<"\n\t\t*******************************  ADD PROFILE  *********************************\n\n\n";
            ofstream file;
            file.open("User.txt", ios::binary | ios::app);
            User obj;
            obj.readdata(n);
            file.write((char*)&obj, sizeof(obj));
            file.close();
            cout<<"\n\n\t\tProfile Has Been Successfully Added :) \n\t\t";
            cin.get();
            cin.get();
}
void Display(int n)		// function to display records of file on screen, formatted output.
{
            system("cls");
            cout<<"\n\t\t*******************************  Your PROFILE  *********************************\n\n\n";
            ifstream file;
            int viewed=0;
            file.open("User.txt", ios::binary);
            User obj;
            while(file.read((char*)&obj, sizeof(obj)))
                {
                    if(obj.retid() == n)
                    {
                        if (viewed==1)
                        {
                            continue;
                        }
                        else
                        {
                            obj.writedata();
                            viewed++;
                        }
                    }
                }
            file.close();
            cout<<"\t\t";
            cin.get();
            cin.get();
}

 void Search(int n)		//Function To Search And Display From Binary File.
{
    system("cls");
    cout<<"\n\t\t*******************************  THE TOP 4 PROFILE ARE ******************************************\n";
    int i=0;
    ifstream inFile;
    inFile.open("User.txt", ios::binary);
    User obj;
    while(inFile.read((char*)&obj, sizeof(obj)))
    {
                if (obj.retid() == n)
                   continue;
                else if(obj.retid() != n && i<4)
                    {
                        cout<<endl;
                        obj.writedata();
                        cout<<endl;
                        i++;
                    }
                else
                    break;

    }
   inFile.close();
   cout<<"\t\t";
   cin.get();
   cin.get();
}

//Function To Change The Theme
void theme (int a)
{
    system("cls");
    char x[15]= "color ";
    x[6]='\0';
    x[7]='\0';
    cout<<"\n\t\t\t\t *-* Here Are The Colors For You *-* \n";
    //colors
    cout<<"\n\t\t0 = Black\t\t8 = Gray";
    cout<<"\n\t\t1 = Blue\t\t9 = Light Blue";
    cout<<"\n\t\t2 = Green\t\tA = Light Green";
    cout<<"\n\t\t3 = Aqua\t\tB = Light Aqua";
    cout<<"\n\t\t4 = Red  \t\tC = Light Red";
    cout<<"\n\t\t5 = Purple\t\tD = Light Purple";
    cout<<"\n\t\t6 = Yellow\t\tE = Light Yellow";
    cout<<"\n\t\t7 = White\t\tF = Bright White";
    //To Choose Colors
    cout<<"\n\n\t\tChoose Background Color: ";
    cin>>x[6];
    cout<<"\t\tChoose Text Color: ";
    cin>>x[7];
    try
    {
        if(x[6]==x[7])
            {
              throw x[6];
            }
        else
            {
                system(x);
                cout<<"\n\n\t\tTheme Successfully Changed :) .......... \n";
            }
    }
    catch (char x[])
        {
           cout<<"\n\t\tSorry, :( You Cannot Choose Same Color";
        }

    cout<<"\t\t";
    cin.get();
    cin.get();
    if (a==1)
        main();


}

