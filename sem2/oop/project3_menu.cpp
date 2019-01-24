#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;
class Item
{
int code ; // item code
char name[10] ; //item name
float cost ; // cost of each item.
public:
void readdata(void) ;
void writedata(void) ;
int retCode()
{
    return code;
}
} ;
void Item:: readdata(void)  // read from keyboard.
{
cout<< " Enter code: "; cin>>code ;
cout<< " Enter name: "; cin>>name ;
cout<< " Enter cost: "; cin>>cost ;
}
void Item:: writedata(void) // for display.
{
    cout<<code<<"\t"<<name<<"\t\t"<<cost<<endl ;
}

void Insert()		// function to write in a binary file.
{
            ofstream file;
            file.open("Item.dat ", ios::binary | ios::app);
            Item obj;
            obj.readdata();
            file.write((char*)&obj, sizeof(obj));
            file.close();
}
void Display()		// function to display records of file on screen, formatted output.
{
            ifstream file;
            file.open("Item.dat ", ios::binary);
            Item obj;
            cout<<"Code\t"<<"Item Name\t"<<"Price"<<endl;
            cout<<"..............................."<<endl;
            while(file.read((char*)&obj, sizeof(obj)))
                {
                    obj.writedata();
                }
            file.close();
            cout<<"..............................."<<endl;
            cout<<"..............................."<<endl;
}
void Delete(int n)		// function to delete a record.
{
    Item obj;
    ifstream inFile;
    inFile.open("Item.dat ", ios::binary);
    ofstream outFile;
    outFile.open("temp.dat", ios::out | ios::binary);
    while(inFile.read((char*)&obj, sizeof(obj)))
    {
        if(obj.retCode()!= n)
        {
            outFile.write((char*)&obj, sizeof(obj));
        }
        inFile.close();
    outFile.close();
    remove("Item.dat "); //deletes a file from memory.
    rename("temp.dat", "Item.dat");
// renames the file temp.dat as Item.dat.
}

    }
void Modify(int n)		// function to modify a record.
{
    fstream file;
    file.open("Item.dat",ios::in | ios::out);
    Item obj;
    while(file.read((char*)&obj, sizeof(obj)))
    {
        if(obj.retCode() == n)
        {
            cout << "\nEnter the new details of item";
            obj.readdata();
            int pos = sizeof(obj);
            file.seekp(-pos, ios::cur);      //moving put pointer to the pos position for writing new detail.
            file.write((char*)&obj, sizeof(obj));
        }
    }
    file.close();
}
 void Search(int n)		//function to search and display from binary file.
{
    ifstream inFile;
    inFile.open("Item.dat ", ios::binary);
    Item obj;
    while(inFile.read((char*)&obj, sizeof(obj)))
    {
        if(obj.retCode() == n)
        {
            obj.writedata();
        }
    }
   inFile.close();
}




int main( )
{
    int r,choice;
    char ch;
    do
    {
        cout<<"******MENU***********"<<endl;
        cout<<"1.INSERT"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.MODIFY"<<endl;
        cout<<"4.DELETE"<<endl;
        cout<<"5.SEARCH"<<endl;
        cout<<"6.EXIT"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                Insert();
                break;
            case 2:
                Display();
                break;
            case 3:
                int c;
                cout<<"Enter item code to  modify(1-100): "<<endl;
                cin>>c;
                Modify(c);
                break;
            case 4:
                int m;
                cout<<"Enter item code to delete(1-100): "<<endl;
                cin>>m;
                Delete(m);
                break;
          case 5:
int s;
cout<<"Enter item code to search(1-100): "<<endl;
cin>>s;
Search(s);
break;
        case 6:
            exit(0);
        }
    } while(choice<7);
}
