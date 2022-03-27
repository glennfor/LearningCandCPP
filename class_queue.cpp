#if 0
Exercise 13-3: Write a class to implement a simple queue. A queue is very similar to a stack
except the data is removed in first-in-first-out (FIFO) order.
Member functions:
void Queue::put(int item); // Insert an item in the queue
int Queue::get(void); // Get the next item from the queue
Sample usage:
Queue a_queue;
a_queue.put(1); // Queue contains: 1
a_queue.put(2); // Queue contains: 1 2
a_queue.put(3); // Queue contains: 1 2 3
cout << a_queue.get() << '\n'; // Prints 1, queue contains 2 3
cout << a_queue.get() << '\n'; // Prints 2, queue contains 3
#endif

#include <iostream>
#include <conio.h>
#include <sstream>


class Queue{
	private:
		enum{MAX_ELEMENTS=100}
		int elements[MAX_ELEMENTS];
		int counter;//number of items so far
	public:
		Queue(void);//initialise the queue
		void push(int item); // Insert an item in the queue
		int pop(void); // Get the next item from the queue
		void peek(void)
};

Queue::Queue(void){
	counter=0;
}

void Queue::enqueue(int item){
	if (counnter <  MAX_ELEMENTS)
		elements[counter++]=item;
	else
	    std::cout << "Stack Overflow ";
}

int Queue::deque(void){
	if (counter > -1)
		return elements[counter--];
	else
	    std::cout << "Stack underflow ";
	    return 0;
}

void Queue::peek(void){
	std::cout << "Last element is " << elements[counter] << std::endl;
}

ostream operator<<(ostream& out, Queue q){
	int i = 0;
	out << "[" << q.elements[i++] ;
	for(; i <  q.counter +1; ++i){
		out <<", " << q.elements[i] ;
	}
	out << "]"
	return out;
}


main(){
	Queue q;
	for(int i = 0; i < 8; ++i){
		q.
	}
}
