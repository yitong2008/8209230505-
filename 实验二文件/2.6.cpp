#include<iostream>
using namespace std;
int main()
{
	int a, b, c, x, y, m;
	cin >> a >> b;
	x = a, y = b;
	//���������*****************************
	if (a >= b)
	{
		c = a % b;
		while (c != 0)
		{
			a = b;
			b = c;
			c = a % b;
		}
		cout << b;
	}
	else
	{
		c = b % a;
		while (c != 0)
		{
			b = a;
			a = c;
			c = b % a;
		}
		cout << "�������Ϊ" << a << endl;
	}
	//���������****************************
	//����С������*****************************
	m = (x >= y) ? x : y;
	while ((m % x) != 0 || (m % y) != 0)
	{
		m = m + 1;
	}
	cout << "��С������" << m << endl;
	//����С������*****************************
	return 0;
}