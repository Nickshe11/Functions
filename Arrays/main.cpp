//Arrays
#include<iostream>
#include<conio.h>
using namespace std;

#define tab "\t"
#define delimiter "_____________________________________"
const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);

void shiftLeft(int arr[], const int n, int turn);
void shiftRight(int arr[], const int n, int turn);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 13;
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
	/*cout << "Введите количество смещений элементов массива влево" << endl; cin >> turn;
	cout << tab << tab << tab << "Смещение влево на " << turn << " элементов" << endl;
	shiftLeft(arr, n, turn);
	Print(arr, n);
	cout << endl;
	cout << "Введите количество смещений элементов массива вправо" << endl; cin >> turnR;
	cout << tab << tab << tab << "Смещение вправо на " << turnR << " элементов" << endl;
	shiftRight(arr, n, turnR);
	Print(arr, n);*/

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива = " << Sum(i_arr_2,ROWS,COLS) << endl;

	cout << delimiter << endl;
}


void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for(int j =0;j<COLS;j++) arr[i][j] = rand() % 100;
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

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
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

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
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

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)	sum += arr[1];
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) sum += arr[i][j];
	}
	return sum;
}


double Avg(int arr[], const int n)
{
	return (double)Sum(arr,n)/n;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr,n)/n;
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