//объ€вление параметра, котрый принимает указатель на массив
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

void cube(int *n, int num);

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	int t[10], i, nums[10];

	for (i = 0; i < 10; i++)
		t[i] = i;
	display(t); //передаЄм функции массив t
	cout << "\n";
	
	display2(t); //передаЄм функции массив t
	cout << "\n";

	display3(t); //передаЄм функции массив t
	cout << "\n";

	// Ёту программу можно переписать, не использу€
	// передачу целого массива

	for (i = 0; i < 10; i++)
		t[i] = i;
	for (i = 0; i < 10; i++)
		disp(t[i]);
	cout << "\n";

	for (i = 0; i < 10; i++)
		nums[i] = i+1;
	cout << "»сходное содержимое массива: ";
	for (i = 0; i < 10; i++)
		cout << nums[i] << ' ';
	cout << "\n";

	cube(nums, 10); //вычисл€ем кубы значений
	cout << "»зменЄнное содержимое: ";
	for (i = 0; i < 10; i++)
		cout << nums[i] << ' ';
	cout << "\n";

	system("pause");
	return 0;
}

//функци€ выводит все элементы массива
void display(int num[10])
{
	int i;
	for (i = 0; i < 10; i++)
		cout << num[i] << " ";
}

//здесь параметр num объ€вл€етс€ как целочисленный массив
//неизвестного размера. ѕреобразуетс€ компил€тором в указатель
//на целочисленное значение
void display2(int num[])
{
	int i;
	for (i = 0; i < 10; i++)
		cout << num[i] << " ";
}

//при передаче массива функции еЄ параметр можно 
//объ€вить как указатель
void display3(int *num)
{
	int i;
	for (i = 0; i < 10; i++)
		cout << num[i] << " ";
}

//функци€ выводит одно число
void disp(int num)
{
		cout << num << " ";
}

//вычисл€ем кубы значений
void cube(int *n, int num)
{
	while (num){
		*n = *n * *n * *n;
		num--;
		n++;
	           }
}