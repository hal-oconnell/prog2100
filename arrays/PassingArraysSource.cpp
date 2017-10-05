#include <iostream>
//#include <conio.h>
#include <string>
using namespace std;

//prototypes
void oneDexample();
void mod1Darray(int *p, int);
void twoDexample();
void mod2Darray(int p[][3], int, int);

int main()
{
	oneDexample();
	twoDexample();
	cin.ignore();
	return 0;
}//end main

void oneDexample() 
{
	int numArray[] = { 1,2,3,4,5 };
	int size = sizeof(numArray);
	cout << "size is: " << size << endl;
	int s = sizeof(numArray) / sizeof(numArray[0]);
	cout << "size is: " << s << endl;

	cout << "1D array before modification" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << numArray[i] << "  ";
	}
    cout << endl;
	//call the mod function
	mod1Darray(numArray, s);

	cout << "1D array after modification" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << numArray[i] << "  ";
	}
    cout << endl;
}


void mod1Darray(int *p, int size) {
	for (int i = 0; i < size; i++)
	{
		p[i]+=10;
	}

}
//void mod1Darray(int p[],int size){};

void twoDexample() {
	int twoDnumArray[][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int rowSize = sizeof(twoDnumArray) / sizeof(twoDnumArray[0]);
	int colSize = 3;

	cout << "2D array before modification" << endl;
	for (int row = 0; row < rowSize; row++)
	{
		for (int col = 0; col < colSize; col++)
		{
			cout << twoDnumArray[row][col] << "  ";
		}
        cout << endl;
	}

	//call mod function
	mod2Darray(twoDnumArray, rowSize, colSize);

	cout << "2D array after modification" << endl;
	for (int row = 0; row < rowSize; row++)
	{
		for (int col = 0; col < colSize; col++)
		{
			cout << twoDnumArray[row][col] << "  ";
		}
        cout << endl;
	}


}

//the 3rd arg is the size of the arrays inside the first array/dimension
void mod2Darray(int p[][3], int rowSize , int colSize) {
	for (int row = 0; row < rowSize; row++)
	{
		for (int col = 0; col < colSize; col++)
		{
			p[row][col] += 10;
		}
		
	}

}