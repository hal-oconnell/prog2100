#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class Validator
{
public:
	bool validate(string* inputString)
	{
		char tempKey;
		const static int maxLineLength = 20;
		
		do{
			tempKey = _getch();
			if ((tempKey >= 32 && tempKey <= 126))//valid ASCII range
			{
				//when valid char is pressed, accept and print to screen
				if (maxLineLength > (*inputString).length())//check against max
				{
					(*inputString) += tempKey;
					printf("%c", tempKey);
				}
			}
			else if (tempKey == 8)//backspace
			{
				//if backspace pressed, pop char off string and erase from screen
				if ((*inputString).length() > 0)//verify there is something to delete
				{
					(*inputString).erase((*inputString).length() - 1, 1);
					printf("\b \b"); //print backspace
				}
			}

			else if (tempKey == -32)//prevent arrows being used
			{
				_getch();
			}

		} while (tempKey != 13);

		return true;
	}//end method validate

};//end class

//driver to test ASCII validation class/method
int main()
{
	string strStuff;
	Validator myVal;
	cout << "enter stuff: " << endl;

	if (myVal.validate(&strStuff))
		cout << "\n"<< "The input string: " << strStuff << " is valid" << endl;
	else	
		cout << "\n" << "The input string: " << strStuff << " is Not valid" << endl;
	
	_getch();
	return 0;
}

//int main()
//{ 
//
//		cout << "press up arrow;" << endl;
//		int control = _getch();
//		int keycode = _getch();
//		cout << control << endl;
//		cout << keycode << endl;
//
//		_getch();
//	
//	return 0; 
//}
