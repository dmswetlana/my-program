#include<iostream>
#include<cmath>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	unsigned char ch;
	ch = 32;
	while (ch)
	{
		cout << ch << "  ";
		ch++;
		
	}
cout << "\n";
	system("pause");
	return 0;
}

