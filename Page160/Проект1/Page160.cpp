// �������� �������� �����

#include<iostream>
#include<clocale>
#include<cstring>

using std::cout;
using std::cin;

void stringupper(char *str);
int mystrlen(char *str);

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	char str[80];
	strcpy_s(str, "I like C++");

	stringupper(str);
	cout << str; //���������� ������ � ��������������
	             // ���������� ��������� ��������
	cout << "\n";

	cout << "����� ������ '������ ����' �����: ";
	cout << mystrlen("������ ����");
	cout << "\n";

	system("pause");
	return 0;
}

void stringupper(char *str)
{
	while (*str){
		*str = toupper(*str); //�������� ���������
		                      //���������� ������ �������
		str++; //��������� � ���������� �������
	}
}

//������������� ���������� ������� strlen()
int mystrlen(char *str)
{
	int i;
	for (i = 0; str[i]; i++); //������� ����� ������
	return i;
}