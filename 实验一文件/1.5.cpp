#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double F, C;
	cout << "�����뻪�϶�" << endl;
	cin >> F;
	C = (F - 32) / 1.8;
	cout << "��Ӧ���϶�Ϊ" << fixed << setprecision(2) << C << endl;
	return 0;
}