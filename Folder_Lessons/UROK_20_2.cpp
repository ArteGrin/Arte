#include <iostream>
using namespace std;


void printMessage()
{
	cout << "Hello C++\n";
}



void sayHello()
{
	cout << "Hello World!\n";
}

int sum(int a, int b)
{
	return a + b;
}

int min(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}



int main()
{
	const int countFunction = 3;

	int*pointerMath(int, int) = { sum, min, mul };

	/*for (int i = 0; i < countFunction; i++)
	{
		cout << pointerMath;
	}*/

	//void (*pointerFunction)(); //указатель на функцию
	//

	//pointerFunction = sayHello;

	//pointerFunction();

	//pointerFunction = printMessage;

	//pointerFunction();

	return 0;
}