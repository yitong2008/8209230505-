#include<iostream>
using namespace std;
int main()
{
    int letter = 0, num = 0, space = 0, others = 0;
    char c;
    cout << "������һ���ַ�" << endl;
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letter++;
        else if (c >= '0' && c <= '9')
            num++;
        else if (c == ' ')
            space++;
        else
            others++;
    }
    cout << "Ӣ����ĸ������" << letter << endl;
    cout << "�ո�������" << space << endl;
    cout << "�����ַ�������" << num << endl;
    cout << "�����ַ�������" << others << endl;

    return 0;
}