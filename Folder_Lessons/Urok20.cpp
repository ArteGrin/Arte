#include <iostream>
#include "Windows.h"
using namespace std;

void printMasage()
{
	cout << "Hello c+++\n";
}

int sumAB(int a, int b)
{
	return a + b;
}


int main()
{
	int (*pointerFunction)(int, int);
	char ch;
	cout << "Enter char: ";
	cin >> ch;
	int a, b;
	cout << "Enter a: ";

}