#include<iostream>
#include<cmath>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int choice;
	cout << "—правка по темам:\n\n";
	cout << "1. for\n";
	cout << "2. if\n";
	cout << "3. switch\n";	

	cout << "¬ведите номер темы (1-3):";
	cin >> choice;
	cout << "\n";
		//&& (choice > 0) && (choice < 4);

	switch (choice)
	{
	case 1:
		cout << "for \n";
		break;
	case 2:
		cout << "if \n";
		break;
	case 3:
		cout << "switch \n";
		break;
	default:
		cout<<"\n неправильно ввели номер темы \n";
	}

	system("pause");
	return 0;
}

