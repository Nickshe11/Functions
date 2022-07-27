#include<iostream>
#define tab "\t"
using namespace std;

void elevator(int floor);
int factorio(int num, int box, int i);
int Power(int num, int pow, int i,int box);
void fibonachi(int a, int b, int i, int lim);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello world";
	/*int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);*/
	int num, box = 1, counter = 1;
	cout << "Введите число для вычисления факториала: "; cin >> num;
	factorio(num, box, counter);

	int digit, pow, i = 0;
	cout << "Введите число для возведения в степень: "; cin >> digit;
	cout << "Введите значение степени: "; cin >> pow;
	Power(digit, pow, i, box);

	int first = 0, sec = 1, limit;
	cout << "Введите количество чисел в ряде Фибоначчи: "; cin >> limit;
	fibonachi(first, sec, i, limit);
}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже\n";
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже\n";
}

int factorio(int num, int box, int i)
{
	if (i > num)
	{
		cout << "Факториал числа " << num << " = " << box << endl;
		return box;
	}
	factorio(num, box * i, i + 1);
}

int Power(int num, int pow, int i, int box)
{
	if (i == pow)
	{
		cout << "Число " << num << " в степени " << pow << " = " << box<<endl;
		return box;
	}
	Power(num, pow, i + 1, box * num);
}

void fibonachi(int a, int b, int i, int lim)
{
	if (i == lim)
	{
		return;
	}
	cout << a << tab;
	fibonachi(b, a + b, i + 1, lim);
}
