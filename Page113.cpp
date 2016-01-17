//функции работы со строками
#include<iostream>
#include<cctype>
#include<cstring>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	char str[80];
	int i;

	strcpy_s(str, "test");

	for (i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	cout << str;
	cout << "\n";


	for (i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
	cout << str;
	cout << "\n";


	system("pause");
	return 0;
}

