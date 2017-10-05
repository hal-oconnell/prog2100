#include <iostream>
#include <conio.h>
#include <exception>
using namespace std;

struct MyException : public exception
{
	const char * what() const throw ()
	{
		return "C++ Exception";
	}
};

int main()
{
	try
	{
		throw MyException();
	}
	catch (MyException& e)
	{
		std::cout << "MyException caught" << std::endl;
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		//Other errors
	}


	cout << "Exception test complete" << endl;
	_getch();

}//end main