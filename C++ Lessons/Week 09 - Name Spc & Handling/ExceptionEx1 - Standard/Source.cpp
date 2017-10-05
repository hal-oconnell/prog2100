//note: for this example to work in VS you must enable the EHa
//option in project -> properties-> c/c++ -> Code Generation
//set to "yes with SEH Exceptions";


//Topic: using standard exceptions

#include <iostream>
#include <exception>
#include <conio.h>
#include <stdexcept>
using namespace std;

int compare(int a, int b) {
	if (a < 0 || b < 0) {
		throw std::invalid_argument("received negative value");
	}
}

void main()
{
	try {
		compare(-1, 3);
	}
	catch (const std::invalid_argument& e) {
		cout << "exception fired" << endl;
	}

	_getch();
}//end main


