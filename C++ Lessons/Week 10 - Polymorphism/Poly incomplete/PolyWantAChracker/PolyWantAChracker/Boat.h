//Boat.h - header file for Boat class

#ifndef Boat_H
#define Boat_H
#include <string>
#include "Vehicle.h"

class Boat : public Vehicle //inherits
{
public:
	Boat(void);
	virtual ~Boat(void);
	virtual string BlowHorn();
};
#endif