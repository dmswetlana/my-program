#include<iostream>
//#include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int x;
	for (x = 0; x < 6; x ++ )
	{
		if (x == 1) cout << "x равно 1 \n";
		else if (x == 2) cout << "x равно 2 \n";
		else if (x == 3) cout << "x равно 3 \n";
		else if (x == 4) cout << "x равно 4 \n";
		else cout << "x не попадает в диапазон от 1 до 4 \n";
	}
	system("pause");
	return 0;
}

