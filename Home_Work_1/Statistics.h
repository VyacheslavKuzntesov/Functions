#pragma once
#include"stdafx.h"
double Sum(double arr[], int const n);
float Sum(float arr[], int const n);
long long Sum(long long arr[], int const n);
int Sum(char arr[], int const n);

double AVG(double arr[], const int n);
double AVG(float arr[], const int n);
double AVG(long long arr[], const int n);
double AVG(char arr[], const int n);

double minValue(double arr[], const int n);
float minValue(float arr[], const int n);
long long minValue(long long arr[], const int n);
int minValue(char arr[], const int n);

double maxValue(double arr[], const int n);
float maxValue(float arr[], const int n);
long long maxValue(long long arr[], const int n);
int maxValue(char arr[], const int n);

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long Sum(long long arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(float arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(long long arr[ROWS][COLS], const int ROWS, const int COLS);
double AVG(char arr[ROWS][COLS], const int ROWS, const int COLS);

double minValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
float minValue(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long minValue(long long arr[ROWS][COLS], const int ROWS, const int COLS);
int minValue(char arr[ROWS][COLS], const int ROWS, const int COLS);

double maxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValue(float arr[ROWS][COLS], const int ROWS, const int COLS);
long long maxValue(long long arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValue(char arr[ROWS][COLS], const int ROWS, const int COLS);