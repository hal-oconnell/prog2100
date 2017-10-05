//Linked List demonstration driver

#include <iostream>
#include <conio.h>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList list;

	cout << "Begin linked list demonstration" << endl;
	_getch();

	cout << "Test of APPEND function" << endl;
	list.appendNode(1.2);
	list.appendNode(3.4);
	list.appendNode(5.6);
	list.displayList();

	cout << "Test of INSERT function" << endl;
	list.insertNode(1.0);
	list.insertNode(2.0);
	list.insertNode(4.0);
	list.insertNode(6.0);
	list.displayList();

	cout << "Test of DELETE function" << endl;
	list.deleteNode(1.0);
	list.deleteNode(2.0);
	list.deleteNode(4.0);
	list.deleteNode(6.0);
	list.displayList();

	cout << "End linked list demonstration" << endl;
	_getch();
	return 0;
}