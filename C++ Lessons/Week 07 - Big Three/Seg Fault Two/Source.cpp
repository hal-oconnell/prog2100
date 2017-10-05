//A custom string class that allocates mem to hold
//a string that we can pass in. Note without a customized
//copy constructor or assignment operator C++ will
//provide defaults that shallow copy

#define _CRT_SECURE_NO_WARNINGS
#include <sstream>
#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

class MyString
{
private: 
	char *pchString; //this needs to be deep copied
	int nLength; //this may be shallow copied
public:
	~MyString();//custom destructor
	MyString(const MyString& cSource);//custom copy constructor
	MyString& operator = (const MyString& cSource);//custom copy assignment operator
	
	string getString()
	{
		string s(this->pchString);//use of built in conversion from char* to string
		return s;
	}
	int GetLength(){ return this->nLength; }

	MyString(char *pchString = "")//constructor with args
	{
		nLength = strlen(pchString) + 1;//get str len + terminator
		this->pchString = new char[nLength];//create buffer of that length
		strncpy(this->pchString,pchString, nLength);//copy into buffer
		this->pchString[nLength - 1] = '\0';//terminate string
	}

	
};//end class


//BIG THREE:

//Custom Destructor - prevents mem leaks and safes pointer
MyString::~MyString()
{
	if (pchString != 0)
	{
		delete[] pchString;//delete buffer array
		pchString = 0;//safe pchString by setting to null
	}
}

//Custom copy constructor
MyString::MyString(const MyString& cSource)
{
	//because nLength is not a pointer, we can shallow copy it
	this->nLength = cSource.nLength;

	//pchString is a pointer, so we need to deep copy it IF it not null
	if (cSource.pchString)//either it has an address or is null
	{
		//allocate memory for our copy
		pchString = new char[nLength];
		//copy the string into our newly allocated memory
		strncpy(this->pchString, cSource.pchString, this->nLength);
	}
	else // no stuff to deep copy
	{
		this->pchString = 0;//safe the pointer
	}

}//end custom copy constructor

//Custom assignment operator is usually implemented using the same
//code as the copy constructor, but is checks for self-assignment
//A(A), return *this (a pointer to itself), and deallocates any
//previously allocated memory before deep copying.
//1)self assignment check
//2)explicitly deallocate any value string is already holding
//3)return *this for chaining

//Custom Assignment Operator
MyString& MyString::operator = (const MyString& cSource)
{
	//check for self-assignment
	if (this == &cSource)//addresses
	{
		return *this; //do nothing an leave method
	}

	//deallocate any value that this objects string is holding
	//prior to copying incoming objects values
	delete[] this->pchString;
	
	//copy routines go here (same as in copy constructor)
	//because nLength is not a pointer, we can shallow copy it
	this->nLength = cSource.nLength;

	//pchString is a pointer, so we need to deep copy it IF it not null
	if (cSource.pchString)//either it has an address or is null
	{
		//allocate memory for our copy
		this->pchString = new char[nLength];
		//copy the string into our newly allocated memory
		strncpy(pchString, cSource.pchString, nLength);
	}
	else // no stuff to deep copy
	{
		this->pchString = 0;//safe the pointer
	}

	return *this;
}

int main()
{
	cout << "use of copy constructor" << endl;
	MyString strHello("Hello world!");//constructor with args
	MyString strOther(strHello);//use of copy constructor
	cout << "from strHello: " << strHello.getString() << endl;
	cout << "from strOther: " << strOther.getString() << endl << endl;

	cout << "use of copy assignment operator" << endl;
	strOther = strHello; //use of copy assignment operator
	cout << "from strHello: " << strHello.getString() << endl;
	cout << "from strOther: " << strOther.getString() << endl;

	_getch();
	return 0;

}//objects go out of scope here (crash)