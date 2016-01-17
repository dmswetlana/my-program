#include<iostream>
#include<cmath>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int i, j;

	for (i = 2; i <= 50; i++)
	{
		for (j=2; j<=(i/j); j++)
		if (!(i%j)) break; //если число имеет множитель,
		                   // значит- оно не простое
		if (i> (i/j)) cout << i << "- простое число \n ";
	}
	

	system("pause");
	return 0;
}

