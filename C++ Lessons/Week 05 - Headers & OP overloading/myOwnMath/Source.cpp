//this is the driver file
#include <iostream>
#include <conio.h> //header from a library
#include "MyOwnMath.h" //prog defined header
using namespace std;

int main()
{
	int ans1 = 0;
	int ans2 = 0;
	int input = 0;
	MyOwnMath myOwnMathObj;//instance of math class

	cout << "Enter a single integer 1-9: ";
	cin >> input;
	ans1 = myOwnMathObj.square(input);
	ans2 = myOwnMathObj.add(input, input);
	cout << "Your number squared is: " << ans1 << endl;
	cout << "Your number added to self is: " << ans2;
	_getch();
	
}//end main