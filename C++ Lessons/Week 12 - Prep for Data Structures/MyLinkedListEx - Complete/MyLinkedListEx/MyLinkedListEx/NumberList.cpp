#include <iostream>
#include <conio.h>
#include "NumberList.h"
using namespace std;

//Traverse and display values in list
void NumberList::displayList() const
{
	ListNode *nodePtr; // To move through the list
	nodePtr = head; // Move nodePointer to head of list

	while (nodePtr)// while it points to a node - traverse
	{
		cout << nodePtr->value << endl;
		nodePtr = nodePtr->next;
	}
	_getch();

}//end method displayList

//Steps for APPENDING a node to the list:
//Create a new node and Store data into the new node
//If there are no nodes in the list,
//make the new node the first node.
//Else
//Traverse the list to find the last node.
//Add the node to the end of the list (i.e. append)
void NumberList::appendNode(double num)
{
	ListNode *newNode; // to point to the new node
	ListNode *nodePtr; // to move through the list

	//Allocate a new node and store num there
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = 0;

	//If there are no nodes in the list make newNode the 1st node
	if (!head)
		head = newNode;
	else // otherwise, traverse and insert newNode at end
	{
		nodePtr = head; // initialize nodepointer to head of list
		while (nodePtr->next)//travers to find last node
		{
			nodePtr = nodePtr->next;
		}
		//insert newNode as the last node
		nodePtr->next = newNode;
	}
}//end method appendNode

//Step for INSERTING a node to the list:
//Create and store data to a new node
//If there are no nodes in the list
//make the new node the first node.
//Else (its not the first node)
//Find the first node whose value is greater than
//or equal to the new nodes value, or you reach
//the end of the list.
//Insert the new node before the found node, or
//insert at the end of the list

void NumberList::insertNode(double num)
{
	ListNode *newNode;
	ListNode *nodePtr; //used to traverse (ie where you are)
	ListNode *previousNode = 0;

	//Create and store data to a new node
	newNode = new ListNode;
	newNode->value = num;

	//If there are no nodes in the list
	//make the new node the first node.
	if (!head)
	{
		head = newNode;
		newNode->next = 0;
	}
	else //insert newNode
	{
		//nodePtr to head of the list
		nodePtr = head;
		//set previous node to null
		previousNode = 0;
		//skip nodes whose value is less than num
		while (nodePtr != 0 && nodePtr->value < num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		//If the new new node is to be the first in the list
		//insert it before all the other nodes.
		if (previousNode == 0)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else //insert after previous node
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}//end else
}//end insterNode


//Steps for DELETING a node
//Check that list is not empty and or that value exists
//Remove the node without breaking the chain
//Delete the node from memory

void NumberList::deleteNode(double num)
{
	ListNode *nodePtr; //used to traverse (ie where you are)
	ListNode *previousNode = 0;

	//if the list is empty do nothing
	if (!head)
		return;
	//discover if the first node is being deleted
	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else // if the node to be deleted is not the first
	{
		nodePtr = head;
		//traverse and skip all nodes whose value != to num
		while (nodePtr != 0 && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		//If nodePtr is not at the end of the list, link
		//the previous node to the node after nodePtr,
		//then delete nodePtr
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}

}//end deleteNode