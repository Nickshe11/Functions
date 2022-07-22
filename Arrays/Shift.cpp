#include"Shift.h"
template<typename T>void shiftLeft(T arr[], const int n, int turn)
{
	for (int j = 0; j < turn; j++)
	{
		T box = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = box;
	}
}
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int turn)
{
	for (int k = 0; k < turn; k++)
	{
		T box = arr[0][0];
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

template<typename T>void shiftRight(T arr[], const int n, int turn)
{
	for (int j = 0; j < turn; j++)
	{
		T box = arr[n - 1];
		for (int i = n - 1; i != 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = box;
	}
}
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int turn)
{
	for (int k = 0; k < turn; k++)
	{
		T box = arr[ROWS - 1][COLS - 1];
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
