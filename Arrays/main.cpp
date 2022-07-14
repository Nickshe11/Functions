//Arrays
#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);
int Sum(int arr[], const int n);
int Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void shiftLeft(int arr[], const int n, int turn);
void shiftRight(int arr[], const int n, int turn);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int turn = 0, turnR = 0;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива = " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива = " << Avg(arr, n) << endl;
	cout << "Минимальное значение элементов массива = " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение элементов массива = " << maxValueIn(arr, n) << "\n" << endl;
	cout << "Введите количество смещений элементов массива влево" << endl; cin >> turn;
	cout << tab << tab << tab << "Смещение влево на " << turn << " элементов" << endl;
	shiftLeft(arr, n, turn);
	Print(arr, n);
	cout << endl;
	cout << "Введите количество смещений элементов массива вправо" << endl; cin >> turnR;
	cout << tab << tab << tab << "Смещение вправо на " << turnR << " элементов" << endl;
	shiftRight(arr, n, turnR);
	Print(arr, n);

	/*const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);*/
}


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)	sum += arr[1];
	return sum;
}

int Avg(int arr[], const int n)
{
	int box = 0, avg = 0;
	for (int i = 0; i < n; i++)	box += arr[i];
	avg = box / n;
	return avg;
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

void shiftLeft(int arr[], const int n, int turn)
{
	for (int j = 0; j < turn; j++)
	{
		int box = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = box;
	}

}

void shiftRight(int arr[], const int n, int turn)
{
	for (int j = 0; j < turn; j++)
	{

		int box = arr[n - 1];
		for (int i = n - 1; i != 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = box;
	}
}