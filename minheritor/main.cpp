// minheritor.cpp
// sample of multiple inheritance
// Hal O'Connell, 2017
//

#include <iostream>
using namespace std;

class Animal
{
public:
	string kind;
	int heartbeat;

	Animal(): kind("Vertebrate"), heartbeat(60) { }
	~Animal() {}
	void aboutMe()
	{
		cout << "I am a " << kind << endl;
		cout << "My heart rate is: " << heartbeat << endl;
		moveIt();

	}
	void moveIt() { cout << "I got to move it move it." << endl; }

};

class Mammal
{
public:
	string warmblood;

	Mammal(): warmblood("endothermic") {}
	~Mammal() {}
	void stayWarm() { cout << "I am " << warmblood << "." << endl; }

};


// Catclass is derived from base class Animal.
class Cat : public Animal, public Mammal
{
public:
	void aboutMeow() { cout << "I can Meow." << endl; }
};

// Fish class is derived from base class Animal.
class Fish : public Animal
{
public:
	void aboutSplash() { cout << "I can splash and swim." << endl; }
};

class Human : public Animal, public Mammal
{
public:
	void aboutUs() { cout << "I have opposable thumbs" << endl; }
};

int main(int argc, char **argv)
{
	cout << endl << "First say hello to Kitty..." << endl << endl;

	Cat kitty;
	kitty.kind = "Siamese";
	kitty.heartbeat = 72;
	kitty.aboutMe();
	kitty.aboutMeow();
	kitty.stayWarm();

	cout << endl << "Now let's go fishing..." << endl << endl;

	Fish carp;
	carp.kind = "Koi";
	carp.heartbeat = 120;
	carp.aboutMe();
	carp.aboutSplash();

	cout << endl << "Now let's go People watching..." << endl << endl;

	Human Ted;
	Ted.kind = "Programmer";
	Ted.aboutMe();
	Ted.aboutUs();
	Ted.stayWarm();

	return 0;
}
