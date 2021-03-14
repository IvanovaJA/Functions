#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
//Прототип функции или объявление
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);
int Sum(int arr[], const int n);// тип не void, тк возвращаем значение
double Avg(int arr[], const int n);
void minValueIn(int arr[], const int n, int minimum);
void Sort(int arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions!" << endl;
	const int n = 5;
	int arr[n];

	FillRand(arr, n, 0, 100);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout<< "Среднее арифметическое массива: " << Avg(arr, n) << endl;
	cout << "Отсортированный массив: " << endl;

	Sort(arr, n); //
	Print(arr, n);

	//Сдвиг массива на задаеное число элементов:
	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);//вызов функции 
	
	////////////////////////
	
	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300); //задали другой диапазон от200 до 300
	Print(brr, m);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
}
void FillRand(int arr[], const int n, int minRand, int maxRand)//заполняем масси в случайными числами:
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+ minRand;
		//Функция возвращает 
		//псевдослучайное число в диапазоне от 0 до 32767.
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)//заполняем масси в случайными числами:
{
	minRand *= 100;
	maxRand *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//Функция возвращает 
		//псевдослучайное число в диапазоне от 0 до 32767.
	}
}

void Print(int arr[], const int n)
{
	//выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	//выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}
void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //этот цикл сдвигает массив на number_of_shifts 
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)// цикл сдвигает массив на 1 элемент
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //этот цикл сдвигает массив на number_of_shifts 
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)// цикл сдвигает массив на 1 элемент
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(int arr[], const int n)
{		
		return (double)Sum(arr, n) / n;
}
void minValueIn(int arr[], const int n, int minimum)
{

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minimum) minimum = arr[i];
	}
	cout << "Минимальное значение массива: " << minimum << endl;

}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик i ВЫБИРАЕТ элемент, в который нужно поместить миним значение
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик j ПЕРЕБИРАЕТ остальные элементы , правую часть массива
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
}