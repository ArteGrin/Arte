#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
using namespace std;



void make_arr(int* arr, int size);
void print_arr(int* arr, int size);
void join_arr(int* arr, int* arr_2, int* arr_3, int size, int size_3);
void join_minus_arr(int* arr, int* arr_2, int* arr_3, int size, int size_3);
int main()
{
	/*int n = 5;
	int* a = new int[n] {3, 4, 7, 2, 5};
	for (int i = 0; i < n; i++)
	{
		cout << a + i << ":" << *(a + i) << endl;
	}
	cout << "--------------------------------\n"; 

	bool* b = new bool[n] { 1, 0, 1, 0, 1 };
	for (int i = 0; i < n; i++)

	{
		cout << b + i << ":" << *(b + i) << endl;
	}  

	cout << "--------------------------------\n";
	double* c = new double[n] { 3.5, 2, 1, 1.4, 3 };
	for (int i = 0; i < n; i++)
	{
		cout << c + i << ":" << *(c + i) << endl;
	}*/



	int size;
	cout << "Enter the first size: " << endl;
	cin >> size;
	int* arr = new int[size];

	int size_2;
	cout << "Enter the second size: " << endl;
	cin >> size_2;
	int* arr_2 = new int[size_2];

	make_arr(arr, size);
	print_arr(arr, size);

	cout << endl;

	make_arr(arr_2, size_2);
	print_arr(arr_2, size_2);

	int size_3 = size + size_2;
	int* arr_3 = new int[size_3];


	//join_arr(arr, arr_2, arr_3, size, size_3);
	join_minus_arr(arr, arr_2, arr_3, size, size_3);
	cout << endl;


	delete[] arr;
	arr = nullptr;
	delete[] arr_2;
	arr_2 = nullptr;
	delete[] arr_3;
	arr_3 = nullptr;
}



void print_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
}

void make_arr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (100 + 100) - 100;
	}
}

void join_arr(int* arr, int* arr_2, int* arr_3, int size, int size_3)
{
	for (int i = 0; i < size; i++)
	{
		arr_3[i] = arr[i];
	}
	for (int i = size; i < size_3; i++)
	{
		arr_3[i] = arr_2[i - size];
	}
}

void join_minus_arr(int* arr, int* arr_2, int* arr_3,int size, int size_3)
{
	int a = 0;
	for (int i = 0; i < size_3; i++)
	{
		if (arr[i] < 0)
		{
			arr_3[a] = arr[i];
			a++;
		}
		if (arr_2[i] < 0)
		{
			arr_3[a] = arr_2[i];
			a++;
		}
	}
	cout << endl;
	int b = size_3 - a;
	for (int i = 0; i < b; i++)
	{
		cout << *(arr_3 + i) << " ";
	}
}