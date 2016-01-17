//функции работы со строками
// сравниваем строки
#include<iostream>
#include<cstdio>
#include<cstring>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	char s1[80], s2[80];

	cout << "введите две строки: \n";
	gets_s(s1);
	gets_s(s2);

	cout << "Длина первой строки:  " << strlen(s1);
	cout << "\n";
	cout << "Длина второй строки:  " << strlen(s2);
	cout << "\n";
	
	if (!strcmp(s1, s2))
		cout << "строки равны \n";
	else cout << "строки не равны \n";

	strcat_s(s1, s2);
	cout << s1 << "\n";

	strcpy_s(s1, s2);
	cout << s1 << "  и  " << s2 << "   ";
	cout << "теперь равны \n";

	system("pause");
	return 0;
}

