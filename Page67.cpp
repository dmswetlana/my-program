#include<iostream>
// #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;

void total(int x);

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	cout << "���������� ����� ����� �� 1 �� 5 \n";
	total(5);
	cout << "\n";
	cout << "���������� ����� ����� �� 1 �� 6 \n";
	total(6);

	system("pause");
	return 0;
}

void total(int x)
{
	int sum=0; 
	int i, count;
	for (i = 1; i < x; i++)
	{
		sum = sum + 1;
	for (count = 0; count <10; count++)
		cout << '.'; 
		cout << "������������ ����� �����   " << sum<< "\n";
	}
}