#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char c;
	cin >> a >> c >> b;
	if (c == '+')cout << a + b << endl;
	if (c == '-')cout << a - b << endl;
	if (c == '*')cout << a * b << endl;
	if (c == '/')
		if (b == 0)
			cout << "��������Ϊ��" << endl;
		else
			cout << a / b << endl;
	return 0;
}