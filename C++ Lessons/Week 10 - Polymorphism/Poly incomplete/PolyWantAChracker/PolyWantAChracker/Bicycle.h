//Bicycle.h - header file for Bicycle class

#ifndef Bicycle_H
#define Bicycle_H
#include <string>
#include "Vehicle.h"

class Bicycle : public Vehicle //inherits
{
public:
	Bicycle(void);
	virtual ~Bicycle(void);
	virtual string BlowHorn();
};
#endif