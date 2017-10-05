#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

class String
{
	//strMem is the MEMBER
	//strIn is a parameter

private:
	char *strMem; 

public:

	String()
	{
		cout << "default constructor fired" << endl;//testing
		this->strMem=NULL;
	}

	String( char *strIn )//one argument constructor
	{
		cout << "one argument constructor fired" << endl;//testing
		int len = strlen( strIn );
		this->strMem = new char[len+1];
		strcpy( this->strMem, strIn );
	}
	
	// copy constructor
	String ( const String& strIn )
	{
		cout << "copy constructor fired" << endl;//testing
		int len = strlen( strIn.strMem );
		this->strMem = new char[len+1];
		strcpy( this->strMem, strIn.strMem );
	}
	
	
	~String()// destuctor
	{
		cout << "destructor fired" << endl;//testing

		if( this->strMem != NULL )
		{		
			delete [] this->strMem;
		}		
	}
	
	String operator=( String& strIn )
	{	
		cout << "overloaded = operator fired" << endl;//testing		
		int len = strlen( strIn.strMem );
		this->strMem = new char[len+1];
		strcpy( this->strMem, strIn.strMem ); // at this point properties are now assigned
		return *this;//necessary for cascade scenario not if simple assignment e.g. obj=obj
	}

	String operator+=( String& strIn )
	{
		cout << "overloaded += operator fired" << endl;//testing
		char *temp = this->strMem;
		int len = strlen( this->strMem ) + strlen( strIn.strMem ) + 1;
		this->strMem = new char[len];
		strcpy( this->strMem, temp );
		strcat( this->strMem, strIn.strMem );
		delete [] temp;
		return *this;//necessary for cascade scenario not if simple concat e.g. obj+=obj
	}		

	friend ostream& operator<<( ostream& output, String& strIn )
	{
		output << strIn.strMem;
		return output;
	}

};//end class String


//driver to test this class.
int main()
{
	cout << "Begin tests of custom string class" << endl << endl;
	cout << "Begin test one" << endl;
	String fullName="";
	String firstName("Bob");//test of constructor with argument
	String lastName(" Loblaw");//test of constructor with argument
	fullName+=firstName;//test of += operator
	//copy called
	fullName+=lastName;//test of += operator
	cout << "Full Name: " << fullName << endl << endl;
	cout << "Begin test two" << endl;
	String name("some name");
	String someOtherName("some other name");
	cout << "Name: " << name << endl;
	name=someOtherName;//test of = operator
	cout << "Name: " << name << endl << endl;
	cout << "Tests complete" << endl;
	cin.get();

	//string x = "bob";
	//char y = 'b';
	//cout << y << endl;
	//cin.get();
	return 0;
}