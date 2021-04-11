#include"FillRand.h"
void FillRand(char arr[], const int n, int minRand, int maxRand)//заполняем масси в случайными числами:
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand() % (maxRand - minRand) + minRand;

		arr[i] = rand(); // % (maxRand - minRand) + minRand;
		//Функция возвращает 
		//псевдослучайное число в диапазоне от 0 до 32767.
	}
}
void FillRand(int arr[], const int n, int minRand, int maxRand)//заполняем масси в случайными числами:
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//Функция возвращает 
		//псевдослучайное число в диапазоне от 0 до 32767.
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand)//заполняем масси в случайными числами:
{
	minRand *= 100;
	maxRand *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
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
		arr[i] /= 100;
		//Функция возвращает 
		//псевдослучайное число в диапазоне от 0 до 32767.
	}
}
