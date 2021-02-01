#include<iostream>
#include<algorithm>
using namespace std;

class Job
{
    public:
        char id;
        int dead;
        int profit;
};

bool comparison(Job a, Job b)
{
	return (a.profit > b.profit);
}

void greedyJobSequencing(Job arr[], int n)
{
	sort(arr, arr+n, comparison);

	int result[n];
	bool slot[n];
	for (int i=0; i<n; i++)
		slot[i] = false;
	for (int i=0; i<n; i++)
	{
	for (int j=min(n, arr[i].dead)-1; j>=0; j--)
	{
		if (slot[j]==false)
		{
			result[j] = i;
			slot[j] = true;
			break;
		}
	}
	}
	int maxProfit = 0;
	for (int i=0; i<n; i++)
        if (slot[i])
        {
            maxProfit += arr[result[i]].profit;
            cout << arr[result[i]].id << " ";
        }
    cout<<"\nThe maximum profit is "<<maxProfit;
}

int main()
{
	Job arr[] = { {'a', 2, 100}, {'b', 1, 10}, {'c', 2, 15},
				{'d', 1, 27}};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Following is maximum profit sequence of jobs \n";
	greedyJobSequencing(arr, n);


	return 0;
}
