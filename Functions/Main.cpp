//Functions

#include<iostream>
using namespace std;

int Add(int a, int b);
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);// Использование функции (вызов функции) function call
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

int Add(int a, int b) //Addition, реализация функции (определение функции)
{
	int c = a + b;
	return c;
}
int Sub(int a, int b) //Subtraction (вычитание)
{
	return  a - b;
}
int Mul(int a, int b) //Multiplication
{
	return a * b;
}
double Div(int a, int b) //Division
{
	return (double)a / b;
}

