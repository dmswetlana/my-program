#include<iostream>
#include<cmath>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int len;
	unsigned char ch;
	ch = 32;
	while (ch)
	{
		cout << ch << "  ";
		ch++;	
	}
cout << "\n\n";

cout << "введите длину строки (от 1 до 79) ";
cin >> len;

while (len > 0 && len < 80)
{
	cout << '.';
	len--;
}
cout << "\n";

	system("pause");
	return 0;
}

