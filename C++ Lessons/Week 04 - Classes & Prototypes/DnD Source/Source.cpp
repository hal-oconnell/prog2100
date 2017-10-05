#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

class weapon{
public:
	weapon(){}//default constructor

	double calcSwordDamage(){
		return 5 + rand() % 20;
	}
	double calcFlameDamge(){
		return 10 + rand() % 15;
	}

};//end class weapon

class characterClass{
private:
	char charType;
	double health;
	int dex;
	int stren;
	int armor;
	weapon weap;// aggregate "character 'has a' weapon"

public:
	//constructors
characterClass(){}//default constructor
characterClass(char cT, double hlth, int dx, int st, int arm)//knights constructor
	:charType(cT), health(hlth), dex(dx), stren(st), armor(arm)//initialization section
	{}//empty body - you could put validation code here
characterClass(char cT, double hlth, int dx, int st)//dragons constructor
	: charType(cT), health(hlth), dex(dx), stren(st)//initialization section
	{}//empty body - you could put validation code here

	//get and set methods
void setHealth(double health){this->health = health;}
double getHealth(){ return this->health; }

//attack and defense methods
double calcDefense()
{
	if (charType == 'k')
		return dex + armor + rand() % 11;//calcs knights def
	else
		return dex + rand() % 16;//calc dragons def
}// end calcDefense
double calcAttack()
{
	if (charType == 'k')
		return this->weap.calcSwordDamage() + dex + stren;//calc knight damage
	else
		return this->weap.calcFlameDamge() + dex + stren;//calc dragon damage
}// end calcAttack
void die()
{
	if (charType == 'k')
		cout << "Dragon won - Yea for evil!" << endl;
	else
		cout << "Knight won - Huzzah for good!" << endl;
	cout << "The epic battle is now over" << endl;
	_getch();
}//end die

};//end characterClass

int main()
{
	char choice;
	int ran;
	double attack;
	double defense;
	double damage;

	characterClass Knight('k', 300, 30, 20, 10);//create knight obj
	characterClass Dragon('d', 300, 20, 10);//create dragon obj

	cout << "The battle begins!" << endl;
	cout << "Press any key to continue" << endl;
	_getch();

	do{
		ran = rand() % 2;//0 = knight, 1 = dragon
		if (ran == 0)//knight attacks
		{
			attack = Knight.calcAttack();
			defense = Dragon.calcDefense();
			damage = attack - defense;
			if (defense > attack)//no magic zombies
				damage = 0;
			Dragon.setHealth(Dragon.getHealth() - damage);
			cout << "Dragon is hit for " << damage << endl;
			cout << "Dragon has: " << Dragon.getHealth() << " health remaining" << endl;
			_getch();
		}
		else{
			attack = Dragon.calcAttack();
			defense = Knight.calcDefense();
			damage = attack - defense;
			if (defense > attack)//no magic zombies
				damage = 0;
			Knight.setHealth(Knight.getHealth() - damage);
			cout << "Knight is hit for " << damage << endl;
			cout << "Knight has: " << Knight.getHealth() << " health remaining" << endl;
			_getch();
		}

	} while (Knight.getHealth() > 0 && Dragon.getHealth() > 0);//they are both alive
	
	if (Knight.getHealth() <= 0)
		Knight.die();
	else
		Dragon.die();
	_getch();
	
	return 0;
}