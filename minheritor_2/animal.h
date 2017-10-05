//
// Created by prog2100 on 04/10/17.
//


#ifndef INHERITOR_2_ANIMAL_H
#define INHERITOR_2_ANIMAL_H

#include <iostream>
using namespace std;

class Animal
{
public:
	string kind;
	int heartbeat;

	Animal();
	Animal(string *kind, int heartbeat);
	~Animal();
	void aboutMe();

	void moveIt();

};

#endif //INHERITOR_2_ANIMAL_H
