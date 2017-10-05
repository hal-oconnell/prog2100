//MyOwnMath class implementation file
//there are two methods
//square() and add(), both return integers

#include <iostream>
#include <conio.h>
#include "MyOwnMath.h"
using namespace std;

//do not redefine the class here but do reference
//the methods using the MyOwnMath::ref

//constructor
MyOwnMath::MyOwnMath(void){}
//destructor
MyOwnMath::~MyOwnMath(void){}
//methods
int MyOwnMath::square(int num)
{
	return num * num;
}
int MyOwnMath::add(int numL, int numR)
{
	return numL + numR;
}