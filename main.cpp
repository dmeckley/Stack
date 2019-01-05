/*****************************************************
*	main.cpp
*
*	Dustin Meckley
*	ciss350
*	7/20/15
*/

#include "Node.h"
#include "SingleLinkedNode.h"
#include "Stack.h"

/*****************************************************
*	main()
*
*	Test Driver for execution of program.
*/
int main()
{
	std::cout << std::endl;

	try
	{
		// Demonstrate Stack Class Object Instance.
		Stack s;
		
		// Demonstrate an empty stack.
		std::cout << "Displaying the Empty Stack" << std::endl;
		std::cout << "--------------------------" << std::endl;
		s.display();
		std::cout << "s.getLength() = " << s.getLength() << std::endl << std::endl;
		
		// Determines if the stack is full or empty of the empty stack data structure.
		std::cout << "Diplaying isFull & isEmpty of the empty Stack" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "s.isFull() = " << s.isFull() << std::endl;
		std::cout << "s.isEmpty() = " << s.isEmpty() << std::endl << std::endl;

		// Pushes a values and a node onto the stack LIFO.
		std::cout << "Pushing an element onto the empty Stack" << std::endl;
		std::cout << "---------------------------------------" << std::endl;
		s.display();
		std::cout << "s.push(5) = " << std::endl;
		s.push(5);
		s.display();
		std::cout << "s.getLength() = " << s.getLength() << std::endl << std::endl;

		// Determines if the stack is full or empty after the push operation.
		std::cout << "Diplaying isFull & isEmpty of the Stack after the Push operation" << std::endl;
		std::cout << "----------------------------------------------------------------" << std::endl;
		std::cout << "s.isFull() = " << s.isFull() << std::endl;
		std::cout << "s.isEmpty() = " << s.isEmpty() << std::endl << std::endl;

		// Pushes more values and nodes onto the stack LIFO.
		std::cout << "Pushing more elements onto the Stack" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "s.getLength() = " << s.getLength() << std::endl;
		s.display();
		std::cout << "s.push(##) = 15, 25, 35, 45, 55. " << std::endl;
		s.push(15);
		s.push(25);
		s.push(35);
		s.push(45);
		s.push(55);
		s.display();
		std::cout << "s.getLength() = " << s.getLength() << std::endl << std::endl;

		// Pops value off of stack while removing the node from the stack LIFO.
		std::cout << "Poping the elements off of the Stack" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "s.getLength() = " << s.getLength() << std::endl;
		s.display();
		s.pop();
		s.pop();
		s.pop();
		s.display();
		std::cout << "s.getLength() = " << s.getLength() << std::endl << std::endl;

		// Peeks value off of stack while leaving the node onto the stack LIFO.
		std::cout << "Peeking elements off of the Stack" << std::endl;
		std::cout << "---------------------------------" << std::endl;
		std::cout << "s.getLength() = " << s.getLength() << std::endl;
		s.display();
		std::cout << "s.peek() = " << s.peek() << std::endl;
		std::cout << "s.peek() = " << s.peek() << std::endl;
		std::cout << "s.peek() = " << s.peek() << std::endl;
		s.display();
		std::cout << "s.getLength() = " << s.getLength() << std::endl << std::endl;
		
		// Determines if the stack is full or empty after the pop and peek operations.
		std::cout << "Diplaying isFull & isEmpty of the Stack after Pop & Peek operations" << std::endl;
		std::cout << "-------------------------------------------------------------------" << std::endl;
		std::cout << "s.isFull() = " << s.isFull() << std::endl;
		std::cout << "s.isEmpty() = " << s.isEmpty() << std::endl << std::endl;

		// Clears the Stack data structure and sets length to zero.
		std::cout << "Clearing all elements and nodes off of the Stack" << std::endl;
		std::cout << "------------------------------------------------" << std::endl;
		s.display();
		std::cout << "s.clear() = " << std::endl;
		s.clear();
		s.display();
		std::cout << "s.getLength() = " << s.getLength() << std::endl << std::endl;

		// Determines if the stack is full or empty after the clear operation.
		std::cout << "Diplaying isFull & isEmpty of the Stack after Clear operation" << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;
		std::cout << "s.isFull() = " << s.isFull() << std::endl;
		std::cout << "s.isEmpty() = " << s.isEmpty() << std::endl << std::endl;
	}
	catch(Stack::BadObjectException e)
	{
		e.message();
		exit(0);
	}
	catch(Stack::FullStackException e)
	{
		e.message();
		exit(0);
	}
	catch(Stack::EmptyStackException e)
	{
		e.message();
		exit(0);
	}
	
	return 0;
}