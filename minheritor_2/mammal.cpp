//
// Created by prog2100 on 04/10/17.
//

#include "mammal.h"

Mammal::Mammal(): warmblood("endothermic") {}
Mammal::~Mammal() {}
void Mammal::stayWarm() { cout << "I am " << warmblood << "." << endl; }


