#ifndef LIST_H
#define LIST_H

struct node {
	node *next;
	int data;
};

class list {
private:
	node *head, *tail;
public:
	list();
	void createNode(int value);
	void display();
	void insertStart(int value);
	void insertEnd(int value);
	void insertAtCustom(int value, int pos);
};

#endif // !LIST_H


