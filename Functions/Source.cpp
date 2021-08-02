﻿#include<iostream>
#include<ctime>
using namespace std;

#define tab "\t"

int Add(int a, int b); // прототип функции(объявление функции - )

int Sub(int a, int b);

int Mul(int a, int b);

double Div(int a, int b);

double Power(double a = 1, int n = 2);//Возводит число в степень
// Если в функцию передать одно число то она возведёт её в квадрат

const int ROWS = 8;
const int COLS = 5;

int Sum(int arr[], const int n);
double Sum(double arr[], int const n);

double AVG(int arr[], const int n);
double AVG(double arr[], const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[], const int n);
void FillRand(int arr[], const int n);

int minValue(int arr[], const int n);
double minValue(double arr[], const int n);

int maxValue(int arr[], const int n);
double maxValue(double arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Rus");
	//Функция - это именованная последовательность выраженний и другиг синтаксических конструкций С++ реализующая определённый алгоритм
	//Например возведение в степень, нахождение квадратного корня, заполнение массива случайными числами, вывод массива на экран, сортировка массива и тд.
	//Один раз написанная функция может быть вызванна сколько угодно раз это позволяет взначительной степени сократить объём исходного кода за счёт повторного использованния кода кроме того функции позволяют исходный код одной программы разместить в нескольких исходных файлов что очень удобно при больших обёмах исходного кода так же благодаря этому(несколько исходных файлов) разные программисты могут разробатывать разные части программы 
	//Также вынос отдельных функций в разные файлы позволяют одни и теже функции использовать в разных проектах и в скольки угодна праграммах посколько функции можно вносить в статические библиотеке(lib) и динамическии библиотеки(DLL)
	//Функции в любом языке программирования реализуют очень важные моменты к которым стримиться всё программирования к повторному использованию кода 
	//В разных языках программирования функции называют по разному но это являеться именноваными фрагментами кода
	//прежде чем использовать функцию ёё нужно обявить и написать
	/*
	Declaration of variable - объявление переменной

	Declaration of array - объявления массива

	Declaration and defenition of function
	type - это тип возвращаемого значения(любая функция по завершению возвращает какоето значение - результат), у любого значения есть тип, тип значения которого функция возвращает мы указ при обявлении функции есть функции которые ничего не возвращают по завершению по скольку результаты их работы и так виден либо можно проверить(функция вывода на экран массива или сортировки или заполнения если функция ничего не возвращает по завершения то тип её будет void типом может быть любой тип данных)
	Если тип возвращаемого значения отличный от void то в её теле обязательно должно присутстовать ключевое слово return с значением(return value)
	ключевое слово return прерывает работу функции и возвращает значение и управление на место вызова
	Если функциия ни чего  не возвращает тоесть тип void то ключевое слово return не обязательно но его можно использовать для того чтобы прервать работу функции при некоторых обстоятильствах и вернуть выполнение на место вызова функции
	name - имя функции нужно для того что бы можно было обратиться к функции для именнования функции используют такие же индефикаторы как для именование переменных
    Напомнить о DIV!!!!!
	!!!!return - может вернуть только одно значение.
	Если тип функции void то return используеться без значения
	parameters - список принемаемых параметров.Принемаемые параметры это самые обычнии переменые обявлены в заголовке функции при обявлении принемаемые параметры это исходные данные для работы функции
	Функциия может принемать сколько угодно параметров их чесло не ограничевается компилятором может и не принимать ни одного параметра тогда круглые скобки оставляют пустыми но их обязательно оставляют ибо только они отличают функцию от переменной
	group of statements - это тело функции именно в нём и пишут алгоритм который реализует функция.
	Втеле функции можно писать всё что угодно кроме реализации другой функции
	Переменные обявленные в круглых скобках тоесть являются параметрами и перемменые обявленые в теле функции являются локальными для этой функции тоесть существуют только в ее пределах и не доступны за её пределами они удаляються из памяти по завершению функции

	type name(parameters) - заголовок функции - Function Header
	{
		...
		group-of-statements			- тело функции - Function body
		...
	}

	Прототип реализация вызов
	Прототип функции(объявление функции или function declaration) - состоит лишь из заголовка функции и пишеться перед main , прототип нужен для того что бы имя функции её список принемаемых параметров и тип возвращаемого значения были известны на момент вызова.
	Прототип объявляет функцию тоесть просто говорит что такая функция есть но не говорит что она делает

	Реализация функции(определение функции или function definition) - состоит из заголовка и тела функции и определяет что делает функция.

	Использование функции (вызов функции - function call) - что бы функция заработала её нужно вызвать хотя бы один раз один раз написаная функция может быть вызвана сколько угодно раз это и позволяет повторно использовать код
	
	Принимаемые и передаваемые параметры
	Когда мы пишем прототип или реализацию функции мы показываем какие параметры функция принемает а когда мы вызвываем функцию мы передаем в неё параметры
	Количество передаваемых параметров должно чётко совпадать с количеством принемаемых параметров в противном случае возникает ошибка на этапе компиляции (Function doesn't take N arguments)
	Too few argumets in function call - если передали меньше параметров чем функция принимает
	Too many arguments in function call - если передали больше параметров чем функция принемает
	Но всё таки есть способ передать в функцию меньше параметров чем она принимает благодаря параметрам по умолчанию

	Параметры по умалчанию(default arguments)
	Некоторым параметрам функции можно задать значение по умалчанию и тогда соответсвующий параметр становится параметром по умалчанию и тогда этот параметр можно не передавать при вызове функции в таком случае ему будет присвоено значение по умалчанию
	парметры по умалчанию могут быть только в конце списка аргуметов значение по умалчанию могут иметь последний, два последних, три последних и т.д. параметров все праметры функции могут иметь значение по умалчанию даже если их очень много 
	НО мы не можем дать значение по умалчанию первому первым двум и т.д. параметрам также мы не можем дать значение по умалчанию в середине списка аргуметов по скольку в таком случае компилятору будет не понятно какое значения какому параметру передавать.
	Мы можем не добередать в функцию параметров и в этом случае те параметры которые не получили значение приймут значение по умалчанию

	Unresolved externals - ошибка на этапе компоновке (LNK(ошибка компоновки) - linker(компоновщик))
	Unresolved externals sybol found - возникает в том случае когда компоновщик не может что то найти и чаще всего это происходит когда он не может связать прототип с реализацией а это в свою очередь происходит когда в прототипе список параметров отличается или когда нет реализации

	Вызов функции(Function call) - при вызове функции происходит переход по адресу памяти по которому функция загружена в оперативную память а ключевое слово return возвращает выполнение на тот адрес памяти с которого была вызвана функция.
	Оперативная память компьютера является очень быстрой при линейном чтении данных но её слабым местом по производительности являеться переход по другому адресу это связано с задержкой памяти CAS-Latency
	По этому причастых вызовах функций может снижаться производительность и язык С++ дает возможность встраивать в тело функции на место её вызова для этого функцию можно сделать  inline тело inline функции встраиваеться на место вызова функции это увеличевает размер exe файла но ускоряет выполнение программы по скольку при этом уменьшается количество переходов по адресам памяти

	Перегрузка функции 
	Перегрузкой функции называется ситуация когда есть 2 или более функций с одинаковым именем но разным списком принемаемых параметров.
	Список принимаемых параметров перегрузком функции могут принимать разные типы и кол аргуметов.
	Тип возвращающихся значений перегруженых функций так же может отличаться но перегруженые функции не могут отличаться лишь типом возвращающего значения по скольку компилятор опред какой экземпляр перегру. вызвать только по списку принемаемых параметров точнее по списку параметров которые мы передали в функцию
	Реализации перегруженых функций могут отличаться или же быть идентичными как правило если список принемаемых параметров перегруженых функций отличается лишь типом аргументов то реализации у них будут идентичны или как минимум очень похожи.
	Если же список принемаемых параметров перег фун отличаеться по количеству аргуметов то скорее всего и реализации у них будут разные 
	*/

	int a, b;
	const int n = 5;
	int arr[n];
	int brr[n];
	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	int i_arr_2[ROWS][COLS];
	time_t start;
	start = time(NULL);

	//cout << "Введите два числа: "; cin >> a >> b;
	//int c = Add(a, b); //Использование функции (вызов функции - function call)
	//cout << a << " + " << b << " = " << c << endl;
	//cout << a << " - " << b << " = " << Sub(a, b) << endl;
	//cout << a << " * " << b << " = " << Mul(a, b) << endl;
	//cout << a << " / " << b << " = " << Div(a, b) << endl;
	//cout << a << " ^ " << b << " = " << Power(a, b) << endl;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
	cout << "Массив arr: " << endl;
	Print(arr, n);
	cout << endl;
	cout << "Сумма элементов массива arr: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое массива arr: " << AVG(arr, n) << endl << endl;
	cout << "Минимальный элемент массива arr: " << minValue(arr, n) << endl;
	cout << "Максимальный элемент массива arr: " << maxValue(arr, n) << endl;

	for (int i = 0; i < n; i++)
	{
		brr[i] = rand() % 10;
	}
	cout << endl << "Массив brr: " << endl;
	Print(brr, n);
	cout << endl;
	cout << "Сумма элементов массива brr: " << Sum(brr, n) << endl;
	cout << "Среднее арифметическое массива brr: " << AVG(brr, n) << endl << endl;
	cout << "Минимальный элемент массива brr: " << minValue(brr, n) << endl;
	cout << "Максимальный элемент массива brr: " << maxValue(brr, n) << endl;
	time_t end = time(NULL);
	/*cout << end - start << endl;*/

	cout << endl << "Массив d_arr: " << endl;
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	
	cout << endl << "Массив i_arr_2: " << endl;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = 0.01 * (rand() % 1000);
	}
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(double arr[], const int n)
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
			cout << arr[i][j]<<tab;
		}
		cout << endl;
	}
	cout << endl;
}

int Add(int a, int b) //Реализация функции
{
	int c = a + b;
	return c;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

double Div(int a, int b)
{
	return (double)a / b;
}

double Power(double a, int n)
{
	double N = 1;
	if (n<0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}

int Sum(int arr[], int const n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], int const n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double AVG(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double AVG(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

int minValue(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i]<min)
		{
			min = arr[i];
		}
	}
	return min;
}

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

int maxValue(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

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