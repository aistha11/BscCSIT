//write a program to create a file and write some text ito it
#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream fout("cpp.txt");
    fout<<"Hello World ,From Sagarmatha college.!";
    fout.close();
    return 0;
}
