#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
using namespace std;


//void printArray(int size, int arr[])
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}



int main()
{

	setlocale(LC_ALL, "");
	srand(time(0));
	//task 1
	//int value;
	//cout << "Enter the number: ";
	//cin >> value;
	//
	//
	//if (value >= -10 && value <= -1)
	//{
	//	cout << "The number belongs to the range from -10 to -1, so it's not correct" << endl;
	//}
	//else if (value >= 2 && value <= 15)
	//{
	//	cout << "The number belongs to the range from 2 to 15, so it's not correct" << endl;
	//}
	//else
	//{
	//	cout << "The number does not belong to any of the ranges, so it is correct" << endl;
	//}

	//task2

	//int value;
	//cout << "Enter the number: ";
	//cin >> value;
	//
	//if ((value % 2 == 0 && value % 7 == 0) && (value % 11 != 0 && value % 13 != 0))
	//{
	//	cout << "Number is correct" << endl;
	//}
	//else
	//{
	//	cout << "Number is not correct" << endl;
	//}

	//task3

	//int value;
	//cout << "Enter the number from 100 to 999: ";
	//cin >> value;
	//
	//if (value < 100 || value > 999)
	//{
	//	cout << "Error" << endl;
	//}
	//else
	//{
	//	int first_number = value / 100;
	//	int second_number = value / 10 % 10;
	//	int third_number = value % 10;
	//
	//	int sum_numbers = first_number + second_number + third_number;
	//
	//	int product_of_numbers = first_number * second_number * third_number;
	//
	//	if (sum_numbers >= 10 && sum_numbers <= 99)
	//	{
	//		cout << "The sum of the numbers is a two-digit number" << endl;
	//	}
	//	else
	//	{
	//		cout << "The sum of the numbers is NOT a two-digit number" << endl;
	//	}
	//
	//
	//	if (product_of_numbers >= 100 && product_of_numbers <= 999)
	//	{
	//		cout << "The sum of the numbers is a three-digit number" << endl;
	//	}
	//	else
	//	{
	//		cout << "The sum of the numbers is NOT a three-digit number" << endl;
	//	}
	//}


		/*int i = 1;
		while (i <= 7)
		{
			cout << "I have saw the monument number " << i << endl;
			i++;
		}

		for (int i = 1; i <= 7; i++)
		{
			cout << "I have saw the monument number " << i << endl;
		}*/

		/*int i = 1;
		int b = 0;
		int n = 1;
		while (n <= 10)
		{
			b += i;
			i++;
			n++;
		}
		cout << b;*/

		/*int a = 1;
		int d = 1;
		int c = 1;
		while (c <= 10)
		{
			d *= a;
			a++;
			c++;
		}
		cout << d;*/

		//int sum = 0;
		//int i = 1;
		////while (i <= 10)
		////{
		////	sum += i;
		////	i++;
		////}
		//for (int i = 1; i <=10; i++)
		//{
		//	sum += 1;
		//}
		//cout << sum;


		//int count, step;
		//cout << "Count: ";
		//cin >> count;
		//cout << "Step: ";
		//cin >> step;
		//for (int i = 1; i <= count; i += step)
		//{
		//	cout << i << endl;
		//}


		//int money, price;
		//int amount_of_ice = 0;
		//cout << "Money: ";
		//cin >> money;
		//cout << "Price of ice: ";
		//cin >> price;
		//for (; money >= price; money -= price)
		//{
		//	cout << "You bought 1 ice cream" << endl;
		//	cout << "Now you have theis amount of money: " << money << endl;
		//	amount_of_ice++;
		//
		//}
		//cout << "Now you have this amount of icereams: " << amount_of_ice;



		//int a, b;
		//
		//cout << "Enter number A: " << endl;
		//cin >> a;
		//
		//cout << "Enter number B: " << endl;
		//cin >> b;
		//
		//if (a > b)
		//{
		//	cout << "Error";
		//}
		//else
		//{
		//	int amount_of_numbers = 0;
		//	for (; a <= b; a++)
		//	{
		//		cout << a << endl;
		//		amount_of_numbers++;
		//	}
		//	cout << "Amount of numbers: " << amount_of_numbers;
		//}


		//int a, b;
		//
		//cout << "Enter number A: " << endl;
		//cin >> a;
		//
		//cout << "Enter number B: " << endl;
		//cin >> b;
		//
		//if (a > b)
		//{
		//	cout << "Error";
		//}
		//else
		//{
		//	int amount_of_numbers = 0;
		//	for (; b >= a; b--)
		//	{
		//		cout << b << endl;
		//		amount_of_numbers++;
		//	}
		//	cout << "Amount of numbers: " << amount_of_numbers;
		//}



		//int a = 11;
		//int b = 99;
		//
		//for (; a <= b; a++)
		//{
		//	cout << a * a << endl;
		//}

		//int a = 20;
		//int c = 35;
		//
		//for (; a <= c; a++)
		//{
		//	cout << a<< endl;
		//}
		//
		//int g = 10;
		//int b;
		//cout << "Enter the b: " << endl;
		//cin >> b;
		//
		//if (b < g)
		//{
		//	cout << "Error";
		//}
		//else
		//{
		//	for (; g <= b; g++)
		//	{
		//		cout << g * g<< endl;
		//	}
		//}


		//const float price = 20.4;
		//
		//for (int i = 1; i <= 20; i++)
		//{
		//	cout << i << "\t";
		//}
		//cout << "\n";
		//for (int i = 1; i <= 20; i++)
		//{
		//	cout << price * i << "\t";
		//}
		//enum prices { milk = 30, egg = 60, bread = 40 };
		//cout << "Menu:\n milk(1), egg(2), bread(3)\n";
		//int itemMenu,total = 0;
		//
		//bool choise = true;
		//
		//while (choise == true)
		//{
		//	cout << "Choose: \n";
		//	cin >> itemMenu;
		//	switch (itemMenu)
		//	{
		//	case 1:
		//		total += milk;
		//		break;
		//	case 2:
		//		total += egg;
		//		break;
		//	case 3:
		//		total += bread;
		//		break;
		//	default:
		//		cout << "There is no such item\n";
		//		break;
		//	}
		//	cout << "Do you want to buy something else? (1-yes, 0-no)\n";
		//
		//	cin >> choise;
		//	
		//
		//}
		//cout << "Total price: " << total;
		//


		//int a, b, c, d;
		//
		//int total = 0;
		//
		//cout << "Enter four numbers: \n";
		//cin >> a >> b >> c >> d;
		//
		//if (a > b || a > c || a > d)
		//{
		//	cout << a << " Is the bigest number here \n";
		//	total++;
		//	if (a == b)
		//	{
		//		total++;
		//	}
		//	if (a == c)
		//	{
		//		total++;
		//	}
		//	if (a == d)
		//	{
		//		total++;
		//	}
		//}
		//else if (b > a || b > c || b > d)
		//{
		//	cout << b << " Is the bigest number here \n";
		//	total++;
		//	if (b == c)
		//	{
		//		total++;
		//	}
		//	if (b == a)
		//	{
		//		total++;
		//	}
		//	if (b == d)
		//	{
		//		total++;
		//	}
		//}
		//else if (c > a || c > b || c > d)
		//{
		//	cout << c << " Is the bigest number here \n";
		//	total++;
		//	if (c == b )
		//	{
		//		total++;
		//	}
		//	if (c == a)
		//	{
		//		total++;
		//	}
		//	if (c == d)
		//	{
		//		total++;
		//	}
		//	
		//}
		//
		//else if (d > a || d > c || d > b)
		//{
		//	cout << d << " Is the bigest number here \n";
		//	total++;
		//	if (d == c)
		//	{
		//		total++;
		//	}
		//	if (d == a)
		//	{
		//		total++;
		//	}
		//	if (d == b)
		//	{
		//		total++;
		//	}
		//}
		//
		//
		//cout << total;



		//for (int i = 1; i < 10; i++)
		//{
		//	for (int j = 2; j < 10; j++)
		//	{
		//		cout << i << "*" << j << "=" << j * i << endl;
		//	}
		//	cout << endl;
		//}


		//int leght;
		//int wight;
		//
		//cout << "Leght: " << endl;
		//cin >> leght;
		//cout << "Wight: " << endl;
		//cin >> wight;
		//
		//char symbol;
		//cout << "Symdol: " << endl;
		//cin >> symbol;
		//char symbol_diagonal;
		//cout << "Symbol of the diagonal: " << endl;
		//cin >> symbol_diagonal;
		//
		//for (int i = 0; i < wight; i++)
		//{
		//	for (int j = 0; j < leght; j++)
		//	{
		//		if (i == j)
		//		{
		//			cout << symbol_diagonal;
		//		}
		//		else
		//		{
		//			cout << symbol;
		//		}
		//		
		//	}
		//	cout << endl;
		//}

		//enum prices { milk = 30, egg = 60, bread = 40 };
		//cout << "Menu:\n milk(1), egg(2), bread(3)\n";
		//int itemMenu, choice, total = 0;
		//do
		//{
		//	cout << "Сделайте свой выбор\n";
		//	cin >> itemMenu;
		//	switch (itemMenu)
		//	{
		//	case 1:
		//		total += milk;
		//		break;
		//	case 2:
		//		total += egg;
		//		break;
		//	case 3:
		//		total += bread;
		//		break;
		//	default:
		//		cout << "Нет такого товара(";
		//		break;
		//	}
		//	cout << "Желаете ещё что-то купить? (1 - да, 0 - нет выход)";
		//	cin >> choice;
		//} while (choice);
		//
		//cout << "Итого: " << total;
		//
		//return 0;

		//char symbol;
		//int countSymbol, speed;
		//bool line;
		//cout << "Enter symbol: ";
		//cin >> symbol;
		//cout << "Enter count: ";
		//cin >> countSymbol;
		//cout << "Enter line (1 - gorizontal, 0 - vertical)";
		//cin >> line;
		//cout << "Enter speed (1 - slow, 2 - medium, 3 - fast)";
		//cin >> speed;
		//int speedValue = (speed == 1) ? 1000 : ((speed == 2) ? 300 : 100);
		//for (int i = 1; i <= countSymbol; i++)
		//{
		//	cout << symbol;
		//	if (line == 0)
		//		cout << endl;
		//	Sleep(speedValue);
		//}


		//
		//float x, y;
		//cout << "Enter the x: ";
		//cin >> x;
		//
		//if (x < 0 || x > 3)
		//{
		//	cout << "Error";
		//}
		//
		//
		//else if (x > 2.5)
		//{
		//	y = 1 - sqrt(cos(2 * x));
		//	cout << y;
		//}
		//
		//else if (x >= 1 && x <= 2.5)
		//{
		//	y = (x * x) - x;
		//	cout << y;
		//}
		//else if (x < 1)
		//{
		//	y = 1 + (x * x);
		//	cout << y;
		//}
		//

		//int randomDigits[10]{};
		//
		//srand(time(NULL));
		//for (int i = 0; i < 10; i++)
		//{
		//	randomDigits[i] = rand() % 7;
		//}
		//
		//cout << "Массив c числами oт 0 до 6: ";
		//for (int i = 0; i < 1; i++)
		//{
		//	cout << randomDigits[i] << "  ";
		//}



	/*
	Массивы - это совокупность однотипных переменных или констант, которые имеют одно общее название
	и в оперативной памяти расположены строго последовательно.
	Благодаря последовательному расположению появляется понятие индекса у элементов массива.
	Индекс - это смещение относительно начала массива.
	Индексация массива начинается с нуля.
	*/
	//Массивы
	//const int size = 10;
	//double marks[size] = {};
	//int min = 11;
	//int max = 16;
	//for (int i = 0; i < size; i++)
	//{
	//	marks[i] = rand() % (max - min) + min;
	//	cout << marks[i] << " ";
	//}


	/*const int size = 10;
	int marks[size] = {};
	int min = 4;
	int max = 12;
	int gpa = 0;
	for (int i = 0; i < size; i++)
	{
		marks[i] = rand() % (max - min) + min;
		cout << marks[i] << " " << endl;

		gpa += marks[i];
	}

	cout << "GPA: " << float(gpa) / size;*/

	//const int size = 10;
	//int marks[size] = {};
	//int min = 10;
	//int max = 30;
	//
	//
	//cout << "In normal order: " << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	marks[i] = rand() % (max - min) + min;
	//	cout << marks[i] << " " << endl;
	//}
	//
	//
	//cout << "In reverse: " << endl;
	//
	//for (int b = size-1; b >= 0; b--)
	//{
	//	cout << marks[b] << " " << endl;
	//}


	//const int size = 10;
	//int marks[size] = {};
	//int min, max, number;
	//cout << "Enter the maximum value:  ";
	//cin >> max;
	//cout << "Enter the minimum value:  ";
	//cin >> min;
	//cout << "Enter the number we will be looking for:  ";
	//cin >> number;
	//cout << endl;
	//
	//
	//
	//if (min >= max)
	//{
	//	cout << "Error";
	//}
	//else
	//{
	//	for (int i = 0; i < size; i++)
	//	{
	//		marks[i] = rand() % (max - min) + min;
	//
	//		if (marks[i] == number)
	//		{
	//			cout << i << " ";
	//			cout << "-1";
	//			break;
	//		}
	//		else 
	//		{
	//			continue;
	//		}
	//	}
	//}


	/*const int size = 10;
	int marks[size] = {};
	int perimeter = 0;




	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the " << i + 1 << "side of the pentagon: ";
		cin >> marks[i];
		perimeter += marks[i];
	}
	cout << "Perimeter- " << perimeter;*/



	//float top_number = 2;
	//
	//float bottom_number = 3;
	//
	//int degree;
	//
	//
	//cout << "Enter the degree : ";
	//cin >> degree;
	//
	//float sum = 0;
	//
	//for (int i = 0; i <= degree; i++)
	//{
	//	sum = (top_number / bottom_number) * i + 1;
	//	top_number += 1;
	//	bottom_number += 4;
	//}
	//
	//cout << sum;


	//нахождение миниума/максимума массива
	//const int SIZE = 10;
	//int arr[SIZE] = {};
	//for (int i = 0; i < SIZE; i++)
	//{
	//	arr[i] = rand() % 80 + 20;
	//	cout << arr[i] << " ";
	//
	//
	//
	//}
	//
	//int max = arr[0];
	//int min = arr[0];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//	if (arr[i] < min)
	//	{
	//		min = arr[i];
	//	}
	//}
	//cout << "\nMax: " << max;
	//cout << "\nMin: " << min;

	//const int COUNT_MONTH = 12;
	//float income[COUNT_MONTH] = {};
	//
	//
	//
	//for (int i = 0; i < COUNT_MONTH; i++)
	//{
	//	income[i] = rand() % 800 + 200;
	//	cout << income[i] << " " << endl;
	//}
	//int max, min;
	//int maxIndex, minIndex;
	//max = income[0];
	//min = income[0];
	//for (int i = 0; i < COUNT_MONTH; i++)
	//{
	//	if (max < income[i])
	//	{
	//		max = income[i];
	//		maxIndex = i;
	//	}
	//	if (min > income[i])
	//	{
	//		min = income[i];
	//		minIndex = i;
	//	}
	//}
	//cout << "Max income: " << max << ". Month: " << maxIndex + 1 << endl;
	//cout << "Min income: " << min << ". Month: " << minIndex + 1 << endl;




	//const int SIZE = 10;
	//int arr[SIZE];
	//srand(time(NULL));
	//int min = -10;
	//int max = 10;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	arr[i] = rand() % (max - min) + min;
	//
	//
	//
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//int temp = arr[0];
	//arr[0] = arr[SIZE - 1];
	//arr[SIZE - 1] = temp;
	//
	//for (int i = 0; i < SIZE; i++)
	//{
	//
	//	cout << arr[i] << " ";
	//}



	//const int SIZE = 10;
	//int arr[SIZE];
	//
	//srand(time(NULL));
	//for (int i = 0; i < SIZE; i++) {
	//	cout << "arr[" << i << "] = ";
	//	arr[i] = rand() % (20 - 10) + 10;
	//	cout << arr[i] << endl;
	//}
	//
	//int temp; 
	//
	//
	//for (int i = 0; i < SIZE - 1; i++) 
	//{
	//	for (int j = 0; j < SIZE - i - 1; j++) 
	//	{
	//		if (arr[j] > arr[j + 1]) 
	//		{
	//			temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;
	//		}
	//	}
	//}
	//
	//
	//for (int i = 0; i < SIZE; i++) {
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//
	////Бинарный поиск
	//int search;
	//cin >> search;
	//bool flag = false;
	//int left = 0; // левая граница
	//int right = SIZE - 1; // правая граница
	//int middle;
	//
	//while ((left <= right) && (flag != true)) {
	//	middle = (left + right) / 2; 
	//
	//	if (arr[middle] == search)
	//	{
	//		flag = true; //проверяем ключ со серединным элементом
	//		break;
	//	}
	//	if (arr[middle] > search) right = middle - 1; // проверяем, какую часть нужно отбросить
	//	else left = middle + 1;
	//}
	//
	//if (flag) cout << "Индекс элемента " << search << " в массиве равен: " << middle;
	//else cout << "Извините, но такого элемента в массиве нет";



	//const int SIZE_ROW = 3;
	//const int SIZE_COL = 4;


	//int arr[SIZE_ROW][SIZE_COL] = {
	//	{1, 2, 4,5},
	//	{6,0,4,-5},
	//	{9, 2, 3, 7}

	//};

	////Массив двумерный 3*4;



	//const int SIZE_ROW = 3; //кол-во строк
	//const int SIZE_COL = 4; //кол-во столбцов



	///*int arr[SIZE_ROW][SIZE_COL] = {
	//	 {1,5,6,7},
	//	 {-8,0,4,7},
	//	 {5,3,100,-45}
	// };*/

	// /*int arr[SIZE_ROW][SIZE_COL];
	// arr[0][0] = 1;
	// arr[0][1] = 5;
	// arr[0][2] = 6;
	// arr[0][3] = 7;
	// arr[1][0] = -8;
	// arr[1][1] = 0;
	// arr[1][2] = 4;
	// arr[1][3] = 7;
	// arr[2][0] = 5;
	// arr[2][1] = 3;
	// arr[2][2] = 100;
	// arr[2][3] = -45;*/



	//int arr[SIZE_ROW][SIZE_COL] = { 1,5,6,7,-8,0,4,7,5,3,100,-45 };
	//cout << arr[1][0];


//const int SIZE_ROW = 20;
//const int SIZE_COL = 8;
//
//
//int min = -100;
//int max = 100;
//int arr[SIZE_ROW][SIZE_COL] = { 1,5,6,7,-8,0,4,7,5,3,100,-45 };
//
//for (int i = 0; i < SIZE_ROW; i++) 
//{
//	for (int j = 0; j < SIZE_COL; j++)
//	{
//		arr[i][j] = rand() % (max - min) + min;
//	}
//
//}
//for (int i = 0; i < SIZE_ROW; i++) 
//{
//	for (int j = 0; j < SIZE_COL; j++) 
//	{
//		cout << arr[i][j] << " ";
//	}
//	cout << endl;
//}

//const int SIZE_ROW = 2;
//const int SIZE_COL = 8;
//
//
//int min = -100;
//int max = 100;
//int arr[SIZE_ROW][SIZE_COL] = { 1,5,6,7,-8,0,4,7,5,3,100,-45 };
//
//for (int i = 0; i < SIZE_ROW; i++) 
//{
//	for (int j = 0; j < SIZE_COL; j++)
//	{
//		arr[i][j] = rand() % (max - min) + min;
//	}
//
//}
//for (int i = 0; i < SIZE_ROW; i++) 
//{
//	for (int j = 0; j < SIZE_COL; j++) 
//	{
//		cout << arr[i][j] << " ";
//	}
//	cout << endl;
//}

//const int SIZE_ROW = 5;
//const int SIZE_COL = 8;
//
//
//int min = -100;
//int max = 100;
//int arr[SIZE_ROW][SIZE_COL] = { 1,5,6,7,-8,0,4,7,5,3,100,-45 };
//
//for (int i = 0; i < SIZE_ROW; i++) 
//{
//	for (int j = 0; j < SIZE_COL; j++)
//	{
//		arr[i][j] = rand() % (max - min) + min;
//	}
//}
//
//
//cout << "Массив 1: \n";
//for (int i = 0; i < SIZE_ROW; i++) 
//{
//	for (int j = 0; j < SIZE_COL; j++) 
//	{
//		cout << arr[i][j] << " ";
//	}
//	cout << endl;
//}
//
//
//for (int i = 0; i < SIZE_ROW; i++)
//{
//	for (int j = 0; j < SIZE_COL; j++)
//	{
//		if (arr[i][j]<0)
//		{
//			arr[i][j] = 1000;
//		}
//	}
//}
//
//cout << "Массив 2: \n";
//for (int i = 0; i < SIZE_ROW; i++)
//{
//	for (int j = 0; j < SIZE_COL; j++)
//	{
//		cout << arr[i][j] << " ";
//	}
//	cout << endl;
//}


//const int SIZE_ROW = 5;
//const int SIZE_COL = 8;
//
//
//int min = -100;
//int max = 100;
//int arr[SIZE_ROW][SIZE_COL] = { 1,5,6,7,-8,0,4,7,5,3,100,-45 };
//
//for (int i = 0; i < SIZE_ROW; i++)
//{
//	for (int j = 0; j < SIZE_COL; j++)
//	{
//		arr[i][j] = rand() % (max - min) + min;
//	}
//}
//
//
//cout << "Массив 1: \n";
//for (int i = 0; i < SIZE_ROW; i++)
//{
//	for (int j = 0; j < SIZE_COL; j++)
//	{
//		cout << arr[i][j] << " ";
//	}
//	cout << endl;
//}
//
//
//cout << endl;
//int maxValue;
//for (int i = 0; i < SIZE_ROW; i++) //по строкам
//{
//	maxValue = arr[i][0];
//	for (int j = 0; j < SIZE_COL; j++) //по столбцам
//	{
//		if (maxValue < arr[i][j])
//		{
//			maxValue = arr[i][j];
//		}
//	}
//	cout << "Row " << i << " Max: " << maxValue;
//	cout << endl;
//}
//
//cout << "Массив 2: \n";
//for (int i = 0; i < SIZE_ROW; i++)
//{
//	for (int j = 0; j < SIZE_COL; j++)
//	{
//		if (arr[i][j] % 2 == 0)
//		{
//			cout << arr[i][j] << " ";
//		}
//	}
//	cout << endl;
//}

//бульбашка 
	
//const int SIZE = 10;
//int arr[SIZE];
//
//srand(time(NULL));
//// заполнение массива
//for (int i = 0; i < SIZE; i++) {
//	cout << "arr[" << i << "] = ";
//	arr[i] = rand() % (20 - 10) + 10;
//	cout << arr[i] << endl;
//}
//
/*int temp;*/ // временная переменная для обмена элементов местами
//
//// Сортировка массива пузырьком
//for (int i = 0; i < SIZE - 1; i++) {
//	for (int j = 0; j < SIZE - i - 1; j++) {
//		if (arr[j] > arr[j + 1]) {
//			// меняем элементы местами
//			temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		}
//	}
//}

//// Вывод отсортированного массива на экран
//for (int i = 0; i < SIZE; i++) {
//	cout << arr[i] << " ";
//}
//cout << endl;




}

