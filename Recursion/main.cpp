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
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);*/
	int num, counter = 1;
	double box = 1;
	cout << "������� ����� ��� ���������� ����������: "; cin >> num;
	cout << "��������� ����� " << num << " = " << factorio(num, box, counter) << endl;

	int pow;
	cout << "������� ����� ��� ���������� � �������: "; cin >> num;
	cout << "������� �������� �������: "; cin >> pow;
	cout << "��������� ���������� ����� " << num << " � ������� " << pow << " = " << Power(num, pow, counter - 1, box) << endl;

	int first = 0, sec = 1, number;
	double limit;
	cout << "������� ���������� ����� � ���� ���������: "; cin >> number;
	fibonachi(first, sec, counter - 1, number);
	cout << endl;
	cout << "������� ������ ��� ���� ���������: "; cin >> limit;
	fibonachi(first, sec, counter - 1, limit);

}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����\n";
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����\n";
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
