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

	int *p, num;
	p = &num;
	
	*p = 100;

	cout <<"num=  "<< num<<"\n";

	(*p)++;
	cout <<"num=  "<< num<<"\n";

	(*p)--;
	cout <<"num=  "<< num<<"\n";

	system("pause");
	return 0;
}

