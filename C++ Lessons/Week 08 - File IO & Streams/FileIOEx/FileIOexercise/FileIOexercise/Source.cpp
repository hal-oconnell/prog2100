//Topic: reading and printing to a text file
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	string line;
	ifstream myfile("Text.txt");

	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, line);//get line from file assign to str
			cout << line << endl;
		}
	}
	else cout << "Unable to open file" << endl;
	_getch();

	return 0;
}//end main