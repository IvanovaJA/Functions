#include"Print.h"

template<typename T>void Print(T arr[], const int n)
{
	//выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}