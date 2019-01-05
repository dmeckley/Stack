/*****************************************************
*	Stack.h
*
*	Dustin Meckley
*	ciss350
*	7/20/15
*/

#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdexcept>

#include "SingleLinkedNode.h"

class Stack : public SingleLinkedNode
{
public:
	// Exception Handler Inner Class:
	// ------------------------------
	class BadObjectException
	{
	public:
		void message()
		{
			std::cerr << "Error!: BadObjectException() was thrown!" << std::endl;
		}
	};
	class AllocationException
	{
	public:
		void message()
		{
			std::cerr << "Error!: AllocationException() was thrown!" << std::endl;
		}
	};
	class FullStackException
	{
	public:
		void message()
		{
			std::cerr << "Error!: FullStackException() was thrown!" << std::endl;
		}
	};
	class EmptyStackException
	{
	public:
		void message()
		{
			std::cerr << "Error!: EmptyStackException() was thrown!" << std::endl;
		}
	};

	// -----------------------------------------------------
	//                         Class Methods: 
	// -----------------------------------------------------

	// Constructor and Destructor Methods:
	// -----------------------------------
	Stack();													
	~Stack();			

	// Transformer Function Methods:
	// -----------------------------------
	void clear();

	// adds node onto top of stack
	void push(int);
													
	// returns value of node on top of stack, removing node from stack
	void pop();	

	// sets the length of the stack
	void setLength(int);										

	// Accessor Function Methods:
	// -----------------------------------
	// returns value of node on top of stack, leaving node on stack
	int peek() const;

	// returns length of stack
	int getLength() const;

	// Iterator Function Methods:
	// -----------------------------------
	// returns true if stack is full
	bool isFull() const;

	// returns true if stack is empty
	bool isEmpty() const;

	// displays the stack to the user
	void display() const;	

protected:
	// increments length of the stack
	void incLength();	
											
	// decrements length of the stack
	void decLength();											

private:
	// ----------------------------------------------------
	//                         Class Members:
	// ----------------------------------------------------
	// Pointer to top node.
	SingleLinkedNode* top;	
	
	// Length variable for size of the stack.
	int length;	
};

#endif 
