//To send output to a file, your program must first
//connect the file to a stream object of the type
//ofstream.To read input from a file, your program must first
//connect the file to a stream object of the type ifstream.
//The classes ifstream and ofstream are defined in the
//<fstream> library

#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
	//declare stream objects
	ifstream inStream;
	ofstream outStream;

	//stream vars must each be connected to a file
	//this is called opeing a file
	//files have two names - an internal and external one
	//used by the operating system

	inStream.open("infile.txt");
	outStream.open("outfile.txt");

	//a shorter version of above
	ifstream inStream2("infile.txt");

	// << this is the insertion operator
	// >> this is the extraction operator

	int num1, num2;
	inStream >> num1 >> num2;
	outStream << "num1 = " << num1 << " num2 = " << num2 << endl;
	_getch();

	//you must explicitly close files because they will be left
	//open if your program terminates abnormally. You should
	//also use exception handling.
	inStream.close();
	outStream.close();
	inStream2.close();

	//flush is a method of the output stream object that forces any
	//buffered information to be physically written to the file
	//e.g. outStream.flush(). Note close automatically calls flush().

	//Append to a file
	ofstream outStream2;
	outStream2.open("out.txt", ios::app);//second arg prevents overwrite

	outStream2 << "stuff \n" << "and more stuff \n";
	outStream2.close();

	//validate open state of file being used

	ifstream valStreamIn;
	ofstream valStreamOut;

	valStreamIn.open("myintext.txt");
	if (valStreamIn.fail())
	{
		cout << "Input file open failed - press any key to continue" << endl;
		_getch();
	}
	cout << "Input file open" << endl;

	valStreamOut.open("outsome.txt");
	if (valStreamOut.fail())
	{
		cout << "Output file open failed - press any key to continue" << endl;
		_getch();
	}
	cout << "Output file open" << endl;
	_getch();

	return 0;
}//end main