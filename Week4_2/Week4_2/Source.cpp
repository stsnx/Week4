#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	for (int i = x; i > 0; i--)
	{
		for (int j = 1; j <= i - 1; j++) cout << ' ';
		for (int j = 1; j <= 2*(x - i)+1; j++) cout << '*';
		cout << endl;
	}
	for (int i = 1; i <x; i++)
	{
		for (int j = 1; j <= i ; j++) cout << ' ';
		for (int j = 1; j <= 2*(x - i)-1; j++) cout << '*';
		cout << endl;
	}
	return 0;
}