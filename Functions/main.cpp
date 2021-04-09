/*����, ������������! � ���� ��������� ������ ��� F5: 
Severity	Code	Description	Project	File	Line	Suppression State
Error	LNK1168	cannot open C : \Users\asd81\source\repos\Functions\Debug\Functions.exe for writing	Functions	C : \Users\asd81\source\repos\Functions\Functions\LINK	1


*/

#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(char arr[], const int n, int minRand=0, int maxRand=100);
//�������� ������� ��� ����������
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(char arr[], const int n);//�������� ������� ��� ���������� �������
void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);

void ShiftLeft(char arr[], const int n, const int number_of_shifts);
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(float arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);

int Sum(int arr[], const int n);// ��� �� void, �� ���������� ��������
float Sum(float arr[], const int n);// ��� �� void, �� ���������� ��������
double Sum(double arr[], const int n);// ��� �� void, �� ���������� ��������

double Avg(int arr[], const int n);
double Avg(float arr[], const int n);
double Avg(double arr[], const int n);

char minValueIn(char arr[], const int n);
int minValueIn(int arr[], const int n);
float minValueIn(float arr[], const int n);
double minValueIn(double arr[], const int n);

char maxValueIn(char arr[], const int n);
int maxValueIn(int arr[], const int n);
float maxValueIn(float arr[], const int n);
double maxValueIn(double arr[], const int n);

void Sort(char arr[], const int n);
void Sort(int arr[], const int n);
void Sort(float arr[], const int n);
void Sort(double arr[], const int n);


void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions!" << endl;
	const int n = 5;
	int arr[n];

	FillRand(arr, n, 0, 100);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout<< "������� �������������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;

	cout << "��������������� ������:\n " << endl;

	Sort(arr, n); //
	Print(arr, n);

	//����� ������� �� �������� ����� ���������:
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);//����� ������� 
	
	////////////////////////
	
	const int m = 8;
	double brr[m];
	FillRand(brr, m, 200, 300); //������ ������ �������� ��200 �� 300
	Print(brr, m);
	Sort(brr, m);
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
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
	
	cout << "����� ��������� �������: " << Sum(f_arr, SIZE_FLOAT) << endl;
	cout << "������� �������������� �������: " << Avg(f_arr, SIZE_FLOAT) << endl;
	cout << "����������� �������� � �������: " << minValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(f_arr, SIZE_FLOAT) << endl;
	cout << "��������������� ������:\n";
	Sort(f_arr, SIZE_FLOAT); //
	Print(f_arr, SIZE_FLOAT);

	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	ShiftLeft(f_arr, SIZE_FLOAT, number_of_shifts);
	Print(f_arr, SIZE_FLOAT);


}
void FillRand(char arr[], const int n, int minRand, int maxRand)//��������� ����� � ���������� �������:
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand() % (maxRand - minRand) + minRand;

		arr[i] = rand(); // % (maxRand - minRand) + minRand;
		//������� ���������� 
		//��������������� ����� � ��������� �� 0 �� 32767.
	}
}
void FillRand(int arr[], const int n, int minRand, int maxRand)//��������� ����� � ���������� �������:
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//������� ���������� 
		//��������������� ����� � ��������� �� 0 �� 32767.
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand)//��������� ����� � ���������� �������:
{
	minRand *= 100;
	maxRand *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		//������� ���������� 
		//��������������� ����� � ��������� �� 0 �� 32767.
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)//��������� ����� � ���������� �������:
{
	minRand *= 100;
	maxRand *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		//������� ���������� 
		//��������������� ����� � ��������� �� 0 �� 32767.
	}
}
void Print(char arr[], const int n)
{
	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;

	}
	cout << endl;
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
void Print(float arr[], const int n)
{
	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	//������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void ShiftLeft(char arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //���� ���� �������� ������ �� number_of_shifts 
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)// ���� �������� ������ �� 1 �������
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //���� ���� �������� ������ �� number_of_shifts 
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)// ���� �������� ������ �� 1 �������
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}void ShiftLeft(float arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //���� ���� �������� ������ �� number_of_shifts 
	{
		float buffer = arr[0];
		for (int j = 0; j < n; j++)// ���� �������� ������ �� 1 �������
		{
			arr[j] = arr[j + 1];

		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //���� ���� �������� ������ �� number_of_shifts 
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)// ���� �������� ������ �� 1 �������
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
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
double sum = 0;
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

double Avg(float arr[], const int n)
{		
		return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{		
		return (double)Sum(arr, n) / n;
}


char minValueIn(char arr[], const int n)
{
		char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}


int minValueIn(int arr[], const int n)

{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
		return min;
}

float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}


double minValueIn(double arr[], const int n)
{
		double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}


char maxValueIn(char arr[], const int n)
{
	char max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)  max = arr[i];
	}
	return max;

}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)  max = arr[i];
	}
	return max;

}

float maxValueIn(float arr[], const int n)
{
	float max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)  max = arr[i];
	}
	return max;

}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)  max = arr[i];
	}
	return max;

}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� i �������� �������, � ������� ����� ��������� ����� ��������
		for (int j = i + 1; j < n; j++)
		{
			//������� j ���������� ��������� �������� , ������ ����� �������
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}

}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� i �������� �������, � ������� ����� ��������� ����� ��������
		for (int j = i + 1; j < n; j++)
		{
			//������� j ���������� ��������� �������� , ������ ����� �������
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}

}
void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� i �������� �������, � ������� ����� ��������� ����� ��������
		for (int j = i + 1; j < n; j++)
		{
			//������� j ���������� ��������� �������� , ������ ����� �������
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//������� i �������� �������, � ������� ����� ��������� ����� ��������
		for (int j = i + 1; j < n; j++)
		{
			//������� j ���������� ��������� �������� , ������ ����� �������
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
}