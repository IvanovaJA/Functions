

void ShiftLeft(char arr[], const int n, const int number_of_shifts)
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
void ShiftLeft(float arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //этот цикл сдвигает массив на number_of_shifts 
	{
		float buffer = arr[0];
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
		double buffer = arr[0];
		for (int j = 0; j < n; j++)// цикл сдвигает массив на 1 элемент
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}