//
// Created by prog2100 on 04/10/17.
//

#ifndef INHERITOR_2_HUMAN_H
#define INHERITOR_2_HUMAN_H

#include "animal.h"
#include "mammal.h"

class Human : public Animal, public Mammal
{
public:
	void aboutUs();
};


#endif //INHERITOR_2_HUMAN_H
