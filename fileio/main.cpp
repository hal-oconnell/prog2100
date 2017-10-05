//Topic: reading and printing to a file
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string line;
	ifstream myfile("Text.txt");
	//ifstream myfile;
	//myfile.open("Text.txt");

	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			getline(myfile, line);//get line from file and assign to str
			cout << line << endl;
		}
	}
	else
		cout << "Unable to open file" << endl;

	cin.ignore();

	myfile.close();
	return 0;
}