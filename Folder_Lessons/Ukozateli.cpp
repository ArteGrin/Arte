#include <iostream>
#include "Windows.h"
using namespace std;



/*
�������� ����������  � ������� �������� 3-�� ���������
1) �� ����� ��� �� ��������
2) �� ��������� (����� �������� � ������������ ����������)
3) �� ������ (����� ���� �������� � ������������ ����������)
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
    /*����: ���������*/




    /*
    ��� ���������� int
    ��������� �������� � ����� int*
    ��� bool - bool*
    short short*



    & - �������� ������ ������
    bool num = true;
    bool* address = &num;



    ��������� � ����������� ������ �������� �� 4-8 ���� � ����������� �� ����������� �������
    */
    //int num = 100;



    //int* ptrNum = &num; //������� ��������� ���� int*



    //cout << "Pointer: " << ptrNum << endl; //�������� ������ ������




    //cout << *ptrNum << endl;//�������� ������������� ��������� *������������ - �������� ������
    ////� �������� � ����������, �� ������� ��������� ���������



    //increment(ptrNum);

    //cout << num << endl;
    //return 0;

    int size;
    cout << "Enter size: " << endl;
    cin >> size;

    int* arr = new int[size];
   /* cout << arr;*/ //����� ������ ������� �������� �������


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