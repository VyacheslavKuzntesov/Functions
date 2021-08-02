#pragma warning(disable : 6031)
#pragma warning(disable : 26451)
#pragma warning(disable : 4326)
#pragma warning(disable : 4244)

#include<iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define Escape 27

template <class T>
void Sort(T arr[], const int n);

template <class T>
void Sort2d(T* arr[], const int ROWS, const int COLS);

template <class T>
void FillRand(T arr[], const int n);

template <class T>
void FillRand2d(T* arr[], const int ROWS, const int COLS);

template <class T>
void FillRandFloat(T arr[], const int n);

template <class T>
void FillRand2dFloat(T* arr[], const int ROWS, const int COLS);

template <class T>
void FillRandChar(T arr[], const int n);

template <class T>
void FillRand2dChar(T* arr[], const int ROWS, const int COLS);

template <class T>
void Print(T arr[], const int n);

template <class T>
void Print2d(T* arr[], const int ROWS, const int COLS);

template <class T>
T Sum(T arr[], const int n);

template <class T>
T Sum2d(T* arr[], const int ROWS, const int COLS);

template <class T>
double AVG(T arr[], const int n);

template <class T>
double AVG2d(T* arr[], const int ROWS, const int COLS);

template <class T>
T minValueIn(T arr[], const int n);

template <class T>
T minValueIn2d(T* arr[], const int ROWS, const int COLS);

template <class T>
T maxValueIn(T arr[], const int n);

template <class T>
T maxValueIn2d(T* arr[], const int ROWS, const int COLS);

template <class T>
void shiftLeft(T arr[], const int n, int number_of_shift);

template <class T>
void shiftLeft2d(T* arr[], const int ROWS, const int COLS, int number_of_shift);

template <class T>
void shiftRight(T arr[], const int n, int number_of_shift);

template <class T>
void shiftRight2d(T* arr[], const int ROWS, const int COLS, int number_of_shift);

void main()
{
	setlocale(LC_ALL, "Rus");
	char nomer_programmu;
	char v_programme;
	int number_of_shift;
	const int ROWS = 5;
	const int COLS = 5;
	const int n = 10;
	do
	{
		system("cls");
		cout << "Выберите тип массива: " << endl << "1.Тип массива INT(одномерный массив)" << endl << "2.Тип массива FLOAT(одномерный массив)" << endl << "3.Тип массива DOUBLE(одномерный массив)" << endl << "4.Тип массива CHAR(одномерный массив)" << endl << "5.Тип массива INT(двухмерный массив)" << endl << "6.Тип массива FLOAT(двухмерный массив)" << endl << "7.Тип массива DOUBLE(двухмерный массив)" << endl << "8.Тип массива CHAR(двухмерный массив)" << endl << "Escape - для выхода из программы" << endl << "Выберите тип: "; nomer_programmu = _getch();
		if (nomer_programmu != 27)
		{
			cout << nomer_programmu << endl << endl;
		}
		else
		{
			cout << "Escape" << endl;
		}
		switch (nomer_programmu)
		{
		case '1': {
			do
			{
				system("cls");
				int arr[n];
				FillRand(arr, n);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print(arr, n);
					Sort(arr, n);
					cout << "Массив после сортировки: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl <<"Сумма массива = " << Sum(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout <<endl <<"Cреднее арифметическое массива = " << AVG(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout <<endl<< "Минимальное число массива = " << minValueIn(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl <<"Максимальное число массива = " << maxValueIn(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr, n);
					cout << endl <<"Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					shiftLeft(arr, n, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr, n);
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					shiftRight(arr, n, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				default:
					if (v_programme != '1' && v_programme != '2' && v_programme != '3' && v_programme != '4' && v_programme != '5' && v_programme != '6' && v_programme != '7' && v_programme != '8' && v_programme != Escape)
					{
						system("cls");
						cout << "Нет такой программы" << endl << endl;
						cout << "Для продолжения нажмите любую клавишу"; _getch();
					}
					break;
				}
			} while (v_programme != Escape);
			break;
		}
		case '2':
		{
			do
			{
				system("cls");
				float arr[n];
				FillRandFloat(arr, n);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print(arr, n);
					Sort(arr, n);
					cout << "Массив после сортировки: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl << "Сумма массива = " << Sum(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl << "Cреднее арифметическое массива = " << AVG(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl << "Минимальное число массива = " << minValueIn(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl << "Максимальное число массива = " << maxValueIn(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr, n);
					cout << endl << "Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					shiftLeft(arr, n, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr, n);
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					shiftRight(arr, n, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				default:
					if (v_programme != '1' && v_programme != '2' && v_programme != '3' && v_programme != '4' && v_programme != '5' && v_programme != '6' && v_programme != '7' && v_programme != '8' && v_programme != Escape)
					{
						system("cls");
						cout << "Нет такой программы" << endl << endl;
						cout << "Для продолжения нажмите любую клавишу"; _getch();
					}
					break;
				}
			} while (v_programme != Escape);
			break;
		}
		case '3':
		{
			do
			{
				system("cls");
				double arr[n];
				FillRandFloat(arr, n);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print(arr, n);
					Sort(arr, n);
					cout << "Массив после сортировки: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl << "Сумма массива = " << Sum(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl << "Cреднее арифметическое массива = " << AVG(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl << "Минимальное число массива = " << minValueIn(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << endl << "Максимальное число массива = " << maxValueIn(arr, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr, n);
					cout << endl << "Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					shiftLeft(arr, n, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr, n);
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					shiftRight(arr, n, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				default:
					if (v_programme != '1' && v_programme != '2' && v_programme != '3' && v_programme != '4' && v_programme != '5' && v_programme != '6' && v_programme != '7' && v_programme != '8' && v_programme != Escape)
					{
						system("cls");
						cout << "Нет такой программы" << endl << endl;
						cout << "Для продолжения нажмите любую клавишу"; _getch();
					}
					break;
				}
			} while (v_programme != Escape);
			break;
		}
		case '4':
			system("cls");
			char arr[n];
			FillRandChar(arr, n);
			do
			{
				system("cls");
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Сдвиг влево" << endl << "4.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print(arr, n);
					Sort(arr, n);
					cout << "Массив после сортировки: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr, n);
					shiftLeft(arr, n, number_of_shift);
					cout << "Массив после сдвига: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr, n);
					shiftRight(arr, n, number_of_shift);
					cout << "Массив после сдвига: " << endl;
					Print(arr, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				default:
					if (v_programme != '1' && v_programme != '2' && v_programme != '3' && v_programme != '4' && v_programme != Escape)
					{
						system("cls");
						cout << "Нет такой программы" << endl << endl;
						cout << "Для продолжения нажмите любую клавишу"; _getch();
					}
					break;
				}
			} while (v_programme != Escape);
			break;
		case '5':
			do
			{
				system("cls");
				int arr[ROWS][COLS] = {};
				int* ptr[ROWS];
				for (int i = 0; i < ROWS; i++)ptr[i] = arr[i];
				FillRand2d(ptr, ROWS, COLS);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки:" << endl;
					Print2d(ptr, ROWS, COLS);
					Sort2d(ptr, ROWS, COLS);
					cout << "Массив после сортировки:" << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Сумма массива = " << Sum2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Cреднее арифметическое массива = " << AVG2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Минимальное число в массиве = " << minValueIn2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Максимальное число в массиве = " << maxValueIn2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					shiftLeft2d(ptr, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					shiftRight2d(ptr, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				default:
					if (v_programme != '1' && v_programme != '2' && v_programme != '3' && v_programme != '4' && v_programme != '5' && v_programme != '6' && v_programme != '7' && v_programme != '8' && v_programme != Escape)
					{
						system("cls");
						cout << "Нет такой программы" << endl << endl;
						cout << "Для продолжения нажмите любую клавишу"; _getch();
					}
					break;
				}
			} while (v_programme != Escape);
			break;

		case '6':
			do
			{
				system("cls");
				float arr[ROWS][COLS] = {};
				float* ptr[ROWS];
				for (int i = 0; i < ROWS; i++)ptr[i] = arr[i];
				FillRand2dFloat(ptr, ROWS, COLS);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки:" << endl;
					Print2d(ptr, ROWS, COLS);
					Sort2d(ptr, ROWS, COLS);
					cout << "Массив после сортировки:" << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Сумма массива = " << Sum2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Cреднее арифметическое массива = " << AVG2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Минимальное число в массиве = " << minValueIn2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Максимальное число в массиве = " << maxValueIn2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					shiftLeft2d(ptr, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					shiftRight2d(ptr, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				default:
					if (v_programme != '1' && v_programme != '2' && v_programme != '3' && v_programme != '4' && v_programme != '5' && v_programme != '6' && v_programme != '7' && v_programme != '8' && v_programme != Escape)
					{
						system("cls");
						cout << "Нет такой программы" << endl << endl;
						cout << "Для продолжения нажмите любую клавишу"; _getch();
					}
					break;
				}
			} while (v_programme != Escape);
			break;
		case '7':
			do
			{
				system("cls");
				double arr[ROWS][COLS] = {};
				double* ptr[ROWS];
				for (int i = 0; i < ROWS; i++)ptr[i] = arr[i];
				FillRand2dFloat(ptr, ROWS, COLS);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки:" << endl;
					Print2d(ptr, ROWS, COLS);
					Sort2d(ptr, ROWS, COLS);
					cout << "Массив после сортировки:" << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Сумма массива = " << Sum2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Cреднее арифметическое массива = " << AVG2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Минимальное число в массиве = " << minValueIn2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Максимальное число в массиве = " << maxValueIn2d(ptr, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					shiftLeft2d(ptr, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					shiftRight2d(ptr, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				default:
					if (v_programme != '1' && v_programme != '2' && v_programme != '3' && v_programme != '4' && v_programme != '5' && v_programme != '6' && v_programme != '7' && v_programme != '8' && v_programme != Escape)
					{
						system("cls");
						cout << "Нет такой программы" << endl << endl;
						cout << "Для продолжения нажмите любую клавишу"; _getch();
					}
					break;
				}
			} while (v_programme != Escape);
			break;
		case '8':
			system("cls");
			char arr1[ROWS][COLS];
			char* ptr[ROWS];
			for (int i = 0; i < ROWS; i++)ptr[i] = arr1[i];
			FillRand2dChar(ptr, ROWS, COLS);
			do
			{
				system("cls");
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Сдвиг влево" << endl << "4.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print2d(ptr, ROWS, COLS);
					Sort2d(ptr, ROWS, COLS);
					cout << "Массив после сортировки: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					shiftLeft2d(ptr, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					shiftRight2d(ptr, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига: " << endl;
					Print2d(ptr, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				default:
					if (v_programme != '1' && v_programme != '2' && v_programme != '3' && v_programme != '4' && v_programme != Escape)
					{
						system("cls");
						cout << "Нет такой программы" << endl << endl;
						cout << "Для продолжения нажмите любую клавишу"; _getch();
					}
					break;
				}
			} while (v_programme != Escape);
			break;
		default:
			if (nomer_programmu != '1' && nomer_programmu != '2' && nomer_programmu != '3' && nomer_programmu != '4' && nomer_programmu != '5' && nomer_programmu != '6' && nomer_programmu != '7' && nomer_programmu != '8' && nomer_programmu != Escape)
			{
				system("cls");
				cout << "Нет такой программы" << endl << endl;
				cout << "Для продолжения нажмите любую клавишу"; _getch();
			}
			break;
		}
	} while (nomer_programmu != Escape);
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void Sort2d(T* arr[], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void FillRand2d(T* arr[], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void FillRandFloat(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0.1 * (rand() % 100);
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void FillRand2dFloat(T* arr[], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = 0.1 * (rand() % 100);
		}
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void FillRandChar(T arr[], const int n)
{
	int random;
	char FillChar;
	cout << "Выберете чем заполнять массив: " << endl << "1. Буквами(печатные большие и маленькие буквы) и цифрами" << endl << "2. Маленькие буквы" << endl << "3. Большие буквы" << endl << "4. Цифры" << endl << "Escape - вернуться к выбору типа массива" << endl << "Выберете пункт меню: "; FillChar = _getch(); cout << endl;
	for (int i = 0; i < n; i++)
	{
		switch (FillChar)
		{
		case '1':
			random = rand() % 10;
			if (random <= 3)arr[i] = 'a' + rand() % 25;
			else if (random <= 6 && random > 3)arr[i] = 'A' + rand() % 25;
			else arr[i] = '1' + rand() % 9;
			break;
		case '2':
			arr[i] = 'a' + rand() % 25;
			break;
		case '3':
			arr[i] = 'A' + rand() % 25;
			break;
		case '4':
			arr[i] = '1' + rand() % 9;
		default:
			break;
		}
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void FillRand2dChar(T* arr[], const int ROWS, const int COLS)
{
	int random;
	char FillChar;
	cout << "Выберете чем заполнять массив: " << endl << "1. Буквами(печатные большие и маленькие буквы) и цифрами" << endl << "2. Маленькие буквы" << endl << "3. Большие буквы" << endl << "4. Цифры" << endl << "Escape - вернуться к выбору типа массива" << endl << "Выберете пункт меню: "; FillChar = _getch(); cout << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			switch (FillChar)
			{
			case '1':
				random = rand() % 10;
				if (random <= 3)arr[i][j] = 'a' + rand() % 25;
				else if (random <= 6 && random > 3)arr[i][j] = 'A' + rand() % 25;
				else arr[i][j] = '1' + rand() % 9;
				break;
			case '2':
				arr[i][j] = 'a' + rand() % 25;
				break;
			case '3':
				arr[i][j] = 'A' + rand() % 25;
				break;
			case '4':
				arr[i][j] = '1' + rand() % 9;
			default:
				break;
			}
		}
	}
}

//------------------------------------------------------------------------------------------------------------
template <class T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void Print2d(T* arr[], const int ROWS, const int COLS)
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
//------------------------------------------------------------------------------------------------------------
template <class T>
T Sum(T arr[], const int n)
{
	T result;
	result = 0;
	for (int i = 0; i < n; i++)
	{
		result += arr[i];
	}
	return result;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
T Sum2d(T* arr[], const int ROWS, const int COLS)
{
	T result = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			result += arr[i][j];
		}
	}
	return result;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
double AVG(T arr[], const int n)
{
	double result = 0;
	T sum = Sum(arr, n);
	result = (double)sum / n;
	return result;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
double AVG2d(T* arr[], const int ROWS, const int COLS)
{
	double result = 0;
	T sum = Sum2d(arr, ROWS, COLS);
	result = (double)sum / (COLS * ROWS);
	return result;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
T minValueIn(T arr[], const int n)
{
	T result = arr[0];
	for (int i = 1; i < n; i++) if (result > arr[i])result = arr[i];
	return result;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
T minValueIn2d(T* arr[], const int ROWS, const int COLS)
{
	T result;
	result = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (result > arr[i][j])result = arr[i][j];
	return result;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
T maxValueIn(T arr[], const int n)
{
	T result = arr[0];
	for (int i = 1; i < n; i++) if (result < arr[i])result = arr[i];
	return result;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
T maxValueIn2d(T* arr[], const int ROWS, const int COLS)
{
	T result;
	result = arr[0][0];
	for (int i = 1; i < ROWS; i++)for (int j = 0; j < COLS; j++)if (result < arr[i][j])result = arr[i][j];
	return result;
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void shiftLeft(T arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void shiftLeft2d(T* arr[], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[0][0];
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				if (k == (COLS - 1) && j != (ROWS - 1))arr[j][k] = arr[j + 1][0];
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void shiftRight(T arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
//------------------------------------------------------------------------------------------------------------
template <class T>
void shiftRight2d(T* arr[], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < (ROWS * COLS) - number_of_shift; i++)
	{
		T buffer = arr[0][0];
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = 0; k < COLS; k++)
			{
				if (k == (COLS - 1) && j != (ROWS - 1))arr[j][k] = arr[j + 1][0];
				arr[j][k] = arr[j][k + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
//------------------------------------------------------------------------------------------------------------