#include"Statistics.h"

double Sum(double arr[], int const n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], int const n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

long long Sum(long long arr[], int const n)
{
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(char arr[], int const n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i] - '0';
	}
	return sum;
}
//------------------------------------------------------------------------------
double AVG(double arr[], const int n)
{
	return Sum(arr, n) / n;
}

double AVG(float arr[], const int n)
{
	return Sum(arr, n) / n;
}

double AVG(long long arr[], const int n)
{
	return Sum(arr, n) / n;
}

double AVG(char arr[], const int n)
{
	return Sum(arr, n) / n;
}
//------------------------------------------------------------------------------
double minValue(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

float minValue(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

long long minValue(long long arr[], const int n)
{
	long long min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int minValue(char arr[], const int n)
{
	int min = arr[0] - '0';
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i] - '0';
		}
	}
	return min;
}
//------------------------------------------------------------------------------
double maxValue(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

float maxValue(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

long long maxValue(long long arr[], const int n)
{
	long long max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int maxValue(char arr[], const int n)
{
	double max = arr[0] - '0';
	for (int i = 0; i < n; i++)
	{
		if (arr[i] - '0' > max)
		{
			max = arr[i] - '0';
		}
	}
	return max;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

long long Sum(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	long long sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j] - '0';
		}
	}
	return sum;
}
//------------------------------------------------------------------------------
double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double AVG(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double AVG(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double AVG(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
//------------------------------------------------------------------------------
double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (min > arr[i][j])min = arr[i][j];
	return min;
}

float minValue(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float min = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (min > arr[i][j])min = arr[i][j];
	return min;
}

long long minValue(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (min > arr[i][j])min = arr[i][j];
	return min;
}

int minValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0] - '0';
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (min > arr[i][j] - '0')min = arr[i][j] - '0';
	return min;
}
//------------------------------------------------------------------------------
double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (max < arr[i][j])max = arr[i][j];
	return max;
}

float maxValue(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (max < arr[i][j])max = arr[i][j];
	return max;
}

long long maxValue(long long arr[ROWS][COLS], const int ROWS, const int COLS)
{
	long long max = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (max < arr[i][j])max = arr[i][j];
	return max;
}

int maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0] - '0';
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (max < arr[i][j] - '0')max = arr[i][j] - '0';
	return max;
}