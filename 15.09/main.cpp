#include<iostream>
#include "MyClass.h"
using namespace std;

MyClass operator++ (const MyClass& _date);
MyClass operator-- (const MyClass& _date);

MyClass operator+ (const MyClass& _date, int d);
MyClass operator- (const MyClass& _date, int d);
MyClass operator+ (int d, const MyClass& _date);
MyClass operator- (int d, const MyClass& _date);

MyClass operator+= (MyClass& _date, int d);
MyClass operator-= (MyClass& _date, int d);
MyClass operator+= (int d, MyClass& _date);
MyClass operator-= (int d, MyClass& _date);

bool operator> (const MyClass& date_1, const MyClass& date_2);
bool operator< (const MyClass& date_1, const MyClass& date_2);
bool operator>= (const MyClass& date_1, const MyClass& date_2);
bool operator<= (const MyClass& date_1, const MyClass& date_2);
bool operator== (const MyClass& date_1, const MyClass& date_2);
bool operator!= (const MyClass& date_1, const MyClass& date_2);



MyClass operator++(const MyClass& _date)
{
	MyClass date(_date);
	date.increase(1);
	return date;
}

MyClass operator-- (const MyClass& _date)
{
	MyClass date(_date);
	date.decrease(1);
	return date;
}

MyClass operator+ (const MyClass& _date, int d)
{
	MyClass date(_date);
	date.increase(d);
	return date;
}

MyClass operator- (const MyClass& _date, int d)
{
	MyClass date(_date);
	date.decrease(d);
	return date;
}

MyClass operator+ (int d, const MyClass& _date)
{
	MyClass date(_date);
	date.increase(d);
	return date;
}

MyClass operator- (int d, const MyClass& _date)
{
	MyClass date(_date);
	date.decrease(d);
	return date;
}

MyClass operator+= (MyClass& _date, int d)
{
	_date.increase(d);
	return _date;
}

MyClass operator-= (MyClass& _date, int d)
{
	_date.decrease(d);
	return _date;
}

MyClass operator+= (int d, MyClass& _date)
{
	_date.increase(d);
	return _date;
}

MyClass operator-= (int d, MyClass& _date)
{
	_date.decrease(d);
	return _date;
}

bool operator> (const MyClass& date_1, const MyClass& date_2)
{
	return date_1.date > date_2.date;
}

bool operator< (const MyClass& date_1, const MyClass& date_2)
{
	return date_1.date < date_2.date;
}

bool operator>= (const MyClass& date_1, const MyClass& date_2)
{
	return date_1.date >= date_2.date;
}

bool operator<= (const MyClass& date_1, const MyClass& date_2)
{
	return date_1.date <= date_2.date;
}

bool operator== (const MyClass& date_1, const MyClass& date_2)
{
	return date_1.date == date_2.date;
}

bool operator!= (const MyClass& date_1, const MyClass& date_2)
{
	return date_1.date != date_2.date;

}


int MyClass::Getdate() const
{
	return 0;
}



void MyClass::Inputdate()
{
	cout << endl << "Input date: ";
	cin >> date;
}

void MyClass::Outputdate()
{
	cout << endl << "Date: " << date;
}

void MyClass::Setdate(int a)
{
	date = a;
}
