#include <iostream>
using namespace std;
int x[2501];
int main()
{
	int l, r, max = -1, n, temp = 0, lmax, rmax, c = 0;
	cin >> n;
	l = 0, r = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
		temp += x[i];
		if (temp >= 0 && c == 0)
		{
			l = i, r = i;
			c = 1;
		}
		if (temp > max)
		{
			max = temp, r = i;
			lmax = l, rmax = r;
		}
		else if (temp > 0) r = i;
		else if (temp < 0)
		{
			temp = 0, l = i + 1, r = i + 1, c = 0;
		}
		//cout << l << "l r"<< r<<"tem"<<temp<<endl;
	}
	if (max <= 0) cout << "Empty sequence";
	else
	{
		for (int i = lmax; i <= rmax; i++) cout << x[i] << ' ';
		cout << endl;
		cout << max;
	}
	return 0;
}
/*
12
4 -4 3 -2 6 -4 -6 6 -6 4 -2 5*/