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
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);*/
	int num, box = 1, counter = 1;
	cout << "������� ����� ��� ���������� ����������: "; cin >> num;
	factorio(num, box, counter);

	int digit, pow, i = 0;
	cout << "������� ����� ��� ���������� � �������: "; cin >> digit;
	cout << "������� �������� �������: "; cin >> pow;
	Power(digit, pow, i, box);

	int first = 0, sec = 1, limit;
	cout << "������� ���������� ����� � ���� ���������: "; cin >> limit;
	fibonachi(first, sec, i, limit);
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

int factorio(int num, int box, int i)
{
	if (i > num)
	{
		cout << "��������� ����� " << num << " = " << box << endl;
		return box;
	}
	factorio(num, box * i, i + 1);
}

int Power(int num, int pow, int i, int box)
{
	if (i == pow)
	{
		cout << "����� " << num << " � ������� " << pow << " = " << box<<endl;
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
