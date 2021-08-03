#include"stdafx.h"
#include"Shift.h"
#include"Shift.cpp"
#include"Statistics.h"
#include"Statistics.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Print.h"
#include"Print.cpp"
#include"FillRand.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	double arr_double[n];
	float arr_float[n];
	long long arr_long_long[n];
	char arr_char[n];
	double arr_double_2d[ROWS][COLS];
	float arr_float_2d[ROWS][COLS];
	long long arr_long_long_2d[ROWS][COLS];
	char arr_char_2d[ROWS][COLS];
	int number_of_shift = 0;
	char nomer_programmu;
	char v_programme;

	do
	{
		system("cls");
		cout << "Выберите тип массива: " << endl << "1.Тип массива DOUBLE(одномерный массив)" << endl << "2.Тип массива FLOAT(одномерный массив)" << endl << "3.Тип массива LONG LONG(одномерный массив)" << endl << "4.Тип массива CHAR(одномерный массив)" << endl << "5.Тип массива DOUBLE(двухмерный массив)" << endl << "6.Тип массива FLOAT(двухмерный массив)" << endl << "7.Тип массива LONG LONG(двухмерный массив)" << endl << "8.Тип массива CHAR(двухмерный массив)" << endl << "Escape - для выхода из программы" << endl << "Выберите тип: "; nomer_programmu = _getch();
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
				FillRand(arr_double, n);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print(arr_double, n);
					Sort(arr_double, n);
					cout << "Массив после сортировки: " << endl;
					Print(arr_double, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double, n);
					cout << endl << "Сумма массива = " << Sum(arr_double, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double, n);
					cout << endl << "Cреднее арифметическое массива = " << AVG(arr_double, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double, n);
					cout << endl << "Минимальное число массива = " << minValue(arr_double, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double, n);
					cout << endl << "Максимальное число массива = " << maxValue(arr_double, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr_double, n);
					cout << endl << "Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					shiftLeft(arr_double, n, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr_double, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr_double, n);
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					shiftRight(arr_double, n, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr_double, n);
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
				FillRand(arr_float, n);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print(arr_float, n);
					Sort(arr_float, n);
					cout << "Массив после сортировки: " << endl;
					Print(arr_float, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float, n);
					cout << endl << "Сумма массива = " << Sum(arr_float, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float, n);
					cout << endl << "Cреднее арифметическое массива = " << AVG(arr_float, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float, n);
					cout << endl << "Минимальное число массива = " << minValue(arr_float, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float, n);
					cout << endl << "Максимальное число массива = " << maxValue(arr_float, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr_float, n);
					cout << endl << "Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					shiftLeft(arr_float, n, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr_float, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr_float, n);
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					shiftRight(arr_float, n, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr_float, n);
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
				FillRand(arr_long_long, n);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print(arr_long_long, n);
					Sort(arr_long_long, n);
					cout << "Массив после сортировки: " << endl;
					Print(arr_long_long, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long, n);
					cout << endl << "Сумма массива = " << Sum(arr_long_long, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long, n);
					cout << endl << "Cреднее арифметическое массива = " << AVG(arr_long_long, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long, n);
					cout << endl << "Минимальное число массива = " << minValue(arr_long_long, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long, n);
					cout << endl << "Максимальное число массива = " << maxValue(arr_long_long, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr_long_long, n);
					cout << endl << "Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					shiftLeft(arr_long_long, n, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr_long_long, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr_long_long, n);
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					shiftRight(arr_long_long, n, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr_long_long, n);
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
			FillRand(arr_char, n);
			do
			{
				system("cls");
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" /*<< endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" */<< endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки: " << endl;
					Print(arr_char, n);
					Sort(arr_char, n);
					cout << "Массив после сортировки: " << endl;
					Print(arr_long_long, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				/*case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char, n);
					cout << endl << "Сумма массива = " << Sum(arr_char, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char, n);
					cout << endl << "Cреднее арифметическое массива = " << AVG(arr_char, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;*/
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char, n);
					cout << endl << "Минимальное число массива = " << minValue(arr_char, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char, n);
					cout << endl << "Максимальное число массива = " << maxValue(arr_char, n) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr_char, n);
					cout << endl << "Введите насколько элементов будет сдвинут массив влево: "; cin >> number_of_shift;
					shiftLeft(arr_char, n, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr_char, n);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Массив до сдвига: " << endl;
					Print(arr_char, n);
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					shiftRight(arr_char, n, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr_char, n);
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
				FillRand(arr_double_2d, ROWS, COLS);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки:" << endl;
					Print(arr_double_2d, ROWS, COLS);
					Sort(arr_double_2d, ROWS, COLS);
					cout << "Массив после сортировки:" << endl;
					Print(arr_double_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double_2d, ROWS, COLS);
					cout << "Сумма массива = " << Sum(arr_double_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double_2d, ROWS, COLS);
					cout << "Cреднее арифметическое массива = " << AVG(arr_double_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double_2d, ROWS, COLS);
					cout << "Минимальное число в массиве = " << minValue(arr_double_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_double_2d, ROWS, COLS);
					cout << "Максимальное число в массиве = " << maxValue(arr_double_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr_double_2d, ROWS, COLS);
					shiftLeft(arr_double_2d, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr_double_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr_double_2d, ROWS, COLS);
					shiftRight(arr_double_2d, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr_double_2d, ROWS, COLS);
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
				FillRand(arr_float_2d, ROWS, COLS);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки:" << endl;
					Print(arr_float_2d, ROWS, COLS);
					Sort(arr_float_2d, ROWS, COLS);
					cout << "Массив после сортировки:" << endl;
					Print(arr_float_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float_2d, ROWS, COLS);
					cout << "Сумма массива = " << Sum(arr_float_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float_2d, ROWS, COLS);
					cout << "Cреднее арифметическое массива = " << AVG(arr_float_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float_2d, ROWS, COLS);
					cout << "Минимальное число в массиве = " << minValue(arr_float_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_float_2d, ROWS, COLS);
					cout << "Максимальное число в массиве = " << maxValue(arr_float_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr_float_2d, ROWS, COLS);
					shiftLeft(arr_float_2d, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr_float_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr_float_2d, ROWS, COLS);
					shiftRight(arr_float_2d, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr_float_2d, ROWS, COLS);
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
				FillRand(arr_long_long_2d, ROWS, COLS);
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" << endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки:" << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					Sort(arr_long_long_2d, ROWS, COLS);
					cout << "Массив после сортировки:" << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					cout << "Сумма массива = " << Sum(arr_long_long_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					cout << "Cреднее арифметическое массива = " << AVG(arr_long_long_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					cout << "Минимальное число в массиве = " << minValue(arr_long_long_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					cout << "Максимальное число в массиве = " << maxValue(arr_long_long_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					shiftLeft(arr_long_long_2d, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
					shiftRight(arr_long_long_2d, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr_long_long_2d, ROWS, COLS);
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
			FillRand(arr_char_2d, ROWS, COLS);
			do
			{
				system("cls");
				cout << "Что хотите сделать с массивом: " << endl << "1.Вывести на экран" << endl << "2.Выполнить сортировку" /* << endl << "3.Найти сумму" << endl << "4.Найти среднее арифметическое" */<< endl << "5.Найти минимальное число" << endl << "6.Найти максимальное число" << endl << "7.Сдвиг влево" << endl << "8.Сдвиг вправо" << endl << "Escape - для возврата в предыдущее меню" << endl << "Выберете нужное действие: "; v_programme = _getch();
				switch (v_programme)
				{
				case '1':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '2':
					system("cls");
					cout << "Массив до сортировки:" << endl;
					Print(arr_char_2d, ROWS, COLS);
					Sort(arr_char_2d, ROWS, COLS);
					cout << "Массив после сортировки:" << endl;
					Print(arr_char_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				/*case '3':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char_2d, ROWS, COLS);
					cout << "Сумма массива = " << Sum(arr_char_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '4':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char_2d, ROWS, COLS);
					cout << "Cреднее арифметическое массива = " << AVG(arr_char_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;*/
				case '5':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char_2d, ROWS, COLS);
					cout << "Минимальное число в массиве = " << minValue(arr_char_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '6':
					system("cls");
					cout << "Массив: " << endl;
					Print(arr_char_2d, ROWS, COLS);
					cout << "Максимальное число в массиве = " << maxValue(arr_char_2d, ROWS, COLS) << endl;
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '7':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr_char_2d, ROWS, COLS);
					shiftLeft(arr_char_2d, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига влево: " << endl;
					Print(arr_char_2d, ROWS, COLS);
					cout << "Для продолжения нажмите любую клавишу"; _getch();
					break;
				case '8':
					system("cls");
					cout << "Введите насколько элементов будет сдвинут массив вправо: "; cin >> number_of_shift;
					cout << "Массив до сдвига: " << endl;
					Print(arr_char_2d, ROWS, COLS);
					shiftRight(arr_char_2d, ROWS, COLS, number_of_shift);
					cout << "Массив после сдвига вправо: " << endl;
					Print(arr_char_2d, ROWS, COLS);
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


