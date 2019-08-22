#ifndef STACK_H
#define STACK_H


#define MAX_SIZE 1000

class stack {
private:
	int top;
public:
	stack();
	int stackArr[MAX_SIZE];
	bool push(int value);
	int pop();
	int peek();
	bool isEmpty();
	void display();
};

#endif

