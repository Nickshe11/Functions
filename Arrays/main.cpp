﻿//Arrays
#include<iostream>

using namespace std;

#define tab "\t"
#define delimiter "_____________________________________"
const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int turn);
void shiftLeft(double arr[], const int n, int turn);
void shiftLeft(char arr[], const int n, int turn);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int turn);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int turn);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int turn);

void shiftRight(int arr[], const int n, int turn);
void shiftRight(double arr[], const int n, int turn);
void shiftRight(char arr[], const int n, int turn);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int turn);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int turn);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int turn);

void main()
{
	setlocale(LC_ALL, "");
	int choice = 0;
	cout << "Выберите вариант массива для работы:" << "\n" << "1 - одномерный массив" << "\n" << "2 - одномерный массив с элементами типа double" << endl;
	cout << "3 - одномерный массив с элементами типа char" << "\n" << "4 - двумерный массив" << "\n" << "5 - двумерный массив с элементами типа double" << endl;
	cout << "6 - двумерный массив с элементами типа char" << endl;
	cout << endl;
	cin >> choice;
	cout << delimiter << endl;

	int turn = 0, turnR = 0;
	const int n = 6;
	const int SIZE = 8;
	switch (choice)
	{
	case 1:
		int arr[n];
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
		break;

	case 2:
		double brr[SIZE];
		FillRand(brr, SIZE);
		Print(brr, SIZE);
		/*Sort(brr, SIZE);
		Print(brr, SIZE);*/
		cout << "Сумма элементов массива = " << Sum(brr, SIZE) << endl;
		cout << "Среднее арифметическое элементов массива = " << Avg(brr, SIZE) << endl;
		cout << "Минимальное значение элементов массива = " << minValueIn(brr, SIZE) << endl;
		cout << "Максимальное значение элементов массива = " << maxValueIn(brr, SIZE) << "\n" << endl;
		cout << "Введите количество смещений элементов массива влево" << endl; cin >> turn;
		cout << tab << tab << tab << "Смещение влево на " << turn << " элементов" << endl;
		shiftLeft(brr, SIZE, turn);
		Print(brr, SIZE);
		cout << endl;
		cout << "Введите количество смещений элементов массива вправо" << endl; cin >> turnR;
		cout << tab << tab << tab << "Смещение вправо на " << turnR << " элементов" << endl;
		shiftRight(brr, SIZE, turnR);
		Print(brr, SIZE);
		cout << delimiter << endl;
		break;

	case 3:
		char arrch[n];
		FillRand(arrch, n);
		Print(arrch, n);
		cout << "Сумма элементов массива = " << Sum(arrch, n) << endl;
		cout << "Среднее арифметическое элементов массива = " << Avg(arrch, n) << endl;
		cout << "Минимальное значение элементов массива  " << minValueIn(arrch, n) << " = " << (int)minValueIn(arrch, n) << endl;
		cout << "Максимальное значение элементов массива  " << maxValueIn(arrch, n) << " = " << (int)maxValueIn(arrch, n) << "\n" << endl;
		cout << "Введите количество смещений элементов массива влево" << endl; cin >> turn;
		cout << tab << tab << tab << "Смещение влево на " << turn << " элементов" << endl;
		shiftLeft(arrch, n, turn);
		Print(arrch, n);
		cout << endl;
		cout << "Введите количество смещений элементов массива вправо" << endl; cin >> turnR;
		cout << tab << tab << tab << "Смещение вправо на " << turnR << " элементов" << endl;
		shiftRight(arrch, n, turnR);
		Print(arrch, n);
		break;

	case 4:
		int i_arr_2[ROWS][COLS];
		FillRand(i_arr_2, ROWS, COLS);
		Print(i_arr_2, ROWS, COLS);
		cout << "Сумма элементов массива = " << Sum(i_arr_2, ROWS, COLS) << endl;
		cout << "Среднее арифметическое элементов массива = " << Avg(i_arr_2, ROWS, COLS) << endl;
		cout << "Минимальное значение элементов массива = " << minValueIn(i_arr_2, ROWS, COLS) << endl;
		cout << "Максимальное значение элементов массива = " << maxValueIn(i_arr_2, ROWS, COLS) << "\n" << endl;
		cout << endl;
		cout << "Введите количество смещений элементов массива влево" << endl; cin >> turn;
		cout << tab << tab << tab << "Смещение влево на " << turn << " элементов" << endl;
		shiftLeft(i_arr_2, ROWS, COLS, turn);
		Print(i_arr_2, ROWS, COLS);
		cout << endl;
		cout << "Введите количество смещений элементов массива вправо" << endl; cin >> turnR;
		cout << tab << tab << tab << "Смещение вправо на " << turnR << " элементов" << endl;
		shiftRight(i_arr_2, ROWS, COLS, turnR);
		Print(i_arr_2, ROWS, COLS);
		cout << delimiter << "\n" << endl;
		break;

	case 5:
		double i_arr_2double[ROWS][COLS];
		FillRand(i_arr_2double, ROWS, COLS);
		Print(i_arr_2double, ROWS, COLS);
		cout << "Сумма элементов массива = " << Sum(i_arr_2double, ROWS, COLS) << endl;
		cout << "Среднее арифметическое элементов массива = " << Avg(i_arr_2double, ROWS, COLS) << endl;
		cout << "Минимальное значение элементов массива = " << minValueIn(i_arr_2double, ROWS, COLS) << endl;
		cout << "Максимальное значение элементов массива = " << maxValueIn(i_arr_2double, ROWS, COLS) << "\n" << endl;
		cout << endl;
		cout << "Введите количество смещений элементов массива влево" << endl; cin >> turn;
		cout << tab << tab << tab << "Смещение влево на " << turn << " элементов" << endl;
		shiftLeft(i_arr_2double, ROWS, COLS, turn);
		Print(i_arr_2double, ROWS, COLS);
		cout << endl;
		cout << "Введите количество смещений элементов массива вправо" << endl; cin >> turnR;
		cout << tab << tab << tab << "Смещение вправо на " << turnR << " элементов" << endl;
		shiftRight(i_arr_2double, ROWS, COLS, turnR);
		Print(i_arr_2double, ROWS, COLS);
		cout << delimiter << "\n" << endl;
		break;

	case 6:
		char i_arr_2char[ROWS][COLS];
		FillRand(i_arr_2char, ROWS, COLS);
		Print(i_arr_2char, ROWS, COLS);
		cout << "Сумма элементов массива = " << Sum(i_arr_2char, ROWS, COLS) << endl;
		cout << "Среднее арифметическое элементов массива = " << Avg(i_arr_2char, ROWS, COLS) << endl;
		cout << "Минимальное значение элементов массива   " << minValueIn(i_arr_2char, ROWS, COLS) << " = " << (int)minValueIn(i_arr_2char, ROWS, COLS) << endl;
		cout << "Максимальное значение элементов массива   " << maxValueIn(i_arr_2char, ROWS, COLS) << " = " << (int)maxValueIn(i_arr_2char, ROWS, COLS) << "\n" << endl;
		cout << endl;
		cout << "Введите количество смещений элементов массива влево" << endl; cin >> turn;
		cout << tab << tab << tab << "Смещение влево на " << turn << " элементов" << endl;
		shiftLeft(i_arr_2char, ROWS, COLS, turn);
		Print(i_arr_2char, ROWS, COLS);
		cout << endl;
		cout << "Введите количество смещений элементов массива вправо" << endl; cin >> turnR;
		cout << tab << tab << tab << "Смещение вправо на " << turnR << " элементов" << endl;
		shiftRight(i_arr_2char, ROWS, COLS, turnR);
		Print(i_arr_2char, ROWS, COLS);
		cout << delimiter << "\n" << endl;
		break;

	default:cout << "Введено неверное значение" << endl;
	}
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
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 96;
		arr[i] += 32;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) arr[i][j] = rand() % 100;
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 96;
			arr[i][j] += 32;
		}
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
void Print(char arr[], const int n)
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
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
	for (int i = 0; i < n; i++)	sum += arr[i];
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)	sum += arr[i];
	return sum;
}
int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)	sum += (int)arr[i];
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
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) sum += arr[i][j];
	}
	return sum;
}
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	}
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}
char minValueIn(char arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > (int)arr[i])
		{
			min = arr[i];
		}
	}
	return (char)min;
}
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return (char)min;
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
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
char maxValueIn(char arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < (int)arr[i])
		{
			max = arr[i];
		}
	}
	return (char)max;
}
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return (char)max;
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
void shiftLeft(double arr[], const int n, int turn)
{
	for (int j = 0; j < turn; j++)
	{
		double box = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = box;
	}
}
void shiftLeft(char arr[], const int n, int turn)
{
	for (int j = 0; j < turn; j++)
	{
		char box = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = box;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int turn)
{
	for (int k = 0; k < turn; k++)
	{
		int box = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i < ROWS - 1)
			{
				arr[i][COLS - 1] = arr[i + 1][0];
			}
		}
		arr[ROWS - 1][COLS - 1] = box;
	}
}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int turn)
{
	for (int k = 0; k < turn; k++)
	{
		double box = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i < ROWS - 1)
			{
				arr[i][COLS - 1] = arr[i + 1][0];
			}
		}
		arr[ROWS - 1][COLS - 1] = box;
	}
}
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int turn)
{
	for (int k = 0; k < turn; k++)
	{
		char box = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i < ROWS - 1)
			{
				arr[i][COLS - 1] = arr[i + 1][0];
			}
		}
		arr[ROWS - 1][COLS - 1] = box;
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
void shiftRight(double arr[], const int n, int turn)
{
	for (int j = 0; j < turn; j++)
	{
		double box = arr[n - 1];
		for (int i = n - 1; i != 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = box;
	}
}
void shiftRight(char arr[], const int n, int turn)
{
	for (int j = 0; j < turn; j++)
	{
		char box = arr[n - 1];
		for (int i = n - 1; i != 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = box;
	}
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int turn)
{
	for (int k = 0; k < turn; k++)
	{
		int box = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = box;
	}
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int turn)
{
	for (int k = 0; k < turn; k++)
	{
		double box = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = box;
	}
}
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int turn)
{
	for (int k = 0; k < turn; k++)
	{
		char box = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = arr[i - 1][COLS - 1];
		}
		arr[0][0] = box; 
	}
}
