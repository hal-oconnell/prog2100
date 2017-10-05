//MyOwnMath header file
//This is the interface for the class MyOwnMath
//There are two math methods
//square() and add(), both return integers

#ifndef MYOWNMATH_H //if not defined
#define MYOWNMATH_H
using namespace std;

class MyOwnMath
{
public:
	MyOwnMath(void);//constructor
	virtual ~MyOwnMath(void);//destructor
	int square(int num);
	int add(int numL, int numR);
};



#endif //end the ifnot defined statement