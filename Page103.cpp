//�������� ����� �� 10 ���������, ������� ��������������
//��������� �����. �� ��� ������� max � min ��������


#include<iostream>
#include<cmath>
#include<clocale>

using std::cout;
using std::cin;

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int i, min_value, max_value;
	int list[10];

	for (i = 0; i < 10; i++)
	{
		list[i] = rand();
		cout << list[i] << "\n";
	}
	//������� ����������� ��������
	min_value = list[0];
	for (i = 1; i < 10; i++)
	if (min_value>list[i]) min_value = list[i];
	cout << "����������� �������� = " << min_value << "\n";

	//������� ������������ ��������
	max_value = list[0];
	for (i = 1; i < 10; i++)
	if (max_value<list[i]) max_value = list[i];
	cout << "������������ �������� = " << max_value << "\n";



	system("pause");
	return 0;
}

