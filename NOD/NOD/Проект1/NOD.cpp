//Поиск наибольшего общего делителя двух чисел (алгоритм Евклида).
//Применяется к паре положительных чисел и формирует новую пару,
//которая состоит из меньшего числа и разницы между большим и
//меньшим числом. Процесс повторяется, пока числа не станут равными.
//Найденное число и есть НОД для этих чисел.

#include<iostream>
// #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;

int evklid(int a, int b);
int x, y,z;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	
	x = 0, y = 0, z=0;
	cout << ("Введите два положительных числа: ");

	cin >> x >> y;

	evklid(x, y);
	cout << ("НОД для числa ") << x << (" и числа ") << y << (" = ") << z;
	cout << ("\n");


	system("pause");
	return 0;
}



	int evklid(int a, int b){
		while (a != b){
				if (a>b) a -= b;
				else b -= a;
				cout << ("a= ") << a << ("    b= ") << b;
				cout << ("\n");
			}
		z = a;
			return a;
		}

		
