#include <cstdlib>
#include <iostream>
#include "stack.h"


int main(int argc, char** argv)
{
	Stack newStack;
	std::string command;
	std::string name;
	int value;
	while (true)
	{
		std::cout << "Please type a command (case sensitive)\npush (pushes an item onto the stack)\npop (pops off the top of the stack)\nprint (prints the current stack)\n\n";
		std::cin >> command;
		if (command == "push")
		{
			std::cout << "Please enter the name: ";
			std::cin >> name;
			std::cout << "\nPlease enter the value: ";
			std::cin >> value;
			newStack.Push(name, value);
		}
		else if (command == "pop")
		{
			std::cout << "POPPED: \n";
			newStack.Pop();
		}
		else if (command == "print")
		{
			newStack.Print();
		}
		else
		{
			std::cout << "Invalid command!\n";
			std::cout << "Please type a command (case sensitive)\npush <name>\npop (pops off the top of the stack)\nprint (prints the current stack)\n\n";
		}
	}
}