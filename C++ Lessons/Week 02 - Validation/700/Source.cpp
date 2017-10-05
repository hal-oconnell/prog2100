#include <iostream>
//#include <conio.h>
#include <string>
using namespace std;

int numfunc()
{
	float num = 123.456;
	cout << num << "  Without magic formula" << endl;
	//magic formula
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << num << "  With magic formula" << endl;
	cout << '$' << num << endl;

	cin.ignore();
	return 0;
}

//Topics: validation,for,while,strStream,break,continue
//int main()
//{
//	int input;
//
//	while (true)
//	{
//		cout << "Enter 1 or 2: ";
//		cin >> input;//get input
//		if (input >= 1 && input <= 2)
//			break;
//		cin.clear();
//		cin.ignore(1000, '\n');//discards up to 1000 char or until new line reached
//		cout << "Please enter 1 or 2: \n" << endl;
//	}
//
//
//	return 0;
//}

int main()
{
	numfunc();

    while (true)
	{
		bool bRejected = false;
		string fullName;
		cout << "Enter name:  ";
		getline(cin, fullName);

		if (fullName.length() == 0)
			bRejected = true;

		for (int i = 0; i < fullName.length() && !bRejected; i++)
		{
			//if alpha - that's fine
			if (isalpha(fullName[i]))
				continue;
			//if current char is a space - that's fine
			if ((fullName[i] == ' ') || (fullName[i] == '\''))
				continue;
			//otherwise reject char
			bRejected = true;
		}//end for

		//if the input is accepted, exit the while loop
		if (!bRejected)
		{
			cout << "Input valid exiting program" << endl;
			cin.ignore();
			break;//breaks out of while loop
		}
		else{
			cout << "Input not valid" << endl;
			cin.ignore();
		}
	}//end while

	return 0;
}