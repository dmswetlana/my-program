//указатели
//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cctype>
#include<cstring>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	double x, y;
	int *p;
	x = 123.123;
	p = (int *)&x;
	cout <<"p=  "<< p<<"\n";
	// используем опреацию приведения типов для присваивания
	// double-указателия int-указателю
	y = *p;
	cout <<"y=    "<< y<<"\n";

	system("pause");
	return 0;
}

