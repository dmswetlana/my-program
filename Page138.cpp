//�������, ������� ������� ���������� ������������
//���������� ��������� ��������� �����
#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<clocale>

using std::cout;
using std::cin;

char *fortunes[] = {
	"������ ������ ������� � ��� �����. \n",
	"���� ����� ������ ����� ������. \n",
	"�� ������ ���� ����� � ���������. \n",
	"�� ������ ����� ������. \n",
	"������� ���� ����� ������ ������ ������������. \n"
};

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int chance;

	cout << " ������ ����� �������";

	// ������������� ��������� ��������� �����
	while (!_kbhit()) rand();
	cout << "\n";

	chance = rand();
	cout << "rand=chance " << rand()<<"\n";

	chance = chance % 5;
	cout << "chance % 5  " << chance<<"\n";

	cout << fortunes[chance];
	

	system("pause");
	return 0;
}

