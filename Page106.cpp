//сортировка методом пузырька
//создаём массив из 10 случайных чисел и сортируем

#include<iostream>
#include<cmath>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int i, b, t;
	int list[10];
	int size = 10;

	for (i = 0; i < 10; i++)
	{
		list[i] = rand();
		cout << list[i] << "\n";
	}
	
	for (i = 1; i < size; i++)
		for (b = size - 1; b >= i; b--)
		{
			if (list[b - 1]>list[b])
			{//меняем местами элементы
				t = list[b - 1];
				list[b - 1] = list[b];
				list[b] = t;
			}
		}

		cout << "отсортированный массив:" << "\n";
		for (i = 0; i < size; i++)
			cout << list[i] << "\n";

	system("pause");
	return 0;
}

