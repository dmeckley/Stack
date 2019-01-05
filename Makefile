LIFO : main.o Node.o SingleLinkedNode.o Stack.o 
	clang++ main.o Node.o SingleLinkedNode.o Stack.o -o LIFO

main.o : main.cpp Stack.h SingleLinkedNode.h Node.h
	clang++ -c main.cpp

Node.o : Node.cpp Node.h
	clang++ -c Node.cpp
	
SingleLinkedNode.o : SingleLinkedNode.cpp SingleLinkedNode.h
	clang++ -c SingleLinkedNode.cpp

Stack.o : Stack.cpp Stack.h
	clang++ -c Stack.cpp

clean : 
	rm -f *.o LIFO
	