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
		if (x == 1) cout << "x ����� 1 \n";
		else if (x == 2) cout << "x ����� 2 \n";
		else if (x == 3) cout << "x ����� 3 \n";
		else if (x == 4) cout << "x ����� 4 \n";
		else cout << "x �� �������� � �������� �� 1 �� 4 \n";
	}
	system("pause");
	return 0;
}

