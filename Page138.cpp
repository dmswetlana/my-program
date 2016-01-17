//функция, которая выводит счастливые предсказания
//используем генератор случайных чисел
#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<clocale>

using std::cout;
using std::cin;

char *fortunes[] = {
	"Вскоре деньги потекут к Вам рекой. \n",
	"Вашу жизнь озарит новая любовь. \n",
	"Вы будете жить долго и счастливо. \n",
	"Вы найдёте новую работу. \n",
	"Близкий друг будет искать Вашего расположения. \n"
};

int main()
{
	setlocale(LC_CTYPE, "Russian_Russia.1251");

	int chance;

	cout << " Нажмие любую клавишу";

	// рандомизируем генератор случайных чисел
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

