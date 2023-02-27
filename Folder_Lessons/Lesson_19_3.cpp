#include <iostream> 
#include <cmath> 
#include <Windows.h> 
#include <ctime> 
using namespace std;

void generate(int* arr,  int size)
{
    srand(time(0));
    int min = 0, max = 120;
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % (max - min) + min);
    }
}

void show(int* arr,  int size) 
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void push(int* arr, int size, int* arr_2, int size_2, int* arr_3)
{
    int i = 0;
    for (; i < size; i++)
    {
        arr_3[i] = arr[i];
    }
    for (int j = 0; j < size_2; j++)
    {
        arr_3[i] = arr_2[j];
        i++;
    }
 
}

int main()
{
    int size = 10;
    int* arr = new int[size];
    generate(arr, size);
    show(arr, size);

    int size_2;
    cout << "Enter the size: ";
    cin >> size_2;
    int* arr_2 = new int[size_2];


    cout << "Enter the arrey: ";
    for (int i = 0; i < size_2; i++)
    {
       cin >> arr_2[i];
    }

    show(arr_2, size_2);
    cout << endl;

    int size_3 = size + size_2;
    int* arr_3 = new int[size_3];
    push(arr, size, arr_2, size_2, arr_3);
    show(arr_3, size_3);
}