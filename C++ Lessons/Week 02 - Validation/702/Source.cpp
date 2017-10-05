//Example of magic formula and simple validation
#include <iostream>
#include <string>
#include <sstream>
#include <conio.h>

using namespace std;

//int main()
//{
//	float num = 123.456;
//	cout << num << " Without magic formula" << endl;
//	_getch();
//
//	//Magic formula
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(2);
//	cout << "$" << num << " With magic formula" << endl;
//	_getch();
//
//	//$123.46
//
//	return 0;
//}

//example of validation, for-loop, while-true,strStream,break & continue
//int main()
//{
//	int input;
//
//	while (true)
//	{
//		cin >> input;
//		if ((input >= 1 && input <= 2))
//			break;
//		cin.clear();//resets true/false state so input can be reentered
//		cin.ignore(1000, '\n');//discards up to 100 char or until new line
//		cout << "Please press 1 or 2! \n" << endl;
//	}//end while
//
//	return 0;
//}

int main()
{
	while (true)
	{

		bool bRejected = false;
		string fullName;
		cout << "Please enter your name: ";
		getline(cin, fullName);//get entire line including spaces

		//step through each char in string until we hit end or reject
		for (int i = 0; i < fullName.length() && !bRejected; i++)
		{
			//if the current  char is alph - that's fine
			if (isalpha(fullName[i]))
				continue;
			//if the current char is a space - that's fine
			if (fullName[i] == ' ')
				continue;
			//otherwise reject the char
			bRejected = true;
		}//end for

		//if the input is accepted, exit the while loop
		//otherwise reject the input

		if (!bRejected)//input is valid leave trap
		{
			cout << "valid - exiting program" << endl;
			_getch();
			break;//leave the while loop
		}
		else{
			cout << "not valid" << endl;
			_getch();
		}

	}//end while
	return 0;
}//end main
