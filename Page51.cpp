#include<iostream>
// #include<cstdlib>
#include<clocale>

using std::cout;
using std::cin;


int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int a, b;
	
	cout << "������� ����� � ";
	cin >> a;
	cout <<"\n";
	cout << "������� ����� b ";
	cin >> b;
	cout <<"\n";

	if (a > b)
	{
		cout << "����� a>b \n";
		cout << "� - � =" << a - b << "\n";
	}
	
	else 	{cout << "����� �<b"<< "\n";}

	system("pause");
	return 0;
}

