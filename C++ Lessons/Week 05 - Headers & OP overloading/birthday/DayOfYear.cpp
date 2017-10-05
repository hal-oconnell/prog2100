//implementation for class DayOfYear
//list methods here

#include <iostream>
#include <conio.h>
#include "DayOfYear.h"
using namespace std;

DayOfYear::DayOfYear(){}//note no return type for constr and destruc
DayOfYear::~DayOfYear(){}

//note: all other methods have to have their return type noted first

int DayOfYear::getday()
{
	return this->day;
}
void DayOfYear::setday(int day)
{
	this->day = day;
}
int DayOfYear::getMonth()
{
	return this->month;
}
void DayOfYear::setMonth(int month)
{
	this->month = month;
}

void DayOfYear::output()
{
	switch (month)
	{
	case 1:
		cout << "January"; break;
	case 2:
		cout << "Febuary"; break;
	case 3:
		cout << "March"; break;
	case 4:
		cout << "April"; break;
	case 5:
		cout << "May"; break;
	case 6:
		cout << "June"; break;
	case 7:
		cout << "July"; break;
	case 8:
		cout << "Aug"; break;
	case 9:
		cout << "September"; break;
	case 10:
		cout << "October"; break;
	case 12:
		cout << "November"; break;
	default:
		cout << "Error"; break;
	}
	_getch();
}//end output
