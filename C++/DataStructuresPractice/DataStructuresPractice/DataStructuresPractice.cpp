#include "pch.h"
#include <iostream>
#include "list.h"
#include "stack.h"

void linkedListPractice()
{
	list * myLinkedList = new list;

	myLinkedList->createNode(5);
	myLinkedList->createNode(1);
	myLinkedList->createNode(3);
	myLinkedList->display();

	myLinkedList->insertAtCustom(8, 2);
	myLinkedList->display();
}


void stackPractice()
{
	stack * myStack = new stack;

	bool stackState = myStack->isEmpty();

	if (stackState == true)
	{
		myStack->push(50);
		myStack->push(15);
		myStack->push(2);
		myStack->push(5);
		myStack->display();
		myStack->pop();
		myStack->peek();
		myStack->display();
	}
}


int main()
{
	//linkedListPractice();
	stackPractice();

	return 1;
}


