//wap to read contents of a file already created in question 1
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
using namespace std;
int main ()
{
    ifstream fin ("cpp.txt");
    if (!fin)
    {
        cout<<"File Couldn't be found\n ";
    }
    string item;
    while (!fin.eof())
    {
       fin>>item;
       cout<<item;
    }
    fin.close();
    return 0;
}
