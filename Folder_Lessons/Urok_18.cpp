#include <iostream> 
#include <cmath> 
#include <Windows.h> 
#include <ctime> 
using namespace std;

int main()
{
    /*int rows = 14, cols = 9;
    int** arr = new int* [rows];
    int minRandom = 1, maxRandom = 9;
    srand(time(0));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % (maxRandom - minRandom) + minRandom;
        }
    }     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;*/

    int rows = 14, cols = 9;
    int counter = 0;
    int** arr = new int* [rows];
    int minRandom = 1, maxRandom = 9;
    srand(time(0));
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % (maxRandom - minRandom) + minRandom;
        }
    }     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
            counter++;
        }
        cout << endl;
    }

    cout << "Counter: " << counter << endl;

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

}