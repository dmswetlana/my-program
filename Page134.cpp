//��������� ��������� ������ �� �����
//� �������������� �������������� ��������
//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	char str[80];
	char token[80];
	int i, j;

	cout << "������� �����������:  ";
	gets_s(str);
	cout << "\n";

		//��������� ������� �� ������
	for (i = 0; ;i++)
	{/* ��������� ������� �� ��� ���, ���� �� ����������
			���� ������, ���� ������� ������ (������� ���������� ������)*/

		for (j = 0; str[i] != ' ' && str[i]; j++, i++)

			token[j] = str[i];
		token[j] = '\0';//��������� ������� ������� ��������
		cout << token << "\n";
		if (!str[i]) break;
	}
	system("pause");
	return 0;
}

