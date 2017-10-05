//Vehicle.h - header for Vehicle class

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
public:
	Vehicle(void);
	virtual ~Vehicle(void);
	//string BlowHorn(); //regular way
	virtual string BlowHorn();//virtual for late binding
	//virtual string BlowHorn() = 0;//pure virtual method ie abstract
};
#endif
