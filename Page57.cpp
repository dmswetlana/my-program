#include<iostream>
// #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;

void func();

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int x; //���������� ����������
	x = 10;
	func();
	cout << "���������� � = " << x;
	cout <<"\n";
	
	system("pause");
	return 0;
}

void func()
{
	int x; //��������� ����������
	x = -199;
	cout << "�������� ��������� ���������� � = " << x << "\n";
}