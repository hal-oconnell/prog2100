//note: for this example to work in VS you must enable the EHa
//option in project -> properties-> c/c++ -> Code Generation
//set to "yes with SEH Exceptions";

#include <iostream>
#include <conio.h>
using namespace std;

double division(int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a / b);
}

int main()
{
	int x = 10;
	int y = 0;
	double z = 0;
	
	cout << "Numerator is: 10" << endl;
	cout << "Enter Denominator: ";
	cin >> y;

	try {
		z = division(x, y);
		cout << "Your answer is: " << z << endl;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}

	cout << "Exception test complete" << endl;
	_getch();
	return 0;
}