#include<iostream>
// #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;

void func1();
void func2();

int count;//���������� ����������

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int i; //��������� ����������
	
	for (i = 0; i < 5; i++)
	{
		count = i * 2;
		func1();
	}
	
	system("pause");
	return 0;
}

void func1()
{
	cout << "���������� ���������� count = " << count << "\n";
	func2();
}

void func2()
{
	int count; //��������� ����������
	cout << "�������� func2 \n";
	for (count = 0; count < 3; count++)
		cout << '.'; cout << "\n";
}