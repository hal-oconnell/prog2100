//Header for NumberList class
#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
	struct ListNode
	{
		double value;//value
		struct ListNode *next;//pointer to next node
	};

	ListNode *head; // points to first struct in mem

public:
	NumberList() { head = 0; }

	//list functions
	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayList() const;
};
#endif