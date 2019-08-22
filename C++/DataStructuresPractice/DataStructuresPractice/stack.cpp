#include "pch.h"
#include <iostream>
#include "stack.h"

stack::stack()
{
	top = -1;
}

bool stack::isEmpty()
{
	if (top < 0) { return true; };
	return false;
}

int stack::pop()
{
	int value = stackArr[top];
	top--;
	return value;
}

int stack::peek()
{
	if (top >= 0) {	return stackArr[top];};
	return -1;
}

bool stack::push(int value)
{
	if (top < (MAX_SIZE - 1))
	{
		top++;
		stackArr[top] = value;
		return true;
	}
	return false;
}

void stack::display()
{
	for (int i = top; i >= 0; i--)
	{
		std::cout << stackArr[i] << "\t";
	}
	std::cout << "\n";
}