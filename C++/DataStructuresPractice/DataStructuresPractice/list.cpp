#include "pch.h"
#include <iostream>
#include "list.h"

list::list()
{
	head = NULL;
	tail = NULL;
}

void list::createNode(int value)
{
	node * tempNode = new node;
	tempNode->data = value;
	tempNode->next = NULL;

	if (head == NULL)
	{
		head = tempNode;
		tail = tempNode;
		tempNode = NULL;
	}
	else
	{
		tail->next = tempNode;
		tail = tempNode;
	}
}

void list::display()
{
	node *temp = new node;
	temp = head;
	while (temp != NULL)
	{
		std::cout << temp->data << "\t";
		temp = temp->next;
	}
	std::cout << "\n";
}

void list::insertStart(int value)
{
	node * temp = new node;
	temp->data = value;
	temp->next = head;
	head = temp;
}

void list::insertEnd(int value)
{
	node * temp = new node;
	temp->data = value;
	temp->next = NULL;

	tail->next = temp;
	tail = temp;
}

void list::insertAtCustom(int value, int pos)
{
	node * temp = new node;
	temp->data = value;

	node * previous = new node;
	node * current = new node;

	current = head;

	for (int i = 0; i < pos; i++)
	{
		previous = current;
		current = previous->next;
	}

	temp->next = current;
	previous->next = temp;
}
