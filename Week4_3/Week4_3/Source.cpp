#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int x[100], n,max = INT_MIN ,min = INT_MAX;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (x[i] > max || x[i] < min)
		{
			if (x[i] < min) min = x[i];
			if (x[i] > max)max = x[i];
		}
	}
	cout << max<<' '<<min << endl;
	if (max - min > 100) cout << "over";
	else cout << "in 100 Variance";

}
