#pragma once
#include"stdafx.h"
void shiftLeft(double arr[], const int n, int number_of_shift);
void shiftLeft(float arr[], const int n, int number_of_shift);
void shiftLeft(long long arr[], const int n, int number_of_shift);
void shiftLeft(char arr[], const int n, int number_of_shift);

void shiftRight(double arr[], const int n, int number_of_shift);
void shiftRight(float arr[], const int n, int number_of_shift);
void shiftRight(long long arr[], const int n, int number_of_shift);
void shiftRight(char arr[], const int n, int number_of_shift);

void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftLeft(long long arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);

void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftRight(long long arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);