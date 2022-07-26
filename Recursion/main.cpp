#include<iostream>
#define tab "\t"
using namespace std;

void elevator(int floor);
void fibonachi(int a, int b, int i);
int factorio(int num, int box, int i);

void main()
{
	setlocale(LC_ALL, "");
	//cout << "Hello world";
	/*int floor;
	cout << "������� ����� �����: "; cin >> floor;
	elevator(floor);*/
	int num, box=0;
	int first = 0, sec = 1, i = 1;
	cout << "������� ����� ��� ���������� ����������: "; cin >> num;
	factorio(num, box, i);
	cout << "��������� ����� " << num << " = " << box;

	//fibonachi(first, sec, i);
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

void fibonachi(int a, int b, int i)
{
	if (i == 21)
	{
		return;
	}
	cout << a << tab; i++;
	fibonachi(b, a + b, i);
}

int factorio(int num, int box, int i)
{
	if (i >= num)
	{
		return box;
	}
	factorio(num, i*(i+1), i+2);
}