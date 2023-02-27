#include <iostream>
using namespace std;



//void - тип данных (пустой)
//void sum(int a, int b)
//{
//    cout << a + b << endl;
//}
//
//
//
//int minusOur(int a, int b)
//{
//    return a - b;
//}
//
//
//
//
//void printArray(int size, int arr[])
//{
//    for (int i = 0; i < size; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}


//void rectangle(int h, int w)
//{
//    for (int i = 0; i < h; i++)
//    {
//        for (int j = 0; j < w; j++)
//        {
//            if (i == 0)
//            {
//                cout << "-";
//            }
//            if (j == 0 || j == w - 1)
//            {
//                cout << "|";
//            }
//            else
//            {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//}


//int second_degree(int N)
//{
//    return N * N;
//}
//
//
//bool number_check(int a, int b)
//{
//    if (a % 2 == 0 && b % 2 == 0)
//    {
//        return true;
//    }
//    else
//    {
//        return false;
//    }
//}



//void maxNumber(int a, int b)
//{
//    if (a > b)
//    {
//        cout << a << " -Is the biggest number here";
//    }
//    else if (a < b)
//    {
//        cout << b << " -Is the biggest number here";
//    }
//    else
//    {
//        cout << a << " = " << b;
//    }
//}
//
//
//
//
//void maxNumber(int a, int b, int c)
//{
//    if (a > b && a > c)
//    {
//        cout << a << " -Is the biggest number here";
//    }
//    else if (a < b && c < b)
//    {
//        cout << b << " -Is the biggest number here";
//    }
//    else if (a < c && b < c )
//    {
//        cout << c << " -Is the biggest number here";
//    }
//    else
//    {
//        cout << a << " = " << b << " = " << c;
//    }
//}



//int getMax(int arr[], int size)
//{
//    int max = arr[0];
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//
//
//
//int getMax(int arr[][8], int size_row, int size_col)
//{
//    int max = arr[0][0];
//    for (int i = 0; i < size_row; i++)
//    {
//        for (int j = 0; j < size_col; j++)
//        {
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//            }
//        }
//    }
//    return max;
//}
//
//
//int getMax(int arr[][3][4], int height, int size_row, int size_col)
//{
//    int max = arr[0][0][0];
//    for (int i = 0; i < height; i++)
//    {
//        for (int j = 0; j < size_row; j++)
//        {
//            for (int k = 0; k < size_col; k++)
//            {
//                if (arr[i][j][k] > max)
//                {
//                    max = arr[i][j][k];
//                }
//
//            }
//        }
//    }
//    return max;
//}
//
//
//
int main()
{
   setlocale(LC_ALL, "");

    /*int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << second_degree(number);*/

    //int num1;
    //int num2;

    //cout << "Number 1: ";
    //cin >> num1;

    //cout << "Number 2: ";
    //cin >> num2;
    //cout << number_check(num1, num2);


   /* const int SIZE = 10;
    int arr[SIZE] = { 2,3,4,5,1,8,9,7,6,5 };
    int arr2[SIZE] = { 1,-3,4,5,-1,8,-9,7,6,5 };
    printArray(SIZE, arr);
    printArray(SIZE, arr2);




    int number1, number2;
    cout << "Enter number 1:";
    cin >> number1;
    cout << "Enter number 2:";
    cin >> number2;



    sum(number1, number2);



    cout << minusOur(number1, number2);*/


    //maxNumber(4, 5);
    //cout << endl;
    //maxNumber(8, 8, 8);





   /* const int SIZE = 10;
    int arr[SIZE];
    int minRad = -10;
    int maxRad = 10;
   
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % (maxRad - minRad) + minRad;
        cout << arr[i] << " ";
    }
    cout << endl << "Max number: " << getMax(arr, SIZE);

    





    const int SIZE_ROW = 5;
    const int SIZE_COL = 8;
    
    
    int min = -10;
    int max = 10;
    int arr[SIZE_ROW][SIZE_COL];


    srand(time(NULL));
    
    for (int i = 0; i < SIZE_ROW; i++)
    {
    	for (int j = 0; j < SIZE_COL; j++)
    	{
    		arr[i][j] = rand() % (max - min) + min;
            cout << arr[i][j] << " ";
    	}
        cout << endl;
    }



    cout << endl << "Max number: " << getMax(arr, SIZE_ROW, SIZE_COL);






    const int ROWS = 3;
    const int COLS = 4;
    const int HEIGHT = 4;
    srand(time(0));
    int minRand = -100, maxRand = 100;
    int arr[HEIGHT][ROWS][COLS] = {};
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            for (int k = 0; k < COLS; k++)
            {
                arr[i][j][k] = rand() % (maxRand - minRand) + minRand;
                cout << arr[i][j][k] << " ";
            }
        }
    }
    cout << getMax(arr, HEIGHT, ROWS, COLS);*/



}
