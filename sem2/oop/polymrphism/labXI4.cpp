//Write a function template for finding the minimum value among 2 int numbers
#include <iostream>
#include <iomanip>
using namespace std;
template <class T>
T minimum (T a,T b)
{
  if (a>b)
  return b;
  else
  return a;
}
int main ()
{
  int a,b;
  cout<<"Enter a and b:\n";
  cin>>a>>b;
  cout<<"The minimum value is "<<minimum<int>(a,b)<<endl;
  return 0;
}
