#include <iostream>
using namespace std;

int main()
{
	/*int number;
	cout << "Enter number: " << endl;
	cin >> number;
	bool number2;
	number2 = number % 2;
	cout << !number2 << endl;
	cout << "If 0 = nechetnoe; If 1 = chetnoe";*/

	//cout << "Enter number: ";
	//int number;
	//cin >> number;
	//cout << "If you see 1 - even, else 0 - odd\n";
	//cout << (number % 2 == 0);

	//int number;
	//cout << "Enter number: " << endl;
	//cin >> number;
	//if (number > 0 && number != 10 && !(number == 20)
	//{
	//	cout << "Positive and != 10";
	//}
	//else if (number < 0)
	//{
	//	cout << "Negative";
	//}
	//else
	//{
	//	cout << "Zero or 10";
	//}


	/*int result;
	cout << "Enter dayumber: " << endl;
	cin >> result;
	switch(result)*/

	/*cout << "Give me day of week: ";
	int result;
	cin >> result;
	switch (result) {
	case 1:
		cout << "M";
		break;
	case 2:
		cout << "T";
		break;
	case 3:
		cout << "W";
		break;
	case 4:
		cout << "Th";
		break;
	case 5:
		cout << "Fr";
		break;
	case 6:
		cout << "S";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "Error";
		break;*/


		//task 1
		/*float num1;
		float num2;
		cout << "Enter first number: " << endl;
		cin >> num1;
		cout << "Enter second number: " << endl;
		cin >> num2;

		if (num1 > num2)
		{
			cout << "lower number here is the second: " << num2;
		}
		if (num1 > num2)
		{
			cout << "lower number here is the first: " << num1;
		}
		else
		{
			cout << "The numbers are equal";
		}*/

		// task 2
		//float num1;
		//float num2;
		//cout << "Enter first number: " << endl;
		//cin >> num1;
		//cout << "Enter second number: " << endl;
		//cin >> num2;
		//if (num1 == num2)
		//{
		//	cout << "The numbers are equal";
		//}
		//else
		//{
		//	if (num1 > num2)
		//	{
		//		cout << "Numbers in ascending order: " << num2 << ";" << num1;
		//	}
		//	else
		//	{
		//		cout << "Numbers in ascending order: " << num1 << ";"  << num2;
		//	}
		//}

	//int n = 123456;
	//cout << n % 10 << endl;
	//
	//int v;
	//v = (n % 100) / 10;
	//cout << v << endl;
	//
	//float b;
	//b = (n % 1000) / 100;
	//cout << b << endl;
	//
	//float a;
	//a = (n % 10000) / 1000;
	//cout << a << endl;
	//
	//
	//float c;
	//c = (n % 100000) / 10000;
	//cout << c << endl;
	//
	//float q;
	//q = n/100000;
	//cout << q << endl;

	//int x = 5;
	//int y = ++x;
	//cout << 19 % 5;


	//enum coins {
	//	penny = 1, nickel = 5, dime = 10,
	//	quarter = 25, half = 50,
	//	large_dollar = 100
	//};
	//// Оголошення змінної для монети 
	//int coin;
	//cout << "Please enter the value of an American coin"
	//<< endl;
	//cin >> coin;
	//switch (coin)
	//{
	//case penny:
	//	// Виводимо на екран, що пенні
	//	// відповідає одному центу
	//	cout << "penny = 1 cent " << endl;
	//	// Доповнюємо вивід описом монети
	//	// На одній стороні є Авраам Лінкольн,
	//	// а Меморіал Лінкольна — на іншій. 
	//	cout << "The obverse depicts Abraham Lincoln,"
	//		"and the reverse pictures "
	//		"the Lincoln Memorial." << endl;
	//	break;
	//case nickel:
	//	// Виводимо на екран, що нікель
	//	// відповідає 5 центам
	//	cout << "nickel = 5 cents" << endl;
	//	// Доповнюємо вивід описом монети
	//	// На лицьовій стороні монети зображений
	//	// Томас Джефферсон, і Монтічелло на
	//	// зворотному боці. 
	//	cout << "The obverse depicts "
	//		"Thomas Jefferson, and "
	//		"the reverse pictures Monticello."
	//		<< endl;
	//	break;
	//case dime:
	//	// Виводимо на екран, що дайм 
	//	// відповідає 10 центам
	//	cout << "dime = 10 cents" << endl;
	//	// Доповнюємо вивід описом монети
	//	// На лицьовій стороні монети зображений
	//	// Франклін Д. Рузвельт, і факел 
	//	// на зворотному боці
	//	cout << "The obverse depicts Franklin D."
	//		"Roosevelt and the reverse"
	//		"pictures a torch oak and"
	//		"olive branches." << endl;
	//	break;
	//case quarter:
	//	// Виводимо на екран, що 1/4 долара
	//	// складає 25 центів
	//	cout << "quater = 25 cents" << endl;
	//	// Доповнюємо вивід описом монети
	//	// На лицьовій стороні монети зображений
	//	// Джордж Вашингтон, і на зворотному боці -
	//	// або емблема Сполучених Штатів, 
	//	// або дизайн одного з 50 штатів
	//	cout << "The obverse depicts George "
	//		"Washington, and the reverse "
	//		"pictures either America "
	//		"the Beautiful Quarters "
	//		"or State Quarter Series." << endl;
	//	break;
	//case half:
	//	// Виводимо на екран, що 1/2 долара
	//	// складає 50 центів
	//	cout << "half = 50 cents " << endl;
	//	// Доповнюємо вивід описом монети
	//	// На лицьовій стороні монети зображений
	//	// Джон Ф. Кеннеді, а на зворотному боці -
	//	// велика печатка США.
	//	cout << "The obverse depicts John F. Kennedy"
	//		"and the reverse pictures the Seal of"
	//		"the President of the United "
	//		"States." << endl;
	//	break;
	//case large_dollar:
	//	// Виводимо на екран, що 1 доларова монета
	//	// становить 100 центів
	//	cout << "large dollar = 100 cents" << endl;
	//	// Доповнюємо вивід описом монети
	//	// На ній зображена рідна американська
	//	// героїня Сакаджавея на лицьовій стороні і
	//	// білоголовий орлан — на зворотній.
	//	cout << "The obverse depicts Sacagawea, "
	//		"who is now an American symbol, "
	//		"and the reverse pictures a bald"
	//		"eagle." << endl;
	//	break;
	//default:
	//	cout << "not found" << endl;
	//}
	//return 0;


	//enum days_of_weeks
	//{
	//	MONDAY = 1,
	//	TUSDAY,
	//	WEDNESDAY,
	//	THURSDAY,
	//	FRIDAY,
	//	SATURDAY,
	//	SUNDAY
	//};
	//
	//int day;
	//
	//cout << "Enter the number of the day of the week and get it : " << endl;
	//cin >> day;
	//
	//switch (day)
	//{
	//case MONDAY:
	//	cout << "The first day of a week - Monday";
	//	break;
	//case TUSDAY:
	//	cout << "The second day of a week - Tusday";
	//	break;
	//case WEDNESDAY:
	//	cout << "The third day of a week - Wednesday";
	//	break;
	//case THURSDAY:
	//	cout << "The firth day of a week - Thursday";
	//	break;
	//case FRIDAY:
	//	cout << "The fifth day of a week - Friday";
	//	break;
	//
	//case SATURDAY:
	//	cout << "The sixth day of a week - Saturday";
	//case SUNDAY:
	//	cout << "The seventh day of a week - Sunday";
	//	break;
	//default:
	//	cout << "Error number of a day";
	//}

	/*int grade_1;
	int grade_2;
	int grade_3;
	int grade_4;
	int grade_5;
	int number_of_ratings = 5;

	cout << "Enter the 5 grades of student: " << endl;
	cin >> grade_1 >> grade_2 >> grade_3 >> grade_4 >> grade_5;

	if (grade_1 > 12 || grade_1 < 0 || grade_2 > 12 || grade_2 < 0 || grade_3 > 12 || grade_3 < 0 || grade_4 > 12 || grade_4 < 0 || grade_5 > 12 || grade_5 < 0)
	{
		cout << "Error";

	}
	else
	{


		float average_rating = (grade_1 + grade_2 + grade_3 + grade_4 + grade_5) / number_of_ratings;

		cout << "Average rating is: ";
		cout << average_rating << endl;
		if (average_rating >= 4)
		{
			cout << "The student is admitted to the exam";
		}
		else
		{
			cout << "The student is NOT admitted to the exam";
		}

	}*/


	//int number;
	//cout << "Enter the integer number: ";
	//cin >> number;
	//
	//if (number % 2 == 0)
	//{
	//	cout << "Even number, multiply it by 3: ";
	//	cout << number * 3;
	//}
	//else
	//{
	//	cout << "An odd number, divide it by two (without fractional part): ";
	//	cout << number / 2; 
	//}

	//float number_1;
	//char sign;
	//float number_2;
	//
	//cout << "Enter the first number: " << endl;
	//cin >> number_1 ;
	//
	//cout << "Enter the sign : " << endl;
	//cin >> sign;
	//
	//cout << "Enter the second number: " << endl;
	//cin >> number_2;
	//
	//if (sign == 47) // division
	//{
	//	cout << "Result: ";
	//	cout << number_1 / number_2;
	//}
	//else if (sign == 42) //*
	//{
	//	cout << "Result: ";
	//	cout << number_1 * number_2;
	//}
	//else if (sign == 43) //plus
	//{
	//	cout << "Result: ";
	//	cout << number_1 + number_2;
	//}
	//else if (sign == 45) //minius
	//{
	//	cout << "Result: ";
	//	cout << number_1 - number_2;
	//}
	//



	//short a1 = 10;

	//bool b1 = 10;

	//cout << static_cast<long long>(a1 + b1);

	//unsigned short sh1 = 65534;
	//cout << sh1;


	//int value;
	//cout << "Enter the number: ";
	//cin >> value;


	//if (value >= -10 && value <= -1)
	//{
	//	cout << "The number belongs to the range from -10 to -1" << endl;
	//}
	//else if (value >= 2 && value <= 15)
	//{
	//	cout << "The number belongs to the range from 2 to 15" << endl;
	//}
	//else:
	//{
	//	cout << "The number does not belong to any of the ranges" << endl;
	//}


//}