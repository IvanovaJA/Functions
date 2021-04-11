
template<typename T>void ShiftLeft(T arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //этот цикл сдвигает массив на number_of_shifts 
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)// цикл сдвигает массив на 1 элемент
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}
