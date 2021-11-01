#pragma once
#include <string>

class Stack {
private:

	struct item {
		std::string name;
		int value;
		item* prev;
	};

	item* stackPtr;

public:
	
	void Push(std::string name, int value);
	void Pop();
	void ReadItem(item* r); //points at item and reads
	void Print();

	Stack();
	~Stack();
};