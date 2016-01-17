#include<iostream>
#include<cmath>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 2) continue;
		cout << x << " ";
	}
	cout << "\n";

	system("pause");
	return 0;
}

