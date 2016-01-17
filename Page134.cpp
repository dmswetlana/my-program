//программа разбиения строки на слова
//с использованием индексирования массивов
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

	cout << "Введите предложение:  ";
	gets_s(str);
	cout << "\n";

		//считываем лексему из строки
	for (i = 0; ;i++)
	{/* считываем символы до тех пор, пока не встретится
			либо пробел, либо нулевой символ (признак завершения строки)*/

		for (j = 0; str[i] != ' ' && str[i]; j++, i++)

			token[j] = str[i];
		token[j] = '\0';//завершаем лексему нулевым символом
		cout << token << "\n";
		if (!str[i]) break;
	}
	system("pause");
	return 0;
}

