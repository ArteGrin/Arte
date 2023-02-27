#include <iostream>
using namespace std;

//template <typename T1, typename T2>
//void sum(T1 a, T2 b)
//{
//	cout << a + b << endl;
//}

template <typename T1, typename T2, typename T3>
void comparison(T1 a, T2 b, T3 c)
{
    if (c > a && c > b)
    {
        cout << "The third number is the biggest" << endl;
    }
    else if (b > a && b > a)
    {
        cout << "The second number is the biggest" << endl;
    }
    else if (a > c && a > b)
    {
        cout << "The first number is the biggest" << endl;
    }
    else
    {
        cout << "The numbers are the same" << endl;
    }
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));

    /*sum(true, 3.4);
    sum(10, 8);
    sum(10, 23);
    sum(12.3, 4.5);
    sum(true, true);
    sum(4.5f, 3.4f);8*/

    float n1 = 4.5;
    int n2 = 18;
    double n3 = 9.0;
    
    comparison(n1, n2, n3);
}
