#include <iostream> 
#include <cmath> 
#include <Windows.h> 
#include <ctime> 
using namespace std;


void generate(int* arr, int size)
{
	srand(time(0));
	int min = 0, max = 120;
	for (size_t i = 0; i < size; i++)
	{
		 arr[i] = rand()% (max - min) + min;
	}
}
void show(int* arr, int size)
{	
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int size = 10;
	int* arr = new int[size];
	generate(arr, size);
	show(arr, size);
}