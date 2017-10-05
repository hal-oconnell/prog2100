//header file for class DayOfYear
//list methods here

#pragma once //causes the current source file to be included
			//only once - may not work on older systems
#include <iostream>
#include <conio.h>
using namespace std;

class DayOfYear
{
private:
	int month;
	int day;
public:
	DayOfYear();
	~DayOfYear();
	void setMonth(int month);
	int getMonth();
	void setDay(int day);
	int getDay();
	void output();

};
