// демонстрация возврата функциями значений
// perviy comment dlya git
#include<iostream>
#include<clocale>

using std::cout;
using std::cin;

int mul(int x, int y);

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int a;
	a = mul(2, 8);
	cout<< "значение а=" << a<< "\n";

	a = mul(5, 7);
	cout << "значение а=" <<a<< "\n";

	system("pause");
	return 0;
}

int mul(int x, int y)
{
	return x*y;
}