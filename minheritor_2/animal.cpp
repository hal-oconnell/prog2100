//
// Created by prog2100 on 04/10/17.
//

#include <iostream>
#include "animal.h"

using namespace std;

Animal::Animal() {
	this->kind = "Vertebrate";
	this->heartbeat = 60;
}
Animal::Animal(string *kind, int heartbeat) {
	if (kind == nullptr) this->kind = "Vertebrate"; else this->kind = *kind;
	if (heartbeat == 0) this->heartbeat = 60; else this->heartbeat = heartbeat;
}
Animal::~Animal() {}
void Animal::aboutMe()
	{
		cout << "I am a " << kind << endl;
		cout << "My heart rate is: " << heartbeat << endl;
		moveIt();

	}
void Animal::moveIt() { cout << "I got to move it move it." << endl; }


