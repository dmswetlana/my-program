//���������� ���������, ������ ��������� ��������� �� ������
#include<iostream>
#include<cctype>
#include<cstring>
#include<clocale>

using std::cout;
using std::cin;

void display(int num[10]);
void display2(int num[]);
void display3(int *num);
void disp(int num);

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	int t[10], i;

	for (i = 0; i < 10; i++)
		t[i] = i;
	display(t); //������� ������� ������ t
	cout << "\n";
	
	display2(t); //������� ������� ������ t
	cout << "\n";

	display3(t); //������� ������� ������ t
	cout << "\n";

	// ��� ��������� ����� ����������, �� ���������
	// �������� ������ �������

	for (i = 0; i < 10; i++)
		t[i] = i;
	for (i = 0; i < 10; i++)
		disp(t[i]);
	cout << "\n";


	system("pause");
	return 0;
}

//������� ������� ��� �������� �������
void display(int num[10])
{
	int i;
	for (i = 0; i < 10; i++)
		cout << num[i] << " ";
}

//����� �������� num ����������� ��� ������������� ������
//������������ �������. ������������� ������������ � ���������
//�� ������������� ��������
void display2(int num[])
{
	int i;
	for (i = 0; i < 10; i++)
		cout << num[i] << " ";
}

//��� �������� ������� ������� � �������� ����� 
//�������� ��� ���������
void display3(int *num)
{
	int i;
	for (i = 0; i < 10; i++)
		cout << num[i] << " ";
}

//������� ������� ���� �����
void disp(int num)
{
		cout << num << " ";
}