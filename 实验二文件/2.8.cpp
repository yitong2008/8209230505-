#include<iostream>
using namespace std;
int main()
{
	int a, x, y;
	cout << "������a" << endl;
	cin >> a;
	x = a;
	if (a >= 0)
	{
		y = (x + a / x) / 2;
		while ((y - x) >= 0.00001 || (y - x) <= -0.00001)
		{
			x = y;
			y = (x + a / x) / 2;
		}
		cout << y << endl;
	}
	else
	{
		cout << "������ƽ����" << endl;
	}
	return 0;
}