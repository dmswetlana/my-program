#include<iostream>
// #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;

void func();

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int x; //глобальна€ переменна€
	x = 10;
	func();
	cout << "√лобальна€ х = " << x;
	cout <<"\n";
	
	system("pause");
	return 0;
}

void func()
{
	int x; //локальна€ переменна€
	x = -199;
	cout << "«начение локальной переменной х = " << x << "\n";
}