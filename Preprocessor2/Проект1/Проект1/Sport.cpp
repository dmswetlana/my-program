//� ������ ���� ��������� �������� 10 ��. � ������ ��������
//�� �������� �� 10% ������, ��� � ����������.
//1. ������� �� �� �������� � 10-� ����?
//2.� ����� ���� �� ������� �������� ������ 20 ��?
//3. �� ������� ���� ��� ��������� ������ �������� 100 ��?

#include<iostream>
#include<cstdio>
#include<clocale>

using std::cout;
using std::cin;

#define FINAL_DAY 10
#define START_DIST 10
#define FINAL_DIST 20
#define TOTAL_DIST 100
#define PERCENT 10
#define FACTOR (100+PERCENT)/100.0 //������� �� �������� � ��������� ����

#define MYDEBUG

#ifndef MYDEBUG
#define DUMP(ival,fval)
#else
#define DUMP(ival,fval) printf(#ival"=%d\t"#fval"=%f\n",ival,fval)
#endif

int main()
{
	double x, //���������� ������
		  s; //��������� ������
	int   n; //������� ����

	setlocale(LC_CTYPE, ".866");

	for (n = 1, x = START_DIST; n < FINAL_DAY; ++n, x *= FACTOR)
		DUMP(n, x); //���� ���� ����� ������, ��� ��� �� ������� � for
	                //� �������� � ���� ���������� ������ (������)
	wprintf(L"� %d-� ���� ��������� �������� %3.f ��\n\n", n, x);

	for (n = 1, x = START_DIST; x < FINAL_DIST; ++n, x *= FACTOR)
		DUMP(n, x);

	wprintf(L"B %d-� ���� ��������� �������� %.3f ��\n\n", n, x);

	for (n = 1, s = x = START_DIST; s < TOTAL_DIST; ++n, s +=x *= FACTOR)
	DUMP(n, s);
	wprintf(L"�� %d ���� ��������� �������� %.3f �� \n\n", n, s);

	system("pause");
	return 0;
}


/* ������� ������ ������� �����
for (n = 1, x = START_DIST; x < FINAL_DAY; ++n, x *= FACTOR)
n = 1, x = START_DIST - ��� ��������� ���������� �����
��� ����� ������ ������� ���� = 1 � ��������� ������ x = START_DIST.
��� ��������� ��������� �������, ������� ������������ � ���� ���������.
��� ����������� ����� �������.
x < FINAL_DAY - ��� �������, ������� ������.
++n, x *= FACTOR - ���������� � ��������� ��������. � ��� ��� �������?
��������� �������� � ��������� (�) �� ��������� ����.
�������� (�) �� ����� ��������. (�) �������� �� ���������� ����.
� ���������� � ���� ����� ��� ������ ������ ������ (���� ����� ������).
� � ���� ���� ����� �������� ���������� ������.
�� ������������� ��� ���� ����������  � � �������� �� ������ ���� �����.

������ ���� ������� ����� �����, ������ ��������� ������.
for (n = 1, x = START_DIST; x < FINAL_DIST; ++n, x *= FACTOR)
����� x < FINAL_DIST

� � ������� �����
for (n = 1, s = x = START_DIST; s < TOTAL_DIST; ++n, s +=x *= FACTOR)
n = 1, - ��� ������ ����
s = x = START_DIST - ������ ��� ������ � ������ ���� � ����
��������� ��������� �� ���� ����.
++n, s +=x *= FACTOR - ���������� � ��������� ��������.
++n, ������� ���� �������������
s +=x *= FACTOR � ��������������� ������� (�) �� ��������� ���� 
� ��� �� ������������� �������� ������������� � �����.

�������� (�������) ���������� ������ ��� ���������, ���������
����������� �������, ��� ��� ���� ��������� �����, �������
����������� �� ����� ��������: ������� ����������� ����� �������,
��� �������� �� ������ �� ��������� ����� �������� ��������� (�������).
����� ����������� ������ �������  � ��� �������� ����� ���������
����� ���������� ��������� (�������). ���������� ����� �������.

for (n = 1, s = x = START_DIST; s < TOTAL_DIST; ++n, s +=x *= FACTOR)
����� ���� �� �������� � ���:
for (n = 1, s=0,  x = START_DIST; s +=x, s < TOTAL_DIST; ++n, x *= FACTOR)

*/
