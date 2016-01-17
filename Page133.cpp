//программа разбиения строки на слова
//с использованием указателей
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

	cout << "Введите предложение:  ";
	gets_s(str);
	cout << "\n";

	p = str;

	//считываем лексему из строки
	while (*p)
	{
		q = token; //устанавливаем qля указания на начало массива token
			/* считываем символы до тех пор, пока не встретится
			либо пробел, либо нулевой символ (признак завершения строки)*/

		while (*p != ' ' && *p)
		{
			*q = *p;
			q++; p++;
		}
		if (*p) p++; //перемещаемся за пробел
		*q = '\0'; //завершаем лексему нулевым символом
		cout << token << "\n";
	}
	system("pause");
	return 0;
}

