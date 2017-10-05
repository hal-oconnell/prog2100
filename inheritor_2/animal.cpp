//
// Created by prog2100 on 04/10/17.
//

#include <iostream>
#include "animal.h"

using namespace std;

Animal::Animal() {}
Animal::Animal(string kind, int heartbeat) {
	this->kind = "Vertebrate";
	this->heartbeat = 60;
}
Animal::~Animal() {}
void Animal::aboutMe()
	{
		cout << "I am a " << kind << endl;
		cout << "My heart rate is: " << heartbeat << endl;
		moveIt();

	}
void Animal::moveIt() { cout << "I got to move it move it." << endl; }


