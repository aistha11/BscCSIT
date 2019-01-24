/*
Write a function convert() to find the ASCII value of character . The function takes a char arguements and return the results.
Use a default value % for the arguments when the arguement is omitted. write a main that gets the character from the user to test
the user to test the function.
*/
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int convert (char ='%');

int main()
{
    char ch;
    int r;
    cout<<"Enter the Character: ";
    cin>>ch;
    cout<<"The ASCII value is "<<convert(ch);

    return 0;
}

int convert (char c)
{
   int y;
   y=(int)c;
   return y;
}


