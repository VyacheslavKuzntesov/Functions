#include"Statistics.h"
template<typename T>T Sum(T arr[], int const n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>double AVG(T arr[], const int n)
{
	return Sum(arr, n) / n;
}
template<typename T>
T minValue(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
template<typename T>
T maxValue(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
template<typename T>
double AVG(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
template<typename T>
T minValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (min > arr[i][j])min = arr[i][j];
	return min;
}
template<typename T>
T maxValue(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (max < arr[i][j])max = arr[i][j];
	return max;
}