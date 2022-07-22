#pragma once
#include"stdafx.h"
#include"constants.h"
template<typename T>void shiftLeft(T arr[], const int n, int turn);
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int turn);

template<typename T>void shiftRight(T arr[], const int n, int turn);
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int turn);
