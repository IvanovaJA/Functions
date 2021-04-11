


#include"FillRand.h"
#include"Print.h"
#include"Print.cpp"
#include"Shift.h"
#include"Shift.cpp"
#include"Sort.h"
#include"Sort.cpp"
#include"Statistica.h"
#include"Statistica.cpp"






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
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "максимальное значение в массиве: " << maxValueIn(arr, n) << endl;

	cout << "Отсортированный массив:\n " << endl;

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
	Sort(brr, m);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	////////////////////////////////
	
	cout << "CHAR:\n";
	const int SIZE_CHAR = 10;
	char c_arr[SIZE_CHAR];
	FillRand(c_arr, SIZE_CHAR);
	Print(c_arr, SIZE_CHAR);

	////////////////////////////////////
	cout << "FLOAT:" << endl;
	const int SIZE_FLOAT = 7;
	float f_arr[SIZE_FLOAT];
	FillRand(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
	
	cout << "Сумма элементов массива: " << Sum(f_arr, SIZE_FLOAT) << endl;
	cout << "Среднее арифметическое массива: " << Avg(f_arr, SIZE_FLOAT) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "Отсортированный массив:\n";
	Sort(f_arr, SIZE_FLOAT); //
	Print(f_arr, SIZE_FLOAT);

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(f_arr, SIZE_FLOAT, number_of_shifts);
	Print(f_arr, SIZE_FLOAT);


}




