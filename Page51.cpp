#include<iostream>
// #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;


int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int a, b;
	
	cout << "введите число а ";
	cin >> a;
	cout <<"\n";
	cout << "введите число b ";
	cin >> b;
	cout <<"\n";

	if (a > b)
	{
		cout << "число a>b \n";
		cout << "а - в =" << a - b << "\n";
	}
	
	else 	{cout << "число а<b"<< "\n";}

	system("pause");
	return 0;
}

