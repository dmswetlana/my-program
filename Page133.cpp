//��������� ��������� ������ �� �����
//� �������������� ����������
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
	char *p, *q;

	cout << "������� �����������:  ";
	gets_s(str);
	cout << "\n";

	p = str;

	//��������� ������� �� ������
	while (*p)
	{
		q = token; //������������� q�� �������� �� ������ ������� token
			/* ��������� ������� �� ��� ���, ���� �� ����������
			���� ������, ���� ������� ������ (������� ���������� ������)*/

		while (*p != ' ' && *p)
		{
			*q = *p;
			q++; p++;
		}
		if (*p) p++; //������������ �� ������
		*q = '\0'; //��������� ������� ������� ��������
		cout << token << "\n";
	}
	system("pause");
	return 0;
}

