#include <iostream>
#include "Windows.h"
using namespace std;



/*
ѕередача параметров  в функцию возможна 3-м€ способами
1) ѕо копии или по значению
2) ѕо указателю (тогда работаем с оригинальной переменной)
3) ѕо ссылке (тогда тоже работаем с оригинальной переменной)
*/



void increment(int* ptr)
{
    (*ptr)++;
}



void incrementTest(int num)
{
    num++;
}



int main()
{
    //00000027FA3AFA44
    //000000F4DBAFF994
    /*“ема: ”казатели*/




    /*
    дл€ переменной int
    указатель создатс€ с типом int*
    дл€ bool - bool*
    short short*



    & - оператор вз€ти€ адреса
    bool num = true;
    bool* address = &num;



    ”казатель в оперативной пам€ти занимает от 4-8 байт в зависимости от архитектуры системы
    */
    //int num = 100;



    //int* ptrNum = &num; //создали указатель типа int*



    //cout << "Pointer: " << ptrNum << endl; //операци€ вз€ти€ адреса




    //cout << *ptrNum << endl;//оператор разименовани€ указател€ *»м€”казател€ - получаем доступ
    ////к значению в переменной, на которую указывает указатель



    //increment(ptrNum);

    //cout << num << endl;
    //return 0;

    int size;
    cout << "Enter size: " << endl;
    cin >> size;

    int* arr = new int[size];
   /* cout << arr;*/ //вывод адреса превого элемента массива


    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }

    delete[]arr;
 }