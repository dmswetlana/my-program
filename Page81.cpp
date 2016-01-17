#include<iostream>
 #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int magic;
	int guess;

	magic = rand();
	cout << "¬ведите свой вариант числа  ";
	cin >> guess;

	if (guess == magic)
	{
		cout << "**ѕравильно**\n";
		cout << magic << "   и есть то самое число\n";
	}
	else
	{
		cout << "вы не угадали\n";
		if (guess > magic)
			cout << "¬аше число превышает магическое\n";
		else
			cout << "¬аше число меньше магического\n";
	}
	cout << "магическое число было   " << magic<<"\n";
	system("pause");
	return 0;
}

