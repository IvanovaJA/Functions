#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n)
{//��������� ����� � ���������� �������:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
		//������� ���������� 
		//��������������� ����� � ��������� �� 0 �� 32767.
	}
}

void Print(int arr[], const int n)
{
	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
}
void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //���� ���� �������� ������ �� number_of_shifts 
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}
void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions!" << endl;
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	//��������� ����� � ���������� �������:
	/*for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
		//������� ���������� 
		//��������������� ����� � ��������� �� 0 �� 32767.
}*/

	Print(arr, n);
	//������� ������ �� �����:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}*/

	cout << endl;

	//����� ������� �� �������� ����� ���������:
	int number_of_shifts;

	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	/*
	*/
	Print(arr, n);
	//������� ������ �� �����:
	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}*/

	cout << endl;
	////////////////////////
	const int m = 8;
	int brr[m];
	FillRand(brr, m);
	/*
	for (int i = 0; i < m; i++)
	{
		brr[i] = rand();
	}
	for (int i = 0; i < m; i++)
	{
		cout << brr[i] << tab;
	}
	cout << endl; 	*/
	Print(brr, m);
	cout << "������� ���������� �������: "; cin >> number_of_shifts;

	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	/*for (int i = 0; i < number_of_shifts; i++) //���� ���� ��������
		                        //������ �� number_of_shifts 
	{
		int buffer = brr[0];
		for (int j = 0; j < m; j++)
		{
			brr[j] = brr[j + 1];

		}
		brr[m - 1] = buffer;
	}
	for (int i = 0; i < m; i++)
	{
		cout << brr[i] << tab;
	}
	cout << endl;**/
}
