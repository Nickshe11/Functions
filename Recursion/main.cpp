#include<iostream>
#define tab "\t"
using namespace std;

void elevator(int floor);
int factorio(int num);
double Power(double num, int pow);
void fibonachi(int a, int b, int i, int counter);
void fibonachi(int a, int b, int i, double lim);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello world";
	/*int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);*/
	double num;
	cout << "Введите число для вычисления факториала: "; cin >> num;
	int counter = num - 1;
	cout << "Факториал числа " << num << " = " << factorio(num) << endl;

	int pow;
	counter = 1;
	cout << "Введите число для возведения в степень: "; cin >> num;
	cout << "Введите значение степени: "; cin >> pow;
	cout << "Результат возведения числа " << num << " в степень " << pow << " = " << Power(num, pow) << endl;

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

int factorio(int num)
{
	if (num == 1)
	{
		return 1;
	}
	num=num*factorio(num-1);
	return num;
}

double Power(double num, int pow)
{
	if (pow == 0)
	{
		num = 1;
		return num;
	}
	if (pow < 0)
	{
		pow++;
		if (pow == 0)
		{
			num = 1 / num;
			return num;
		}
	}
	else
	{
		pow--;
		if (pow==0)
		{
			return num;
		}
	}
	Power(num * (num / (num / 2)), pow);
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
