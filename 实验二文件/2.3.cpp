#include<iostream>
using namespace std;
int main()
{
	double a, b, c, C;
	cin >> a >> b >> c;
	C = a + b + c;
	cout << "�������ܳ�Ϊ" << C << endl;
	if (a == b)
		cout << "�ǵ���������" << endl;
	else
		if (a == c)
			cout << "�ǵ���������" << endl;
		else
			if (b == c)
				cout << "�ǵ���������" << endl;
			else
				cout << "���ǵ���������" << endl;
	return 0;
}