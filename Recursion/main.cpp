#include<iostream>
#define tab "\t"
using namespace std;

void elevator(int floor);
int factorio(int num, double box, int i);
double Power(int num, int pow, int i, double box);
void fibonachi(int a, int b, int i, int counter);
void fibonachi(int a, int b, int i, double lim);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello world";
	/*int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);*/
	int num, counter = 1;
	double box = 1;
	cout << "Введите число для вычисления факториала: "; cin >> num;
	cout << "Факториал числа " << num << " = " << factorio(num, box, counter) << endl;

	int pow;
	cout << "Введите число для возведения в степень: "; cin >> num;
	cout << "Введите значение степени: "; cin >> pow;
	cout << "Результат возведения числа " << num << " в степень " << pow << " = " << Power(num, pow, counter - 1, box) << endl;

	int first = 0, sec = 1, number;
	double limit;
	cout << "Введите количество чисел в ряде Фибоначчи: "; cin >> number;
	fibonachi(first, sec, counter - 1, number);
	cout << endl;
	cout << "Введите предел для ряда Фибоначчи: "; cin >> limit;
	fibonachi(first, sec, counter - 1, limit);

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

int factorio(int num, double box, int i)
{
	if (i > num)
	{
		return box;
	}
	factorio(num, box * i, i + 1);
}

double Power(int num, int pow, int i, double box)
{
	if (pow < 0)
	{
		if (i == -pow)
		{
			box = 1 / box;
			return box;
		}
	}
	else
	{
		if (i == pow)
		{
			return box;
		}
	}
	Power(num, pow, i + 1, box * num);
}

void fibonachi(int a, int b, int i, int counter)
{
	if (i == counter)
	{
		return;
	}
	cout << a << tab;
	fibonachi(b, a + b, i + 1, counter);
}

void fibonachi(int a, int b, int i, double lim)
{
	cout << a << tab;
	if (b > lim)
	{
		return;
	}
	fibonachi(b, a + b, i + 1, lim);
}
