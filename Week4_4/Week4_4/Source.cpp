#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int x[100], n, max = INT_MIN, min = INT_MAX,sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		if (x[i] > max || x[i] < min)
		{
			if (x[i] < min) min = x[i];
			else max = x[i];
		}
		sum += x[i];
	}
	cout << "xbar = " << sum << '/' << n << " = " << (float)sum / n<<endl;
	cout << "range = " << max << '-' << min << " = " << max-min;

}