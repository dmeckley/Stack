/*****************************************************
*	Stack.cpp
*
*	Dustin Meckley
*	ciss350
*	7/20/15
*/

#ifndef STACK_CPP_
#define STACK_CPP_

#include "Stack.h"

/*****************************************************
*	Stack()
*
*	Stack Default Constructor
*/
Stack::Stack() 
{ 
	top = NULL;
	setLength(0); 
}


/*****************************************************
*	~Stack()
*
*	Stack Destructor
*/
Stack::~Stack()
{
	clear();
}

/*****************************************************
*	Stack()
*
*	Stack clear Function Method
*/
void Stack::clear()
{
	// Clears all nodes and node values from the stack and
	// sets the length back to zerp.
	while(top)
	{
		setNext(top->getNext());
		delete top;
		top = getNext();
	}
	setNext(NULL);
	setLength(0);
}

/*****************************************************
*	Stack()
*
*	Stack push Function Method
*/	
void Stack::push(int value)
{
	// Adds node and value onto the top of the stack
	// and throws an exception if the stack is full.
	if (isFull())
	{
		throw FullStackException();
	}
	else
	{
		SingleLinkedNode *newNode;

		newNode = new SingleLinkedNode();
		newNode->setValue(value);

		if(isEmpty())
		{
			top = newNode;
			newNode->setNext(NULL);
			incLength();
		}
		else
		{
			newNode->setNext(top);
			top = newNode;
			incLength();
		}
	}
}

/*****************************************************
*	Stack()
*
*	Stack pop Function Method
*/
void Stack::pop() 
{
	// returns the value of the top node on the stack
	// while removing the node on the stack but it also
	// throws an exception if the stack is empty.
	if(isEmpty())
	{
		throw EmptyStackException();
	}	
	else
	{
		SingleLinkedNode* temp;
		temp = top;	
		std::cout << "s.pop() = " << temp->getValue() << std::endl;
		top = top->getNext();
		decLength();
		delete temp;
	}			
}

/*****************************************************
*	Stack()
*
*	Stack setLength Function Method
*/
void Stack::setLength(int length)
{
	// sets the initial length of the stack
	// only used by the constructor so it could
	// be removed, if memory is of the essence. 
	this->length = length;
}

/*****************************************************
*	Stack()
*
*	Stack peek Function Method
*/
int Stack::peek() const
{
	// returns the value of the top node on the stack
	// while leaving the node on the stack but it also
	// throws an exception if the stack is empty.
	if(isEmpty())
	{
		throw EmptyStackException();
	}	
	else
	{
		SingleLinkedNode* temp;
		temp = top;
		return top->getValue();
	}				
}

/*****************************************************
*	Stack()
*
*	Stack length Function Method
*/
int Stack::getLength() const
{
	// returns the length of the stack data structure.
	return this->length;
}


/*****************************************************
*	Stack()
*
*	Stack isFull Function Method
*/
bool Stack::isFull() const
{
	// returns true if stack is full.
	// trys to allocate another SingleLinkedNode
	// and if successful, then function returns 
	// false; otherwise, it returns true and throws
	// and exception.

	SingleLinkedNode* loc;
	
	try
	{
		loc = new SingleLinkedNode();
		delete loc;
		return false;
	}			
	catch(Stack::AllocationException e)
	{
		e.message();
		return true;
	}
}

/*****************************************************
*	Stack()
*
*	Stack isEmpty Function Method
*/
bool Stack::isEmpty() const
{
	// returns true if stack is empty.
	return top == NULL;			
}

/*****************************************************
*	displayList()
*
*	displayList Function of the Stack Class
*/
void Stack::display() const
{
	// Displays the stack data structure out to the user.
	SingleLinkedNode* ptr;
	ptr = top;

	// While the ptr points to a node, then traverse through the stack
	std::cout << "Stack = {"; 
	while(ptr)
	{
		std::cout << ptr->getValue();
		ptr = ptr->getNext();
		std::cout << ", ";
	}
	std::cout << "}" << std::endl; 
}

/*****************************************************
*	Stack()
*
*	Stack setLength Function Method
*/
void Stack::incLength()
{
	// Increments the length of the stack.
	this->length++;
}

/*****************************************************
*	Stack()
*
*	Stack setLength Function Method
*/
void Stack::decLength()
{
	// Decrements the length of the stack.
	this->length--;
}

#endif 
