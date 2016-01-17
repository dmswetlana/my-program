#include<iostream>
#include<cmath>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int num;
	double sq_root;

	for (num = 1; num < 20; num++)
	{
		sq_root = sqrt((double)num);
		cout << " вадратный корень из числа  " << num << "  равен  " << sq_root << "\n";

	}

	system("pause");
	return 0;
}

