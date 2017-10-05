#include <fstream>
#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;

	double num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

	fin.open("numbers.txt");
	if (fin.fail())
	{
		cout << "Input file opening failed." << endl;
		exit(1);
	}
	fout.open("output.txt");
	if (fout.fail())
	{
		cout << "Output file opening failed" << endl;
		exit(1);
	}
	fin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;
	fout << num1 << " " << num2 << " " << num3 << " " << num4 << " "
		<< num5 << " " << num6 << " " << num7 << " " << num8 << " "
		<< num9 << " " << endl;

	while (!fin.eof())
	{
		fin >> num10;
		fout << num10 << " ";
		fin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7
			>> num8 >> num9 >> num10;
		fout << num1 << " " << num2 << " " << num3 << " " << num4 << " "
			<< num5 << " " << num6 << " " << num7 << " " << num8 << " "
			<< num9 << " " << endl;
	}
	fin.close();
	fout.close();
	_getch();
	return 0;
}//end main