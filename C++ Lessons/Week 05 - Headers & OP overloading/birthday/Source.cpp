#include <iostream>
#include <conio.h>
#include "DayOfYear.h"
using namespace std;

int main(){
	int userInput;
	DayOfYear today;
	DayOfYear birthday;

	cout << "Birthday Program\n";
	cout << "Enter this month as a number 1-12: ";
	cin >> userInput;
	today.setMonth(userInput);
	cout << "Enter birthday month as number 1-12: ";
	cin >> userInput;
	birthday.setMonth(userInput);
	cout << "Enter this day as a number 1-31";
	cin >> userInput;
	today.setDay(userInput);
	cout << "Enter the day of your birthday 1-31\n";
	cin >> userInput;
	birthday.setDay(userInput);
	cout << endl;

	if (today.getMonth() == birthday.getMonth() && today.getDay() == birthday.getDay())
		cout << "Happy Birthday!\n";
	else
		cout << "Sorry today is not your Birthday!\n";
	_getch();

	return 0;

}//end method main