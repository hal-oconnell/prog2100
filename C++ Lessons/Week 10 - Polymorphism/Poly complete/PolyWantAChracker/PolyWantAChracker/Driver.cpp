//Driver.cpp file

#include <iostream>
#include <conio.h>
#include "Vehicle.h"
#include "Bicycle.h"
#include "Boat.h"
using namespace std;

//prototypes
void withoutCasting();
void sliceExample();
void upCasting();
void downCasting();
void typeidExample();
void polyExample();

int main()
{
	//withoutCasting();
	//sliceExample();
	//upCasting();
	//downCasting();
	//typeidExample();
	polyExample();
	return 0;
}//end main

//example of method calls without casting
void withoutCasting()
{
	Bicycle myBike;
	Boat myBoat;
	cout << myBike.BlowHorn() << endl;//early bind
	cout << myBoat.BlowHorn() << endl;
	_getch();

}//end without Casting()

//example of slice
void sliceExample()
{
	Bicycle myBike;
	//Vehicle v1 = myBike;//impl upcast
	Vehicle v1 = (Vehicle)myBike;//expl upcast
	cout << v1.BlowHorn() << endl;//slice error
	//solution is to use pointers and dynamic vars
	//so we can treat v1 as a Bike and not slice it
	_getch();
}//end method sliceExample

//example of upcasting
void upCasting()
{
	Vehicle *pV = new Vehicle;
	Bicycle *pBic = new Bicycle;
	Boat *pBoat = new Boat;
	pV = pBic;//up cast
	cout << pV->BlowHorn() << endl;
	_getch();
}//end method upCasting

//example of downCasting
void downCasting()
{
	Vehicle *pV = new Boat;//upcast boat to vehicle
	Bicycle *pBic = dynamic_cast<Bicycle*>(pV);//downcast
	cout << "pBic = " << (long)pBic << endl;//wrong type returns null
	Boat *pBoat = dynamic_cast<Boat*>(pV);
	cout << "pBoat = " << (long)pBoat << endl;//correct type returns address
	
	_getch();
}

//example of using typeid
void typeidExample()
{
	Vehicle *pV = new Boat;//upcast
	if (typeid(Bicycle) == typeid(*pV))
		cout << "Vehicle pointer points to a Bicycle" << endl;
	else
		cout << "Vehicle pointer points to a Boat" << endl;
	_getch();
}

//example of polymorphism aka a late bind
void polyExample()
{
	Vehicle *pV = new Vehicle; //on heap
	Bicycle *pBic = new Bicycle; //on heap
	Boat *pBoat = new Boat; //on heap

	//Make a vehicle array
	//Vehicle *pVArray[2];//declared on stack
	Vehicle **pVarray = new Vehicle*[2];//declared on heap
	//double ** because an array is a pointer and its contents are pointers
	
	pVarray[0] = (Vehicle*)pBic;//expl upcast
	pVarray[1] = (Vehicle*)pBoat;//expl upcast

	for (int i = 0; i < 2; i++)
	{
		cout << pVarray[i]->BlowHorn() << endl;//late bind in action
	}
	_getch();
}