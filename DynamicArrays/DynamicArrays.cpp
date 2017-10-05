// DynamicArrays.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h" // only on Windows
#include <iostream>
// #include <conio.h>


using namespace std;

int main(int argc, char** argv) {
	int **matrix;
	// maxrow and maxcol mimic count of lines from file
	// for demo set to 5x4
	int maxrow = 5;
	int maxcol = 4;

	// dynamically allocate an array
	// maxrow = number of matrix rows
	// maxcol = line length

	matrix = new int *[maxrow];
	for (int count = 0; count < maxrow; count++)
	{
		matrix[count] = new int[maxcol];
	}

	// load the elements in to the matrix
	cout << endl << "Now enter the element for the matrix...";
	for (int row = 0; row < maxrow; row++)
	{
		for (int col = 0; col < maxcol; col++)
		{
			cout << endl << "Row " << (row + 1) << " Col " << (col + 1) << " :";
			cin >> matrix[row][col];
		}
	}

	// Write them back out
	cout << "Here is your matrix" << endl;
	for (int row = 0; row < maxrow; row++)
	{
		for (int col = 0; col < maxcol; col++)
		{
			cout << matrix[row][col];
			
		}
		cout << endl;
	}

	
	cout << "Deleting matrix and terminating" << endl;

	// To free the dynamically allocated memory
	// Delete each row pointer before deleting the array of pointers

	
	for (int row = 0; row < maxrow; row++)
	{
		delete[] matrix[row];
	}
	delete[] matrix;

	cin.ignore();
	return 0;
}
