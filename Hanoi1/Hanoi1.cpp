// Hanoi.cpp : Defines the entry point for the console application.
//
//Tower of Hanoi using Vector-based Stacks!
//#include "stdafx.h"

#include<iostream>
//#include<conio.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;

void print_elem(int elem)
{
	cout << elem << endl;
}

class Stack{
public:
	void push(int d){ t.push_back(d); }
	int pop()
	{
		int d = t.back();
		t.pop_back();
		return d;
	}
	void set_stk_id(int id)
	{
		this->stk_id = id;
	}
	int get_stk_id()
	{
		return (this->stk_id);
	}
	void printstack()
	{
		for_each(t.rbegin(), t.rend(), print_elem);
	}
private:
	vector<int> t;
	int stk_id;

};

void InterimPrints(Stack *source, Stack *temp, Stack *destination)
{
	// The stk_id class variable contains the original label of the stack to control
	// the order of the printing 

	cout << "Printing stack 1" << endl;
	if (source->get_stk_id() == 1) {
		source->printstack();
	}
	else if (temp->get_stk_id() == 1) {
		temp->printstack();
	}
	else {
		destination->printstack();
	}
	
	cout << "Printing stack 2" << endl;
	if (source->get_stk_id() == 2) {
		source->printstack();
	}
	else if (temp->get_stk_id() == 2) {
		temp->printstack();
	}
	else {
		destination->printstack();
	}
	cout << "Printing stack 3" << endl;
	if (source->get_stk_id() == 3) {
		source->printstack();
	}
	else if (temp->get_stk_id() == 3) {
		temp->printstack();
	}
	else {
		destination->printstack();
	}

	cout << "Next move..." << endl;
	cout << "Press Enter to Continue";
	cin.ignore();
}


void MoveTowerofHanoi(int disk, Stack *source, Stack *temp, Stack *destination)
{
	// The recursive routine avoids doing any real work until it needs to move a single disk
	if (disk == 1)
	{
		destination->push(source->pop());
	}
	else
	{
		MoveTowerofHanoi(disk - 1, source, destination, temp);
		destination->push(source->pop());
		InterimPrints(source, destination, temp);
		MoveTowerofHanoi(disk - 1, temp, source, destination);
	
		InterimPrints(temp, source, destination);

	}

}

int main()
{
	int disks;
	cout << "Enter the number of disks!" << endl;
	cin >> disks;
	
	// Allocate 3 stacks to hold the disks.
	// Stack 1 = original source
	// Stack 2 = temporary storage spot
	// Stack 3 = final destination
	// Since the algorithm shifts the stack roles during execution
	// The stack ID variables are used to control printing the stacks
	// in the original order at all times
	
	Stack* stk_1 = new Stack();
	stk_1->set_stk_id(1);
	for (int i = disks; i>0; --i) {
		stk_1->push(i);
	}

	cout << "Printing Original Source!" << endl;
	stk_1->printstack();
	Stack* stk_2 = new Stack();
	stk_2->set_stk_id(2);
	Stack* stk_3 = new Stack();
	stk_3->set_stk_id(3);
	MoveTowerofHanoi(disks, stk_1, stk_2, stk_3);
	cout << "Printing Final Destination!" << endl;
	stk_3->printstack();
	delete stk_1;
	delete stk_2;
	delete stk_3;
}

