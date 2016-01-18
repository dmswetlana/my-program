// передача функцими строк

#include<iostream>
#include<clocale>
#include<cstring>

using std::cout;
using std::cin;

void stringupper(char *str);
int mystrlen(char *str);

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	char str[80];
	strcpy_s(str, "I like C++");

	stringupper(str);
	cout << str; //отображаем строку с использованием
	             // прописного написания символов
	cout << "\n";

	cout << "Длина строки 'ПРИВЕТ ВСЕМ' равна: ";
	cout << mystrlen("ПРИВЕТ ВСЕМ");
	cout << "\n";

	system("pause");
	return 0;
}

void stringupper(char *str)
{
	while (*str){
		*str = toupper(*str); //получаем прописной
		                      //эквивалент одного символа
		str++; //переходим к следующему символу
	}
}

//нестандартная реализация функции strlen()
int mystrlen(char *str)
{
	int i;
	for (i = 0; str[i]; i++); //находим конец строки
	return i;
}