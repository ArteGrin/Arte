#include <iostream>
#include "Windows.h"
using namespace std;



/*
!
Передача параметров  в функцию возможна 3-мя способами
1) По копии или по значению
2) По указателю (тогда работаем с оригинальной переменной)
3) По ссылке (тогда тоже работаем с оригинальной переменной)
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
    /*Тема: Указатели*/




    /*
    для переменной int
    указатель создатся с типом int*
    для bool - bool*
    short short*



    & - оператор взятия адреса
    bool num = true;
    bool* address = &num;



    Указатель в оперативной памяти занимает от 4-8 байт в зависимости от архитектуры системы
    */
    //int num = 100;



    //int* ptrNum = &num; //создали указатель типа int*



    //cout << "Pointer: " << ptrNum << endl; //операция взятия адреса




    //cout << *ptrNum << endl;//оператор разименования указателя *ИмяУказателя - получаем доступ
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
