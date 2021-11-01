#include <cstdlib>
#include <iostream>

#include "stack.h"


Stack::Stack() {
	stackPtr = nullptr;
}

Stack::~Stack() {
	item* p1;
	item* p2;

	p1 = stackPtr;

	while (p1 != nullptr) {
		p2 = p1;
		p1 = p1->prev;
		p2->prev = nullptr;
		delete p2;
	}
}

void Stack::Push(std::string name, int value) {
	item* n = new item;

	n->name = name;
	n->value = value;
	
	if (stackPtr == nullptr)
	{
		stackPtr = n;
		stackPtr->prev = nullptr;
	}
	else
	{
		n->prev = stackPtr;
		stackPtr = n;
	}
}

void Stack::ReadItem(item* r) {
	std::cout << "------------\n";
	std::cout << "name: " << r->name << std::endl;
	std::cout << "value: " << r->value << std::endl;
	std::cout << "------------\n";
}

void Stack::Pop() {
	if (stackPtr == nullptr)
	{
		std::cout << "Nothing on the stack\n";
	}
	else
	{
		item* p = stackPtr;
		ReadItem(p);
		stackPtr = stackPtr->prev;
		p->prev = nullptr;
		delete p;
	}
}

void Stack::Print() {
	item* p = stackPtr;

	while (p != nullptr)
	{
		ReadItem(p);
		p = p->prev;
	}
}