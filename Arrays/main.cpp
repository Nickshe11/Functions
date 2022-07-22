//Arrays
//#include"stdafx.h"
//#include"constants.h"
#include"FillRand.h"//std и constants подтягиваются из FillRand
#include"Print.h"
#include"Print.cpp"// если функция шаблонная, ее реализацию ОБЯЗАТЕЛЬНО надо подключать на место вызова
#include"Sort.h"
#include"Statistics.h"
#include"Statistics.cpp"
#include"Shift.h"
#include"Shift.cpp"

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