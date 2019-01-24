/*
Write a program to read a line of text with embedded blanks.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char line [100];
    cout<<"Enter a line of text\n";
    cin.get(line,100);
    cout<<"The text is:\n"<<line;
    return 0;
}
