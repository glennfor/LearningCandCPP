#include <iostream>
#include <conio.h>

using namespace std;
typedef char ELEMENT_TYPE;
class Stack {
	private:
		/* Bottom and maximum size of the stack. */
		enum {BOTTOM = 0, SIZE = 100};
		/* Keeps track of the current top of stack. */
		int stack_top;
		/* Holds the stack's contents. */
		ELEMENT_TYPE stack[SIZE];
		/* The public section. */
	public:
		/* Initialize a new stack so that it is empty. */
		Stack (void);
		/* Copy constructor */
		Stack (const Stack &s);
		/* Assignment operator */
		Stack &operator= (const Stack &s);
		/* Perform actions when stack is destroyed. */
		~Stack (void);
		/* Place a new item on top of the stack
		Does not check if the stack is full. */
		void push (ELEMENT_TYPE new_item);
		/* Remove and return the top stack item
		Does not check if stack is empty. */
		ELEMENT_TYPE pop (void);
		/* Return top stack item without removing it
		Does not check if stack is empty. */
		ELEMENT_TYPE top (void);
		/* Returns 1 if the stack is empty,
		otherwise returns 0. */
		int is_empty (void);
		/* Returns 1 if stack full, else returns 0. */
		int is_full (void);
	};
/*
 Implementation of a bounded stack ab-
straction in C++*/
//#include "stack.h"
Stack::Stack (void):stack_top (Stack::BOTTOM) {}

Stack::Stack (const Stack &s): stack_top (s.stack_top){
    for (int i = 0; i < s.stack_top; i++)
        this->stack[i] = s.stack[i];
}
Stack& Stack::operator= (const Stack &s){
   if (this != &s) {
      this->stack_top = s.stack_top;
      for (int i = 0; i < s.stack_top; i++)
          this->stack[i] = s.stack[i];
    }
return *this;
}

Stack::~Stack (void){
/* Not strictly necessary: : : */
this->stack_top = Stack::BOTTOM;
}

void Stack::push (ELEMENT_TYPE new_item){
this->stack[this->stack_top++] = new_item;
}

ELEMENT_TYPE Stack::pop (void){
return this->stack[--this->stack_top];
}

ELEMENT_TYPE Stack::top (void){
return this->stack[this->stack_top-1];
}

int Stack::is_empty (void){
return this->stack_top == Stack::BOTTOM;
}

int Stack::is_full (void){
return this->stack_top >= Stack::SIZE;
}


// Use of a bounded stack to reverse a name
//#include "stack.h"
int main (int argc, char *argv[]) {
const int MAX_NAME_LEN = 80;
	char name[MAX_NAME_LEN];
	Stack stack;
	cout << "please enter your name..: ";
	cin.getline (name, MAX_NAME_LEN);
	for (int i = 0; name[i] != '\0' && !stack.is_full (); i++)
		stack.push (ELEMENT_TYPE (name[i]));
	cout << "your name backwards is..: ";
	while (!stack.is_empty ())
		cout << char (stack.pop ());
	cout << '\n';
	getch();
}
