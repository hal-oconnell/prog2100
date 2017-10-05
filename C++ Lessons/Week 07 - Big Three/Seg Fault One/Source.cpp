//based on www.technical-recipes.com

#define _SCL_SECURE_NO_WARNINGS//for any unsafe library call
#include <iostream>
#include <conio.h>
#include <sstream> //for toString()
#include <algorithm> //for copy()
using namespace std;

class Array
{
private:
	int size;
	int *vals;
public:
	//prototypes
	Array(int s, int *v);//constructor with args
	~Array();//default destructor
	string toString();//toString
	Array(const Array& a);//copy constructor
	Array& operator=(const Array &a);//copy assignment operator

};//end class Array

//implementations
string Array::toString()
{
	stringstream strStream;
	string str;
	string x;

	for (int i = 0; i < this->size; i++)
	{
		strStream << this->vals[i];
		strStream >> x;
		str += x;
		strStream.clear();
	}
	return(str);
}//end toString

Array::~Array()
{
	delete vals;
	vals = 0;
}

Array::Array(int s, int *v)
{
	size = s;
	vals = new int[size];
	copy(v, v + size, vals);
}

Array::Array(const Array &a)//copy constructor implementation
{
	size = a.size;
	vals = new int[a.size];
	copy(a.vals, a.vals + size, vals);
}

Array& Array::operator=(const Array &a)//copy assignment operator imp
{
	if (&a != this)//avoid self assign by checking addresses
	{
		size = a.size;
		vals = new int[a.size];
		copy(a.vals, a.vals + size, vals);
	}
	return *this;
}

int main()
{
	cout << "Begin Seg Fault Test" << endl;
	int vals[4] = { 1, 2, 3, 4 };

	Array a1(4, vals);//call to constructor with args
	Array a2(a1);//call to copy constructor
	a1 = a2;//call to copy assignment operator

	cout << "a1: " << a1.toString() << endl;
	cout << "a2: " << a2.toString() << endl;
	
	cout << "Seg Fault Test Complete" << endl;
	_getch();
	return 0;
}