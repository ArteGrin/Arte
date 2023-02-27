#include <iostream>
using namespace std;





//n до 1 сумма


//Все рекурсивные вызовы помещаются в стек программы. Если рекурсия не закончится до заполнения
//стека, то мы получим ошибку "Переполнение стека - Stack Overflow"

//Решения написанные с использованием рекурсии более кратки и читабельны
//Рекурсия чаще всего используется при обходе графов и деревьев
//Примеры: вычисление факториала, ряда Фибоначчи, реализация быстрой сортировки quick sort


//arr - массив для поиска, start - Левый Индекс, finish - Правый индекс
void quickSort(int arr[], int start, int finish)
{
	if (start < finish)
	{
		int left = start;
		int right = finish;
		
		do {
			int middle = arr[(left + right) / 2]; //находим серединный элемент
			while (arr[left] < middle)
			{
				left++;
			}
			while (arr[right] > middle)
			{
				right--;
			}
			if (left <= right)
			{
				int temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
			left++;
			right--;

		} while (left < right);
		quickSort(arr, start, right);
		quickSort(arr, left, finish);
	}
	return;
}


int main()
{
	const int SIZE = 10;
	int arr[SIZE] = { -1,8,2,7,12,-3,10,4,0,5 };
	quickSort(arr, 0, SIZE - 1);
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}