#include <iostream>
using namespace std;
int euclid(int a, int b)
{
	int q, r;
	while (b > 0)
	{
		q = a / b;
		r = a - q * b;
        a = b;
		b = r;
	}

	return a;
}
void phi(int n)
{
    int result = 0,c=0;
    for (int i =1; i<=n; i++)
        if (euclid(i, n) == 1)
        {
            result++;
        }
   cout<<"\n\n\tphi("<<n<<") = "<<result<<" where "<<result<<" integers are: ";
   cout<<"{";
   for (int i =1; i<=n; i++)
   {
       if (euclid(i, n) == 1)
       {
           c++;
           cout<<i;
           if(c<result)
            cout<<",";
       }

   }
   cout<<"}.\n";
}
int main()
{
    int a,b,c;
    cout<<"Enter a and b:\n";
    cin>>a; cin>>b;
    c=euclid(a,b);
    cout<<"\nGCD of ("<<a<<","<<b<<") = "<<c;
    phi(c);
    return 0;
}
