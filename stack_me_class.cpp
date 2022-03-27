/***************************************************************888
**implementation of a simple stack using a simple class:: a stack uses LIFO input/output method
**********************************************************************/

//----------------->JOHNN GLENN the P.O<------------------------------
#include <iostream>

#include <conio.h>
#include <cstdlib>

#define STACK_SIZE  100

class stack{
	private:
		int items[STACK_SIZE];
		int count;
	public:
        inline void init(void){//initialise stack
			count=0;
			}
		void push(const int entry);//add an element
		int pop(void);//remove and display and element
		//void peek(void);
 };

void stack::push(const int entry){
	if(count < STACK_SIZE)
	items[count++]=entry;
	else
	std::cout<<"Stack overflow"<<std::endl;
}
int stack::pop(){
	if(count==0){
		std::cout<<"Stack underflow"<<std::endl;
		return 0;
	}
	return items[--count];
}


main(){//test stack
	stack the_stack;
	std::cout<<"Dealing with stacks:\n\n";
	the_stack.init();
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
