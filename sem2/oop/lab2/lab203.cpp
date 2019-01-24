/*
WAP to read multiple line of text from keyboard.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //const int max=100;
    char multiple [100];  //use max instead of 100
    cout<<"Enter multiple line of text and $ to stop\n";
    cin.get(multiple,100,'$');  //use max instead of 100
    cout <<"Your multiple line is\n"<<multiple;
    return 0;
}
