//�������������� ��������� ������� �������
#include<iostream>
#include<cctype>
#include<cstring>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	char str[20] = "I love you";
	char *p;
	int i;

	p = str;

	//����������� ���������.
	for (i = 0; p[i]; i++)
		p[i] = toupper(p[i]);
	cout << p << "\n"; //���������� ������



	system("pause");
	return 0;
}

