#include<iostream>
 #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int magic;
	int guess;

	magic = rand();
	cout << "������� ���� ������� �����  ";
	cin >> guess;

	if (guess == magic)
	{
		cout << "**���������**\n";
		cout << magic << "   � ���� �� ����� �����\n";
	}
	else
	{
		cout << "�� �� �������\n";
		if (guess > magic)
			cout << "���� ����� ��������� ����������\n";
		else
			cout << "���� ����� ������ �����������\n";
	}
	cout << "���������� ����� ����   " << magic<<"\n";
	system("pause");
	return 0;
}

