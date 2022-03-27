/***************************************************************888
**implementation of a simple Stack using a simple class:
	a Stack uses LIFO input/output method
**********************************************************************/

//----------------->JOHNN GLENN <------------------------------
#include <iostream>

#include <conio.h>
#include <cstdlib>

#define STACK_SIZE  100

class Stack{
	private:
		int items[STACK_SIZE];
		int count;
	public:
        Stack(void);//initialise stack using constructor
		void push(const int entry);//add an element
		int pop(void);//remove and display and element
		int peek(){
			return items[count];
		}
		~Stack(void);//introducing a destructor
		
 };
 Stack::Stack(void){
		count=0;
 }

Stack::~Stack(void){
	if(count!=0)std::cerr<<"\n\nWARNING::Destroying a non-empty stack\n\n";
}
void Stack::push(const int entry){
	if(count < STACK_SIZE)
	items[count++]=entry;
	else
	std::cout<<"Stack overflow"<<std::endl;
}
int Stack::pop(){
	if(count==0){
		std::cout<<"Stack underflow"<<std::endl;
		return 0;
	}
	return items[--count];
}


main(){//test stack
	Stack the_stack;
	std::cout<<"Dealing with stacks:\n\n";
	while(true){
	std::cout<<"Enter 1. To add element to stack.\n      2.To Display an element from the stack\n";
	std::cout<<"      Any non-digit to stop \n\n";
	int choice;
	std::cin.sync();
	if(std::cin>>choice)
		switch(choice){
			default:
				std::cout<<"This entry is unknown\a\a\n";
				break;
			case 1:
				int num;
				std::cout<<"Enter the element to add to stack:\n";
				std::cin.sync();
				std::cin>>num;
				the_stack.push(num);
				break;
			case 2:
				std::cout<<std::endl<<"Element popped is "<<the_stack.pop()<<std::endl;
		}//end switch
	else {
		std::cout<<"Press any key to exit....";
		getch();
		break;
	}
}//end while

}
