//
// Created by prog2100 on 04/10/17.
//

#ifndef INHERITOR_2_CAT_H
#define INHERITOR_2_CAT_H

#include "animal.h"
#include "mammal.h"

// Cat class is derived from base class Animal.
class Cat : public Animal, public Mammal
{
public:
	void aboutMeow();
};
#endif //INHERITOR_2_CAT_H
