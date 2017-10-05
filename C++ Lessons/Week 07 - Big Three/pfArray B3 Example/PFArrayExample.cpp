//Another Demo of the big three
//A class for a partially filled array of doubles.
//An object of this class can be accessed using the square
//brackets just like an ordinary array, but the object
//also automatically keeps track of how much of the array
//is in use.

#include <iostream>;
using namespace std;

class PFArrayD
{
private:
	double *a;//an array of doubles
	int capacity;//the size of this array
	int used;//the # of elements in use

public:
	PFArrayD();
	PFArrayD(int capacityValue);
	PFArrayD(const PFArrayD& pfaObj);//copy constructor

	void addElement(double element);
	bool full() const {return(capacity == used);}
	int getCapacity() const {return capacity;}
	int getUsed() const {return used;}
	void emptyArray(){used=0;}
	double& operator[](int index);
	PFArrayD& operator =(const PFArrayD& rightSide);//overloaded assignment
	~PFArrayD();//destructor
 };//end class

//Function Definitions for class PFArrayD

PFArrayD::PFArrayD() :capacity(50),used(0) //default const
{
	a=new double[capacity];
}

PFArrayD::PFArrayD(int size) :capacity(size),used(0)//const
{
	a=new double[capacity];
}

//definition for copy constructor
PFArrayD::PFArrayD(const PFArrayD& pfaObj)
	:capacity(pfaObj.getCapacity()),used(pfaObj.getUsed())
{
	a = new double[capacity];
	for(int i=0;i<used;i++)
		a[i]=pfaObj.a[i];//copy each array element
}

void PFArrayD::addElement(double element)
{
	if(used >= capacity)
	{
		cout << "Attempt to exceed capacity << endl";
		exit(0);
	}
	a[used] = element;
	used++;
}

double& PFArrayD::operator[](int index)
{
	if(index >= used)
	{
		cout << "Illegal index in PFArrayD" << endl;
		exit (0);
	}
	return a[index];
}

//definition of overloaded assignment operator
PFArrayD& PFArrayD::operator =(const PFArrayD& rightSide)
{
	if(capacity != rightSide.capacity)
	{
		delete []a;
		a = new double[rightSide.capacity];
	}

	capacity = rightSide.capacity;
	used = rightSide.used;
	for(int i=0;i<used;i++)
		a[i] = rightSide.a[i];
	
	return *this;

}



PFArrayD::~PFArrayD()//destructor
{
	delete []a;
	a = NULL; //this is optional but a good idea
}




//code a driver here

void testPFArrayD();

int main()
{
	cout << "This program tests the class PFArrayD" << endl;
	char ans;
	do
	{
		testPFArrayD();
		cout << "Test again? (y/n) ";
		cin >> ans;
	}while ((ans=='y') || (ans=='Y'));

	return 0;
}//end main

void testPFArrayD()
{
	int cap;
	cout << "Enter capacity of this super array: ";
	cin >> cap;
	PFArrayD a(cap);

	cout << "Enter up to " << cap << " nonnegative numbers.\n";
	cout << "Place a negative number at the end.\n";

	double next;
	
	cin >> next;
	while((next >= 0) && (!a.full()))
	{
		a.addElement(next);
		cin >> next;
	}

	if(next>=0)
	{
		cout << "Could not read all numbers" << endl;
		//clear the unread input
		while(next >= 0)
			cin >> next;
	}
	int count = a.getUsed();
	cout << "The following " << count << " numbers read and stored:" << endl;
	int index;
	for(index = 0; index < count; index++)
		cout << a[index] << " ";
	cout << endl;

	cout << "(plus a sentinel value.)\n";

}

